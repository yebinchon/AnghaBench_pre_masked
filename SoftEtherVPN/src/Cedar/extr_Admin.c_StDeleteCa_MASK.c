
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int X ;
typedef int UINT ;
struct TYPE_18__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_17__ {TYPE_1__* HubDb; } ;
struct TYPE_16__ {int Key; int HubName; } ;
struct TYPE_15__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_14__ {int RootCertList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_HUB_DELETE_CA ;
typedef TYPE_4__ HUB ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

UINT FUNC_13(ADMIN *VAR_8, RPC_HUB_DELETE_CA *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 UINT VAR_13 = VAR_4;

 if (VAR_10->ServerType == VAR_7)
 {
  return VAR_3;
 }

 VAR_6;
 VAR_0;

 FUNC_8(VAR_11);
 {
  VAR_12 = FUNC_3(VAR_11, VAR_9->HubName);
 }
 FUNC_11(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_8->ServerAdmin == 0 && FUNC_4(VAR_12, "no_change_cert_list") != 0)
 {
  FUNC_10(VAR_12);
  return VAR_2;
 }

 FUNC_9(VAR_12->HubDb->RootCertList);
 {
  if (FUNC_6(VAR_12->HubDb->RootCertList, VAR_9->Key))
  {
   X *VAR_14 = FUNC_7(VAR_12->HubDb->RootCertList, VAR_9->Key);
   FUNC_1(VAR_12->HubDb->RootCertList, VAR_14);
   FUNC_2(VAR_14);

   FUNC_0(VAR_8, VAR_12, "LA_DELETE_CA");

   FUNC_5(VAR_10);
  }
  else
  {
   VAR_13 = VAR_5;
  }
 }
 FUNC_12(VAR_12->HubDb->RootCertList);

 FUNC_10(VAR_12);

 return VAR_13;
}
