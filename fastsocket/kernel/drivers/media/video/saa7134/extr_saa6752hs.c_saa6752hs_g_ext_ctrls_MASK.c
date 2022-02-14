
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; scalar_t__ controls; } ;
struct saa6752hs_state {int params; int has_ac3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 struct saa6752hs_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_ext_controls *VAR_3)
{
 struct saa6752hs_state *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_3->ctrl_class != VAR_1)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
  int VAR_6 = FUNC_0(VAR_4->has_ac3, &VAR_4->params, VAR_3->controls + VAR_5);

  if (VAR_6) {
   VAR_3->error_idx = VAR_5;
   return VAR_6;
  }
 }
 return 0;
}
