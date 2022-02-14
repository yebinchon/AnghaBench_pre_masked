
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int scuinterrupt_struct ;
struct TYPE_5__ {unsigned int NumberOfInterrupts; int IMS; TYPE_1__* interrupts; int IST; } ;
struct TYPE_4__ {int mask; int statusbit; int level; int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

void FUNC_2()
{
   unsigned int VAR_2, VAR_3;


   for (VAR_2 = 0; VAR_2 < VAR_1->NumberOfInterrupts; VAR_2++)
   {
      if (!(VAR_1->IMS & VAR_1->interrupts[VAR_1->NumberOfInterrupts-1-VAR_2].mask))
      {
         FUNC_0(VAR_0, VAR_1->interrupts[VAR_1->NumberOfInterrupts-1-VAR_2].vector, VAR_1->interrupts[VAR_1->NumberOfInterrupts-1-VAR_2].level);
         VAR_1->IST &= ~VAR_1->interrupts[VAR_1->NumberOfInterrupts-1-VAR_2].statusbit;


         for (VAR_3 = VAR_1->NumberOfInterrupts-1-VAR_2; VAR_3 < (VAR_1->NumberOfInterrupts-1); VAR_3++)
            FUNC_1(&VAR_1->interrupts[VAR_3], &VAR_1->interrupts[VAR_3+1], sizeof(scuinterrupt_struct));

         VAR_1->NumberOfInterrupts--;
         break;
      }
   }
}
