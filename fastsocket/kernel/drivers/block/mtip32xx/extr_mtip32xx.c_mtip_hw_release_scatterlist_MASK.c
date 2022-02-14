
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct semaphore {int dummy; } ;
struct driver_data {TYPE_1__* port; } ;
struct TYPE_2__ {struct semaphore cmd_slot; struct semaphore cmd_slot_unal; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct semaphore*) ;

__attribute__((used)) static void FUNC_2(struct driver_data *VAR_0, int VAR_1,
        int VAR_2)
{
 struct semaphore *VAR_3 = VAR_2 ? &VAR_0->port->cmd_slot_unal :
       &VAR_0->port->cmd_slot;
 FUNC_0(VAR_0->port, VAR_1);
 FUNC_1(VAR_3);
}
