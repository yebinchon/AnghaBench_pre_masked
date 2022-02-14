
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_timer {int list; int blink_timer; } ;
struct led_classdev {int node; int dev; int trigger_lock; scalar_t__ trigger; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct led_timer*) ;
 struct led_timer* FUNC_5 (struct led_classdev*) ;
 int VAR_3 ;
 int FUNC_6 (struct led_classdev*,int *) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct led_classdev *VAR_5)
{
 struct led_timer *VAR_6 = FUNC_5(VAR_5);
 unsigned long VAR_7;

 if (VAR_6) {
  FUNC_0(&VAR_6->blink_timer);
  FUNC_8(&VAR_3, VAR_7);
  FUNC_7(&VAR_6->list);
  FUNC_9(&VAR_3, VAR_7);
  FUNC_4(VAR_6);
 }

 FUNC_1(VAR_5->dev, &VAR_1);
 FUNC_1(VAR_5->dev, &VAR_0);
 FUNC_2(VAR_5->dev);

 FUNC_3(&VAR_4);
 FUNC_7(&VAR_5->node);
 FUNC_10(&VAR_4);
}
