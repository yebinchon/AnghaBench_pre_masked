
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (struct v4l2_queryctrl*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_9, struct v4l2_queryctrl *VAR_10)
{
 switch (VAR_10->id) {
 case 130:
  return FUNC_0(VAR_10, VAR_2,
      VAR_1, 1,
      VAR_0);
 case 128:
  return FUNC_0(VAR_10, VAR_8,
      VAR_7, 1 ,
      VAR_6);
 case 129:
  return FUNC_0(VAR_10, VAR_5,
      VAR_4, 1,
      VAR_3);
 default:
  break;
 }

 return 0;
}
