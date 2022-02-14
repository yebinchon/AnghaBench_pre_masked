
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct cx18*,int ) ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (struct cx18*,int ) ;
 int FUNC_3 (struct cx18*,int ) ;
 int FUNC_4 (struct cx18*,int ) ;

int FUNC_5(struct cx18 *VAR_1, struct v4l2_control *VAR_2)
{
 switch (VAR_2->id) {
 case 128:
  FUNC_4(VAR_1, VAR_2->value);
  break;
 case 131:
  FUNC_1(VAR_1, VAR_2->value);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_2->value);
  break;
 case 132:
  FUNC_0(VAR_1, VAR_2->value);
  break;
 case 130:
  FUNC_2(VAR_1, VAR_2->value);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
