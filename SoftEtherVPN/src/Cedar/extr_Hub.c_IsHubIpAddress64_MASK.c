
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* Value; } ;
typedef TYPE_1__ IPV6_ADDR ;



bool FUNC_0(IPV6_ADDR *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->Value[0] == 0xfe && VAR_0->Value[1] == 0x80 &&
  VAR_0->Value[2] == 0 &&
  VAR_0->Value[3] == 0 &&
  VAR_0->Value[4] == 0 &&
  VAR_0->Value[5] == 0 &&
  VAR_0->Value[6] == 0 &&
  VAR_0->Value[7] == 0 &&
  VAR_0->Value[8] == 0x02 && VAR_0->Value[9] == 0xae &&
  VAR_0->Value[11] == 0xff && VAR_0->Value[12] == 0xfe)
 {
  return 1;
 }

 return 0;
}
