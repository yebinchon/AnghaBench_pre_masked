
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {size_t SubnetMaskLen; int SubnetMask; int Network; scalar_t__ Exists; } ;
struct TYPE_5__ {scalar_t__ NumExistingRoutes; TYPE_2__* Entries; } ;
typedef int IP ;
typedef TYPE_1__ DHCP_CLASSLESS_ROUTE_TABLE ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 size_t VAR_0 ;

DHCP_CLASSLESS_ROUTE *FUNC_1(DHCP_CLASSLESS_ROUTE_TABLE *VAR_1, IP *VAR_2)
{
 DHCP_CLASSLESS_ROUTE *VAR_3 = ((void*)0);
 UINT VAR_4;
 UINT VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_1->NumExistingRoutes == 0)
 {
  return ((void*)0);
 }

 for (VAR_4 = 0;VAR_4 < VAR_0;VAR_4++)
 {
  DHCP_CLASSLESS_ROUTE *VAR_6 = &VAR_1->Entries[VAR_4];

  if (VAR_6->Exists)
  {
   if (FUNC_0(VAR_2, &VAR_6->Network, &VAR_6->SubnetMask))
   {
    if (VAR_5 <= VAR_6->SubnetMaskLen)
    {
     VAR_5 = VAR_6->SubnetMaskLen;
     VAR_3 = VAR_6;
    }
   }
  }
 }

 return VAR_3;
}
