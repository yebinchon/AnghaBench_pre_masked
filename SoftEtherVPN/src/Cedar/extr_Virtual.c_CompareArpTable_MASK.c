
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ IpAddress; } ;
typedef TYPE_1__ ARP_ENTRY ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 ARP_ENTRY *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(ARP_ENTRY **)VAR_0;
 VAR_3 = *(ARP_ENTRY **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->IpAddress > VAR_3->IpAddress)
 {
  return 1;
 }
 else if (VAR_2->IpAddress < VAR_3->IpAddress)
 {
  return -1;
 }
 return 0;
}
