
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcddr; } ;
typedef TYPE_1__* PitRegsPtr ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{
 volatile PitRegsPtr VAR_1 = (PitRegsPtr)VAR_0;

 FUNC_0 ("\r\n\nCalled bvme6000_reset\r\n"
   "\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r");




 VAR_1->pcddr |= 0x10;

 while(1)
  ;
}
