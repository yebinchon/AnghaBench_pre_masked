
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct v4l2_ext_control {int id; int value; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct v4l2_ext_control *VAR_7, int VAR_8)
{
 int VAR_9 = -VAR_0;

 switch (VAR_7->id) {
 case 133:
  if (VAR_7->value == VAR_1 ||
      (VAR_8 && VAR_7->value == VAR_2))
   VAR_9 = 0;
  break;
 case 128:
  if (VAR_7->value == VAR_6)
   VAR_9 = 0;
  break;




 case 130:
  if (VAR_7->value == VAR_4 ||
      VAR_7->value == VAR_5)
   VAR_9 = 0;
  break;
 case 131:
 {
  uint VAR_10 = VAR_7->value / 100000;
  if (VAR_10 >= 10 && VAR_10 <= 135)
   VAR_9 = 0;
  break;
 }
 case 129:
 {
  uint VAR_11 = VAR_7->value / 100000;
  if (VAR_11 >= 10 && VAR_11 <= 202)
   VAR_9 = 0;
  break;
 }
 case 132:
  if (VAR_7->value == VAR_3)
   VAR_9 = 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
