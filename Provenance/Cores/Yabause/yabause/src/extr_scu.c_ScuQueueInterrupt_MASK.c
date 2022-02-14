
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ vector; scalar_t__ level; size_t statusbit; int mask; } ;
typedef TYPE_1__ scuinterrupt_struct ;
struct TYPE_6__ {size_t NumberOfInterrupts; TYPE_1__* interrupts; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(u8 VAR_1, u8 VAR_2, u16 VAR_3, u32 VAR_4)
{
   u32 VAR_5, VAR_6;
   scuinterrupt_struct VAR_7;


   for (VAR_5 = 0; VAR_5 < VAR_0->NumberOfInterrupts; VAR_5++)
   {
      if (VAR_0->interrupts[VAR_5].vector == VAR_1)
         return;
   }

   VAR_0->interrupts[VAR_0->NumberOfInterrupts].vector = VAR_1;
   VAR_0->interrupts[VAR_0->NumberOfInterrupts].level = VAR_2;
   VAR_0->interrupts[VAR_0->NumberOfInterrupts].mask = VAR_3;
   VAR_0->interrupts[VAR_0->NumberOfInterrupts].statusbit = VAR_4;
   VAR_0->NumberOfInterrupts++;


   for (VAR_5 = 0; VAR_5 < (VAR_0->NumberOfInterrupts-1); VAR_5++)
   {
      for (VAR_6 = VAR_5+1; VAR_6 < VAR_0->NumberOfInterrupts; VAR_6++)
      {
         if (VAR_0->interrupts[VAR_5].level > VAR_0->interrupts[VAR_6].level)
         {
            FUNC_0(&VAR_7, &VAR_0->interrupts[VAR_5], sizeof(scuinterrupt_struct));
            FUNC_0(&VAR_0->interrupts[VAR_5], &VAR_0->interrupts[VAR_6], sizeof(scuinterrupt_struct));
            FUNC_0(&VAR_0->interrupts[VAR_6], &VAR_7, sizeof(scuinterrupt_struct));
         }
      }
   }
}
