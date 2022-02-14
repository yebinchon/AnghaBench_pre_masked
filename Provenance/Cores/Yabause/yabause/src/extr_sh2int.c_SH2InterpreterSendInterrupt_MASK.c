
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_6__ {scalar_t__ level; scalar_t__ vector; } ;
typedef TYPE_2__ interrupt_struct ;
struct TYPE_7__ {size_t NumberOfInterrupts; TYPE_1__* interrupts; } ;
struct TYPE_5__ {scalar_t__ vector; scalar_t__ level; } ;
typedef TYPE_3__ SH2_struct ;



void FUNC_0(SH2_struct *VAR_0, u8 VAR_1, u8 VAR_2)
{
   u32 VAR_3, VAR_4;
   interrupt_struct VAR_5;


   for (VAR_3 = 0; VAR_3 < VAR_0->NumberOfInterrupts; VAR_3++)
   {
      if (VAR_0->interrupts[VAR_3].vector == VAR_1)
         return;
   }

   VAR_0->interrupts[VAR_0->NumberOfInterrupts].level = VAR_2;
   VAR_0->interrupts[VAR_0->NumberOfInterrupts].vector = VAR_1;
   VAR_0->NumberOfInterrupts++;


   for (VAR_3 = 0; VAR_3 < (VAR_0->NumberOfInterrupts-1); VAR_3++)
   {
      for (VAR_4 = VAR_3+1; VAR_4 < VAR_0->NumberOfInterrupts; VAR_4++)
      {
         if (VAR_0->interrupts[VAR_3].level > VAR_0->interrupts[VAR_4].level)
         {
            VAR_5.level = VAR_0->interrupts[VAR_3].level;
            VAR_5.vector = VAR_0->interrupts[VAR_3].vector;
            VAR_0->interrupts[VAR_3].level = VAR_0->interrupts[VAR_4].level;
            VAR_0->interrupts[VAR_3].vector = VAR_0->interrupts[VAR_4].vector;
            VAR_0->interrupts[VAR_4].level = VAR_5.level;
            VAR_0->interrupts[VAR_4].vector = VAR_5.vector;
         }
      }
   }
}
