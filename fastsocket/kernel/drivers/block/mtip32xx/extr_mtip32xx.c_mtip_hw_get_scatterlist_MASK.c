
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct semaphore {int dummy; } ;
struct scatterlist {int dummy; } ;
struct driver_data {TYPE_2__* port; int dd_flag; } ;
struct TYPE_4__ {TYPE_1__* commands; struct semaphore cmd_slot; struct semaphore cmd_slot_unal; } ;
struct TYPE_3__ {struct scatterlist* sg; } ;


 int VAR_0 ;
 int FUNC_0 (struct semaphore*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct semaphore*) ;

__attribute__((used)) static struct scatterlist *FUNC_5(struct driver_data *VAR_1,
         int *VAR_2, int VAR_3)
{
 struct semaphore *VAR_4 = VAR_3 ? &VAR_1->port->cmd_slot_unal :
       &VAR_1->port->cmd_slot;






 FUNC_0(VAR_4);
 *VAR_2 = FUNC_1(VAR_1->port);

 if (FUNC_3(FUNC_2(VAR_0, &VAR_1->dd_flag))) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }
 if (FUNC_3(*VAR_2 < 0)) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 return VAR_1->port->commands[*VAR_2].sg;
}
