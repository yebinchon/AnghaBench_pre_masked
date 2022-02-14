
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {scalar_t__ VlanId; scalar_t__* MacAddress; } ;
typedef TYPE_1__ MAC_TABLE_ENTRY ;



UINT FUNC_0(void *VAR_0)
{
 UINT VAR_1;
 MAC_TABLE_ENTRY *VAR_2 = VAR_0;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = VAR_2->MacAddress[0] + VAR_2->MacAddress[1] + VAR_2->MacAddress[2] +
  VAR_2->MacAddress[3] + VAR_2->MacAddress[4] + VAR_2->MacAddress[5] +
  VAR_2->VlanId;

 return VAR_1;
}
