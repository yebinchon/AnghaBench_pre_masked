
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CSR; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

uint32_t FUNC_2(uint32_t VAR_4)
{
  uint32_t VAR_5 = 0x0;


  FUNC_1(FUNC_0(VAR_4));


  if ((VAR_0->CSR & (VAR_1<<VAR_4)) != 0)
  {
    VAR_5 = VAR_2;
  }
  else
  {
    VAR_5 = VAR_3;
  }


  return (uint32_t)(VAR_5);
}
