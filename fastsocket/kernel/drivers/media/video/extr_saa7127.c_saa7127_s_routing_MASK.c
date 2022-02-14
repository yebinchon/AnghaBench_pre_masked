
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa7127_state {scalar_t__ input_type; scalar_t__ output_type; } ;


 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__) ;
 struct saa7127_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
        u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct saa7127_state *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = 0;

 if (VAR_4->input_type != VAR_1)
  VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5 == 0 && VAR_4->output_type != VAR_2)
  VAR_5 = FUNC_1(VAR_0, VAR_2);
 return VAR_5;
}
