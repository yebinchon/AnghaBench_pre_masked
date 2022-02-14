
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
typedef enum v4l2_exposure_auto_type { ____Placeholder_v4l2_exposure_auto_type } v4l2_exposure_auto_type ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ) ;
 int FUNC_7 (struct v4l2_subdev*,int ) ;
 int FUNC_8 (struct v4l2_subdev*,int ) ;
 int FUNC_9 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 switch (VAR_2->id) {
 case 136:
  return FUNC_2(VAR_1, VAR_2->value);
 case 135:
  return FUNC_3(VAR_1, VAR_2->value);
 case 129:
  return FUNC_8(VAR_1, VAR_2->value);
 case 130:
  return FUNC_7(VAR_1, VAR_2->value);
 case 128:
  return FUNC_9(VAR_1, VAR_2->value);
 case 131:
  return FUNC_6(VAR_1, VAR_2->value);
 case 132:
  return FUNC_5(VAR_1, VAR_2->value);
 case 137:
  return FUNC_1(VAR_1, VAR_2->value);
 case 134:
  return FUNC_4(VAR_1, VAR_2->value);
 case 133:
  return FUNC_0(VAR_1,
    (enum v4l2_exposure_auto_type) VAR_2->value);
 }
 return -VAR_0;
}
