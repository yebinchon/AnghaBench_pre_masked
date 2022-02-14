
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; scalar_t__ controls; } ;
struct saa6752hs_mpeg_params {int dummy; } ;
struct saa6752hs_state {struct saa6752hs_mpeg_params params; int has_ac3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct saa6752hs_mpeg_params*,scalar_t__,int) ;
 struct saa6752hs_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_ext_controls *VAR_3, int VAR_4)
{
 struct saa6752hs_state *VAR_5 = FUNC_1(VAR_2);
 struct saa6752hs_mpeg_params VAR_6;
 int VAR_7;

 if (VAR_3->ctrl_class != VAR_1)
  return -VAR_0;

 VAR_6 = VAR_5->params;
 for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++) {
  int VAR_8 = FUNC_0(VAR_5->has_ac3, &VAR_6, VAR_3->controls + VAR_7, VAR_4);

  if (VAR_8) {
   VAR_3->error_idx = VAR_7;
   return VAR_8;
  }
 }
 if (VAR_4)
  VAR_5->params = VAR_6;
 return 0;
}
