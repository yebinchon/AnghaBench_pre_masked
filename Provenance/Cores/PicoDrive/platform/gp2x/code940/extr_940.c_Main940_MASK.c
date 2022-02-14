
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lastjob; int* writebuff0; int* writebuff1; int loopc; int rate; int baseclock; } ;
struct TYPE_4__ {int* REGS; } ;
struct TYPE_5__ {int* ym_buffer; void* mp3dec; TYPE_1__ ym2612; } ;
 int FUNC_0 (void*) ;
 void* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_12 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_13 () ;
 int FUNC_14 (int*) ;

void FUNC_15(void)
{
 int *VAR_3 = VAR_1->ym_buffer;
 int VAR_4 = 0;
 VAR_2 = &VAR_1->ym2612;


 for (;;)
 {
  VAR_4 = FUNC_12(VAR_4);

  VAR_0->lastjob = VAR_4;

  switch (VAR_4)
  {
   case 137:

    VAR_0->writebuff0[0] = VAR_0->writebuff1[0] = 0xffff;
    FUNC_2(VAR_0->baseclock, VAR_0->rate);

    VAR_1->mp3dec = FUNC_1();
    break;

   case 136:
    FUNC_10();
    FUNC_9();
    break;

   case 129:
    FUNC_6();
    break;

   case 133:
    FUNC_4();
    break;

   case 130:
    FUNC_5(0, 0);
    FUNC_7(VAR_0->writebuff0, VAR_2->REGS, 0x200);
    break;

   case 131:
    FUNC_13();
    break;

   case 132:
    FUNC_7(VAR_2->REGS, VAR_0->writebuff0, 0x200);
    FUNC_3(0, 0);
    break;

   case 128:
    FUNC_14(VAR_3);
    break;

   case 135:
    FUNC_11();
    break;

   case 134:
    if (VAR_1->mp3dec) FUNC_0(VAR_1->mp3dec);
    VAR_1->mp3dec = FUNC_1();
    break;
  }

  VAR_0->loopc++;
  FUNC_8();
 }
}
