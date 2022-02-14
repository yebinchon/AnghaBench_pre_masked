
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_14__ ;


typedef int push_routes_str_old ;
struct TYPE_28__ {int ApplyDhcpPushRoutes; scalar_t__ UseDhcp; scalar_t__ UseNat; int HubName; int DhcpPushRoutes; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_5__ VH_OPTION ;
typedef int UINT ;
struct TYPE_31__ {int ServerAdmin; TYPE_6__* Server; } ;
struct TYPE_30__ {scalar_t__ Type; int CurrentVersion; int lock_online; TYPE_4__* SecureNAT; TYPE_14__* SecureNATOption; TYPE_2__* Cedar; } ;
struct TYPE_29__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_27__ {TYPE_3__* Nat; } ;
struct TYPE_26__ {int Virtual; } ;
struct TYPE_25__ {TYPE_1__* Server; } ;
struct TYPE_24__ {scalar_t__ ServerType; } ;
struct TYPE_23__ {int UseNat; int UseDhcp; char* DhcpPushRoutes; } ;
typedef TYPE_6__ SERVER ;
typedef TYPE_7__ HUB ;
typedef int CEDAR ;
typedef TYPE_8__ ADMIN ;


 int FUNC_0 (TYPE_8__*,TYPE_7__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_14__*,TYPE_5__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*,char*) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_9 ;
 int FUNC_12 (TYPE_14__*,int) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (TYPE_7__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (int ,TYPE_5__*) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (char*,int,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;

UINT FUNC_20(ADMIN *VAR_12, VH_OPTION *VAR_13)
{
 SERVER *VAR_14 = VAR_12->Server;
 CEDAR *VAR_15 = VAR_14->Cedar;
 HUB *VAR_16;
 char VAR_17[VAR_9];


 if (FUNC_9(VAR_13->MacAddress, sizeof(VAR_13->MacAddress)) ||
  FUNC_7(&VAR_13->Ip) == 0 ||
  FUNC_8(&VAR_13->Mask) == 0)
 {
  return VAR_2;
 }
 if ((FUNC_5(&VAR_13->Ip) & (~(FUNC_5(&VAR_13->Mask)))) == 0)
 {
  return VAR_2;
 }
 if (FUNC_4(VAR_14, "b_support_securenat") == 0)
 {
  VAR_13->ApplyDhcpPushRoutes = 0;
 }
 if (VAR_13->ApplyDhcpPushRoutes)
 {
  if (FUNC_13(VAR_13->DhcpPushRoutes, sizeof(VAR_13->DhcpPushRoutes), VAR_13->DhcpPushRoutes) == 0)
  {
   return VAR_2;
  }
 }

 VAR_0;

 FUNC_11(VAR_15);
 {
  VAR_16 = FUNC_2(VAR_15, VAR_13->HubName);
 }
 FUNC_19(VAR_15);

 if (VAR_16 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_16->Type == VAR_7 || FUNC_4(VAR_14, "b_support_securenat") == 0)
 {
  FUNC_14(VAR_16);
  return VAR_5;
 }
 if (VAR_14->ServerType == VAR_11)
 {
  FUNC_14(VAR_16);
  return VAR_4;
 }

 if (VAR_12->ServerAdmin == 0 && FUNC_3(VAR_16, "no_securenat") != 0)
 {
  FUNC_14(VAR_16);
  return VAR_3;
 }

 if (VAR_16->SecureNATOption->UseNat == 0 && VAR_13->UseNat)
 {
  if (VAR_12->ServerAdmin == 0 && FUNC_3(VAR_16, "no_securenat_enablenat") != 0)
  {
   FUNC_14(VAR_16);
   return VAR_3;
  }
 }

 if (VAR_16->SecureNATOption->UseDhcp == 0 && VAR_13->UseDhcp)
 {
  if (VAR_12->ServerAdmin == 0 && FUNC_3(VAR_16, "no_securenat_enabledhcp") != 0)
  {
   FUNC_14(VAR_16);
   return VAR_3;
  }
 }

 FUNC_17(VAR_17, sizeof(VAR_17), VAR_16->SecureNATOption->DhcpPushRoutes);
 FUNC_1(VAR_16->SecureNATOption, VAR_13, sizeof(VH_OPTION));
 if (VAR_13->ApplyDhcpPushRoutes == 0)
 {
  FUNC_17(VAR_16->SecureNATOption->DhcpPushRoutes, sizeof(VAR_16->SecureNATOption->DhcpPushRoutes), VAR_17);
 }

 if (VAR_16->Type != VAR_8 && VAR_16->Cedar != ((void*)0) && VAR_16->Cedar->Server != ((void*)0) &&
  VAR_16->Cedar->Server->ServerType == VAR_10)
 {
  FUNC_12(VAR_16->SecureNATOption, 0);
 }

 FUNC_10(VAR_16->lock_online);
 {
  if (VAR_16->SecureNAT != ((void*)0))
  {
   FUNC_15(VAR_16->SecureNAT->Nat->Virtual, VAR_13);
  }
 }
 FUNC_18(VAR_16->lock_online);

 FUNC_0(VAR_12, VAR_16, "LA_SET_SNAT_OPTION");

 VAR_16->CurrentVersion++;
 FUNC_16(VAR_16);

 FUNC_6(VAR_14);

 FUNC_14(VAR_16);

 return VAR_6;
}
