
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int hubname ;
typedef int X ;
typedef int UINT ;
struct TYPE_16__ {TYPE_2__* Server; } ;
struct TYPE_15__ {TYPE_1__* HubDb; } ;
struct TYPE_14__ {char* HubName; int Cert; int Key; } ;
struct TYPE_13__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_12__ {int RootCertList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_HUB_GET_CA ;
typedef TYPE_4__ HUB ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int) ;

UINT FUNC_12(ADMIN *VAR_8, RPC_HUB_GET_CA *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 UINT VAR_13 = VAR_3;
 char VAR_14[VAR_5 + 1];
 UINT VAR_15;

 if (VAR_10->ServerType == VAR_7)
 {
  return VAR_2;
 }

 VAR_6;

 FUNC_8(VAR_14, sizeof(VAR_14), VAR_9->HubName);
 VAR_15 = VAR_9->Key;

 FUNC_1(VAR_9);
 FUNC_11(VAR_9, sizeof(RPC_HUB_GET_CA));
 VAR_9->Key = VAR_15;
 FUNC_8(VAR_9->HubName, sizeof(VAR_9->HubName), VAR_14);

 VAR_0;

 FUNC_5(VAR_11);
 {
  VAR_12 = FUNC_2(VAR_11, VAR_9->HubName);
 }
 FUNC_9(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_6(VAR_12->HubDb->RootCertList);
 {
  if (FUNC_3(VAR_12->HubDb->RootCertList, VAR_15))
  {
   X *VAR_16 = FUNC_4(VAR_12->HubDb->RootCertList, VAR_15);

   VAR_9->Cert = FUNC_0(VAR_16);
  }
  else
  {
   VAR_13 = VAR_4;
  }
 }
 FUNC_10(VAR_12->HubDb->RootCertList);

 FUNC_7(VAR_12);

 return VAR_13;
}
