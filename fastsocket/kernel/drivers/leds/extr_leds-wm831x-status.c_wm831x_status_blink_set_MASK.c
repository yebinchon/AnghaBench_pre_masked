
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_status {int blink_time; int blink_cyc; int blink; int value_lock; int work; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct wm831x_status* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_4(struct led_classdev *VAR_1,
       unsigned long *VAR_2,
       unsigned long *VAR_3)
{
 struct wm831x_status *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5;
 int VAR_6 = 0;


 if (*VAR_2 == 0 && *VAR_3 == 0) {
  *VAR_2 = 250;
  *VAR_3 = 250;
 }

 FUNC_1(&VAR_4->value_lock, VAR_5);



 switch (*VAR_2) {
 case 1000:
  VAR_4->blink_time = 0;
  break;
 case 250:
  VAR_4->blink_time = 1;
  break;
 case 125:
  VAR_4->blink_time = 2;
  break;
 case 62:
 case 63:

  VAR_4->blink_time = 3;
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 if (VAR_6 == 0) {
  switch (*VAR_3 / *VAR_2) {
  case 1:
   VAR_4->blink_cyc = 0;
   break;
  case 3:
   VAR_4->blink_cyc = 1;
   break;
  case 4:
   VAR_4->blink_cyc = 2;
   break;
  case 8:
   VAR_4->blink_cyc = 3;
   break;
  default:
   VAR_6 = -VAR_0;
   break;
  }
 }

 if (VAR_6 == 0)
  VAR_4->blink = 1;
 else
  VAR_4->blink = 0;



 FUNC_0(&VAR_4->work);

 FUNC_2(&VAR_4->value_lock, VAR_5);

 return VAR_6;
}
