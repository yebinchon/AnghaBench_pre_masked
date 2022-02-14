
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct led_timer {int list; TYPE_1__ blink_timer; struct led_classdev* cdev; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct led_timer* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct led_timer *FUNC_5(struct led_classdev *VAR_4)
{
 struct led_timer *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(sizeof(struct led_timer), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->cdev = VAR_4;
 FUNC_0(&VAR_5->blink_timer);
 VAR_5->blink_timer.function = VAR_2;
 VAR_5->blink_timer.data = (unsigned long) VAR_5;

 FUNC_3(&VAR_1, VAR_6);
 FUNC_2(&VAR_5->list, &VAR_3);
 FUNC_4(&VAR_1, VAR_6);

 return VAR_5;
}
