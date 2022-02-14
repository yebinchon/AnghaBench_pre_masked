
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl {int val; char* string; int type; int step; int minimum; int maximum; char** qmenu; int menu_skip_mask; int val64; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;







 size_t FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ctrl *VAR_2)
{
 s32 VAR_3 = VAR_2->val;
 char *VAR_4 = VAR_2->string;
 u32 VAR_5;
 size_t VAR_6;

 switch (VAR_2->type) {
 case 131:

  VAR_3 += VAR_2->step / 2;
  if (VAR_3 < VAR_2->minimum)
   VAR_3 = VAR_2->minimum;
  if (VAR_3 > VAR_2->maximum)
   VAR_3 = VAR_2->maximum;
  VAR_5 = VAR_3 - VAR_2->minimum;
  VAR_5 = VAR_2->step * (VAR_5 / VAR_2->step);
  VAR_3 = VAR_2->minimum + VAR_5;
  VAR_2->val = VAR_3;
  return 0;

 case 134:
  VAR_2->val = !!VAR_2->val;
  return 0;

 case 129:
  if (VAR_3 < VAR_2->minimum || VAR_3 > VAR_2->maximum)
   return -VAR_1;
  if (VAR_2->qmenu[VAR_3][0] == '\0' ||
      (VAR_2->menu_skip_mask & (1 << VAR_3)))
   return -VAR_0;
  return 0;

 case 133:
 case 132:
  VAR_2->val64 = 0;
  return 0;

 case 130:
  return 0;

 case 128:
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6 < VAR_2->minimum)
   return -VAR_1;
  if ((VAR_6 - VAR_2->minimum) % VAR_2->step)
   return -VAR_1;
  return 0;

 default:
  return -VAR_0;
 }
}
