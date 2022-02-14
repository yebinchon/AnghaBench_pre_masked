
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int counter; int trigger_sem; } ;
typedef TYPE_1__ counter_config_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    counter_config_t *VAR_2 = (counter_config_t *)VAR_1;
    FUNC_0("counter_task running...\n");
    while(1) {
        FUNC_1(VAR_2->trigger_sem, VAR_0);
        VAR_2->counter++;
    }
}
