
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int Active; int DhcpLeaseList; } ;
typedef TYPE_1__ VH ;
typedef size_t UINT ;
struct TYPE_18__ {int Hostname; int Mask; int IpAddress; int MacAddress; int ExpireTime; int LeasedTime; int Id; } ;
struct TYPE_17__ {int Online; int lock; TYPE_1__* Virtual; } ;
struct TYPE_16__ {int NumItem; TYPE_2__* Items; } ;
struct TYPE_15__ {int Hostname; int Mask; int IpAddress; int MacAddress; void* ExpireTime; void* LeasedTime; int Id; } ;
typedef TYPE_2__ RPC_ENUM_DHCP_ITEM ;
typedef TYPE_3__ RPC_ENUM_DHCP ;
typedef TYPE_4__ NAT ;
typedef TYPE_5__ DHCP_LEASE ;


 int FUNC_0 (int ,int ,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_5__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int,int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_13 (int) ;

UINT FUNC_14(NAT *VAR_2, RPC_ENUM_DHCP *VAR_3)
{
 UINT VAR_4 = VAR_0;
 VH *VAR_5 = ((void*)0);

 FUNC_4(VAR_2->lock);
 {
  VAR_5 = VAR_2->Virtual;

  if (VAR_2->Online == 0 || VAR_5 == ((void*)0))
  {
   VAR_4 = VAR_1;
  }
  else
  {
   FUNC_6(VAR_5);
   {
    if (VAR_5->Active == 0)
    {
     VAR_4 = VAR_1;
    }
    else
    {
     FUNC_1(VAR_3);
     FUNC_12(VAR_3, sizeof(RPC_ENUM_DHCP));

     FUNC_5(VAR_5->DhcpLeaseList);
     {
      UINT VAR_6;
      VAR_3->NumItem = FUNC_3(VAR_5->DhcpLeaseList);
      VAR_3->Items = FUNC_13(sizeof(RPC_ENUM_DHCP_ITEM) * VAR_3->NumItem);

      for (VAR_6 = 0;VAR_6 < VAR_3->NumItem;VAR_6++)
      {
       DHCP_LEASE *VAR_7 = FUNC_2(VAR_5->DhcpLeaseList, VAR_6);
       RPC_ENUM_DHCP_ITEM *VAR_8 = &VAR_3->Items[VAR_6];

       VAR_8->Id = VAR_7->Id;
       VAR_8->LeasedTime = FUNC_8(VAR_7->LeasedTime);
       VAR_8->ExpireTime = FUNC_8(VAR_7->ExpireTime);
       FUNC_0(VAR_8->MacAddress, VAR_7->MacAddress, 6);
       VAR_8->IpAddress = VAR_7->IpAddress;
       VAR_8->Mask = VAR_7->Mask;
       FUNC_7(VAR_8->Hostname, sizeof(VAR_8->Hostname), VAR_7->Hostname);
      }
     }
     FUNC_10(VAR_5->DhcpLeaseList);
    }
   }
   FUNC_11(VAR_5);
  }
 }
 FUNC_9(VAR_2->lock);

 return VAR_4;
}
