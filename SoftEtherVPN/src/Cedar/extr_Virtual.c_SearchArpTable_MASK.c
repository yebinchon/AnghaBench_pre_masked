
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ArpTable; } ;
typedef TYPE_1__ VH ;
typedef int UINT ;
struct TYPE_8__ {int IpAddress; } ;
typedef TYPE_2__ ARP_ENTRY ;


 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;

ARP_ENTRY *FUNC_1(VH *VAR_0, UINT VAR_1)
{
 ARP_ENTRY *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3.IpAddress = VAR_1;
 VAR_2 = FUNC_0(VAR_0->ArpTable, &VAR_3);

 return VAR_2;
}
