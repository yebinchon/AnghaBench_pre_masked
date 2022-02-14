
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int scuinterrupt_struct ;
struct TYPE_4__ {scalar_t__ all; } ;
struct TYPE_6__ {TYPE_1__ ProgControlPort; } ;
struct TYPE_5__ {int D0AD; int D1AD; int D2AD; int D0EN; int D1EN; int D2EN; int D0MD; int D1MD; int D2MD; int DSTP; int DSTA; int PDA; int T1MD; int IMS; int IST; int AIACK; int ASR0; int ASR1; int AREF; int RSEL; int VER; scalar_t__ NumberOfInterrupts; scalar_t__ interrupts; scalar_t__ timer1; scalar_t__ timer0; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (void*,int ,int) ;

void FUNC_1(void) {
   VAR_1->D0AD = VAR_1->D1AD = VAR_1->D2AD = 0x101;
   VAR_1->D0EN = VAR_1->D1EN = VAR_1->D2EN = 0x0;
   VAR_1->D0MD = VAR_1->D1MD = VAR_1->D2MD = 0x7;
   VAR_1->DSTP = 0x0;
   VAR_1->DSTA = 0x0;

   VAR_0->ProgControlPort.all = 0;
   VAR_1->PDA = 0x0;

   VAR_1->T1MD = 0x0;

   VAR_1->IMS = 0xBFFF;
   VAR_1->IST = 0x0;

   VAR_1->AIACK = 0x0;
   VAR_1->ASR0 = VAR_1->ASR1 = 0x0;
   VAR_1->AREF = 0x0;

   VAR_1->RSEL = 0x0;
   VAR_1->VER = 0x04;

   VAR_1->timer0 = 0;
   VAR_1->timer1 = 0;

   FUNC_0((void *)VAR_1->interrupts, 0, sizeof(scuinterrupt_struct) * 30);
   VAR_1->NumberOfInterrupts = 0;
}
