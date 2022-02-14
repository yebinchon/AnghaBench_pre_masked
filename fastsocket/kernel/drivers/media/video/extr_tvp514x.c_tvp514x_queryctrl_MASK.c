
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; int default_value; int maximum; int minimum; int name; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_queryctrl *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_3 == ((void*)0))
  return VAR_4;

 switch (VAR_3->id) {
 case 131:

  VAR_4 = FUNC_0(VAR_3, 0, 255, 1, 128);
  break;
 case 130:
 case 128:





  VAR_4 = FUNC_0(VAR_3, 0, 255, 1, 128);
  break;
 case 129:



  VAR_4 = FUNC_0(VAR_3, -180, 180, 180, 0);
  break;
 case 132:




  VAR_4 = FUNC_0(VAR_3, 0, 1, 1, 1);
  break;
 default:
  FUNC_2(VAR_2, "invalid control id %d\n", VAR_3->id);
  return VAR_4;
 }

 FUNC_1(1, VAR_1, VAR_2, "Query Control:%s: Min - %d, Max - %d, Def - %d",
   VAR_3->name, VAR_3->minimum, VAR_3->maximum,
   VAR_3->default_value);

 return VAR_4;
}
