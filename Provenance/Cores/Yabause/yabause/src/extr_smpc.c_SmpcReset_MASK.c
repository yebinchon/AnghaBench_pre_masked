
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resd; int port2; int port1; scalar_t__ timing; scalar_t__ firstPeri; scalar_t__ intbackIreg0; scalar_t__ intback; scalar_t__ resb; scalar_t__ ste; scalar_t__ cdres; scalar_t__ sndres; scalar_t__ sysres; scalar_t__ mshnmi; scalar_t__ dotsel; scalar_t__ SMEM; } ;
typedef int Smpc ;
typedef int PortData_struct ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*,int ,int) ;

void FUNC_2(void) {
   FUNC_1((void *)VAR_1, 0, sizeof(Smpc));
   FUNC_1((void *)VAR_0->SMEM, 0, 4);

   FUNC_0();

   VAR_0->dotsel = 0;
   VAR_0->mshnmi = 0;
   VAR_0->sysres = 0;
   VAR_0->sndres = 0;
   VAR_0->cdres = 0;
   VAR_0->resd = 1;
   VAR_0->ste = 0;
   VAR_0->resb = 0;

   VAR_0->intback=0;
   VAR_0->intbackIreg0=0;
   VAR_0->firstPeri=0;

   VAR_0->timing=0;

   FUNC_1((void *)&VAR_0->port1, 0, sizeof(PortData_struct));
   FUNC_1((void *)&VAR_0->port2, 0, sizeof(PortData_struct));
}
