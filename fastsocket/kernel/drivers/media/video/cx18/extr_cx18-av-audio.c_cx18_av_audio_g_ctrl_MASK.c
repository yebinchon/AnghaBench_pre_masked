
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct cx18*) ;
 int FUNC_1 (struct cx18*) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*) ;

int FUNC_5(struct cx18 *VAR_1, struct v4l2_control *VAR_2)
{
 switch (VAR_2->id) {
 case 128:
  VAR_2->value = FUNC_4(VAR_1);
  break;
 case 131:
  VAR_2->value = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_2->value = FUNC_3(VAR_1);
  break;
 case 132:
  VAR_2->value = FUNC_0(VAR_1);
  break;
 case 130:
  VAR_2->value = FUNC_2(VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
