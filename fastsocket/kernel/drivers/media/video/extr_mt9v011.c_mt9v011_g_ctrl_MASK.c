
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct mt9v011 {int global_gain; int red_bal; int blue_bal; int vflip; int hflip; } ;


 int VAR_0 ;





 int VAR_1 ;
 struct mt9v011* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct mt9v011 *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(1, VAR_1, VAR_2, "g_ctrl called\n");

 switch (VAR_3->id) {
 case 131:
  VAR_3->value = VAR_4->global_gain;
  return 0;
 case 129:
  VAR_3->value = VAR_4->red_bal;
  return 0;
 case 132:
  VAR_3->value = VAR_4->blue_bal;
  return 0;
 case 130:
  VAR_3->value = VAR_4->hflip ? 1 : 0;
  return 0;
 case 128:
  VAR_3->value = VAR_4->vflip ? 1 : 0;
  return 0;
 }
 return -VAR_0;
}
