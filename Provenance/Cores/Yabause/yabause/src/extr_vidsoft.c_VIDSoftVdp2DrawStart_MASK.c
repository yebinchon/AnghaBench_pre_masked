
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CCCTL; int CYCA0L; int CYCA0U; int CYCA1L; int CYCA1U; int CYCB0L; int CYCB0U; int CYCB1L; int CYCB1U; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_4 ;
 int* VAR_5 ;

void FUNC_3(void)
{
   int VAR_6 = VAR_2;
   if (VAR_4->CCCTL & 0x100) VAR_6 = VAR_0;
   else if (VAR_4->CCCTL & 0x200) VAR_6 = VAR_1;
   FUNC_0(VAR_6);

   FUNC_1();
   FUNC_2();


   if (VAR_4->CYCA0L == 0x5566 &&
      VAR_4->CYCA0U == 0x47ff &&
      VAR_4->CYCA1L == 0xffff &&
      VAR_4->CYCA1U == 0xffff &&
      VAR_4->CYCB0L == 0x12ff &&
      VAR_4->CYCB0U == 0x03ff &&
      VAR_4->CYCB1L == 0xffff &&
      VAR_4->CYCB1U == 0xffff)
   {
      VAR_5[VAR_3] = 1;
   }
   else
      VAR_5[VAR_3] = 0;
}
