
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int DhcpLeaseList; } ;
typedef TYPE_1__ VH ;
typedef int UCHAR ;
struct TYPE_8__ {int MacAddress; } ;
typedef TYPE_2__ DHCP_LEASE ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*) ;

DHCP_LEASE *FUNC_2(VH *VAR_0, UCHAR *VAR_1)
{
 DHCP_LEASE *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(&VAR_3.MacAddress, VAR_1, 6);
 VAR_2 = FUNC_1(VAR_0->DhcpLeaseList, &VAR_3);

 return VAR_2;
}
