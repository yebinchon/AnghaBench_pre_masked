
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ VlanId; int MacAddress; } ;
typedef TYPE_1__ MAC_TABLE_ENTRY ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 int VAR_2;
 MAC_TABLE_ENTRY *VAR_3, *VAR_4;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_3 = *(MAC_TABLE_ENTRY **)VAR_0;
 VAR_4 = *(MAC_TABLE_ENTRY **)VAR_1;
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = FUNC_0(VAR_3->MacAddress, VAR_4->MacAddress, 6);
 if (VAR_2 != 0)
 {
  return VAR_2;
 }
 if (VAR_3->VlanId > VAR_4->VlanId)
 {
  return 1;
 }
 else if (VAR_3->VlanId < VAR_4->VlanId)
 {
  return -1;
 }
 return 0;
}
