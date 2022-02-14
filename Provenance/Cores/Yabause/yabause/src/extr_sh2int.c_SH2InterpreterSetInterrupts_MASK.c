
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int interrupt_struct ;
struct TYPE_3__ {int NumberOfInterrupts; int interrupts; } ;
typedef TYPE_1__ SH2_struct ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int) ;

void FUNC_1(SH2_struct *VAR_1, int VAR_2,
                                 const interrupt_struct VAR_3[VAR_0])
{
   FUNC_0(VAR_1->interrupts, VAR_3, sizeof(interrupt_struct) * VAR_0);
   VAR_1->NumberOfInterrupts = VAR_2;
}
