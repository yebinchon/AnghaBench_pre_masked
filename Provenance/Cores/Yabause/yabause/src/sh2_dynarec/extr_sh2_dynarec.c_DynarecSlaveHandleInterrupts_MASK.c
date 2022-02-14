
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int NumberOfInterrupts; scalar_t__ isSleeping; scalar_t__ isIdle; TYPE_1__* interrupts; } ;
struct TYPE_3__ {int level; int vector; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

void FUNC_3()
{
  if (VAR_1->interrupts[VAR_1->NumberOfInterrupts-1].level > ((VAR_5[VAR_0]>>4)&0xF))
  {
    VAR_5[15] -= 4;
    FUNC_1(VAR_5[15], VAR_5[VAR_0]);
    VAR_5[15] -= 4;
    FUNC_1(VAR_5[15], VAR_4);
    VAR_5[VAR_0] &= 0xFFFFFF0F;
    VAR_5[VAR_0] |= (VAR_1->interrupts[VAR_1->NumberOfInterrupts-1].level)<<4;
    VAR_4 = FUNC_0(VAR_5[VAR_2] + (VAR_1->interrupts[VAR_1->NumberOfInterrupts-1].vector << 2));
    VAR_3 = FUNC_2(VAR_4|1);
    VAR_1->NumberOfInterrupts--;
    VAR_1->isIdle = 0;
    VAR_1->isSleeping = 0;
  }


}
