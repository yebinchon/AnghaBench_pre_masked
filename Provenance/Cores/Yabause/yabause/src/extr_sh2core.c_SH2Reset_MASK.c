
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int interrupt_struct ;
struct TYPE_20__ {scalar_t__ numbacktrace; } ;
struct TYPE_19__ {int isinterval; int shift; scalar_t__ leftover; scalar_t__ isenable; } ;
struct TYPE_18__ {int shift; scalar_t__ leftover; } ;
struct TYPE_21__ {int delay; TYPE_3__ bt; scalar_t__ interrupts; TYPE_2__ wdt; TYPE_1__ frc; scalar_t__ isIdle; scalar_t__ cycles; } ;
struct TYPE_17__ {int (* Reset ) (TYPE_4__*) ;int (* SetInterrupts ) (TYPE_4__*,int ,scalar_t__) ;int (* SetPR ) (TYPE_4__*,int) ;int (* SetMACL ) (TYPE_4__*,int) ;int (* SetMACH ) (TYPE_4__*,int) ;int (* SetVBR ) (TYPE_4__*,int) ;int (* SetGBR ) (TYPE_4__*,int) ;int (* SetSR ) (TYPE_4__*,int) ;int (* SetGPR ) (TYPE_4__*,int,int) ;} ;
typedef TYPE_4__ SH2_struct ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_15__* VAR_1 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_10 (TYPE_4__*) ;

void FUNC_11(SH2_struct *VAR_2)
{
   int VAR_3;


   for (VAR_3 = 0; VAR_3 < 15; VAR_3++)
      VAR_1->SetGPR(VAR_2, VAR_3, 0x00000000);

   VAR_1->SetSR(VAR_2, 0x000000F0);
   VAR_1->SetGBR(VAR_2, 0x00000000);
   VAR_1->SetVBR(VAR_2, 0x00000000);
   VAR_1->SetMACH(VAR_2, 0x00000000);
   VAR_1->SetMACL(VAR_2, 0x00000000);
   VAR_1->SetPR(VAR_2, 0x00000000);


   VAR_2->delay = 0x00000000;
   VAR_2->cycles = 0;
   VAR_2->isIdle = 0;

   VAR_2->frc.leftover = 0;
   VAR_2->frc.shift = 3;

   VAR_2->wdt.isenable = 0;
   VAR_2->wdt.isinterval = 1;
   VAR_2->wdt.shift = 1;
   VAR_2->wdt.leftover = 0;


   FUNC_1((void *)VAR_2->interrupts, 0, sizeof(interrupt_struct) * VAR_0);
   VAR_1->SetInterrupts(VAR_2, 0, VAR_2->interrupts);


   VAR_1->Reset(VAR_2);


   FUNC_0(VAR_2);


   VAR_2->bt.numbacktrace = 0;
}
