
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {struct heartbeat_trig_data* trigger_data; } ;
struct TYPE_2__ {int data; } ;
struct heartbeat_trig_data {TYPE_1__ timer; scalar_t__ phase; } ;


 int VAR_0 ;
 struct heartbeat_trig_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int (*) (int ),unsigned long) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_1)
{
 struct heartbeat_trig_data *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return;

 VAR_1->trigger_data = VAR_2;
 FUNC_2(&VAR_2->timer,
      FUNC_1, (unsigned long) VAR_1);
 VAR_2->phase = 0;
 FUNC_1(VAR_2->timer.data);
}
