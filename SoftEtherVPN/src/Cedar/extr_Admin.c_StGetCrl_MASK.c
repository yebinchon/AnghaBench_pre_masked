
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
typedef int UINT ;
struct TYPE_16__ {TYPE_2__* Server; } ;
struct TYPE_15__ {TYPE_1__* HubDb; } ;
struct TYPE_14__ {char* HubName; int Crl; int Key; } ;
struct TYPE_13__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_12__ {int CrlList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CRL ;
typedef TYPE_4__ HUB ;
typedef int CRL ;
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
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int) ;

UINT FUNC_9(ADMIN *VAR_8, RPC_CRL *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 UINT VAR_13 = VAR_3;
 UINT VAR_14;
 char VAR_15[VAR_5 + 1];

 VAR_0;
 VAR_6;
 if (VAR_10->ServerType == VAR_7)
 {
  return VAR_2;
 }

 FUNC_6(VAR_15, sizeof(VAR_15), VAR_9->HubName);
 VAR_14 = VAR_9->Key;

 FUNC_1(VAR_9);
 FUNC_8(VAR_9, sizeof(RPC_CRL));
 FUNC_6(VAR_9->HubName, sizeof(VAR_9->HubName), VAR_15);
 VAR_9->Key = VAR_14;

 VAR_12 = FUNC_2(VAR_11, VAR_15);

 if (VAR_12 == ((void*)0))
 {
  VAR_13 = VAR_1;
 }
 else
 {
  if (VAR_12->HubDb == ((void*)0))
  {
   VAR_13 = VAR_2;
  }
  else
  {
   FUNC_4(VAR_12->HubDb->CrlList);
   {
    CRL *VAR_16 = FUNC_3(VAR_12->HubDb->CrlList, VAR_9->Key);

    if (VAR_16 == ((void*)0))
    {
     VAR_13 = VAR_4;
    }
    else
    {
     VAR_9->Crl = FUNC_0(VAR_16);
    }
   }
   FUNC_7(VAR_12->HubDb->CrlList);
  }

  FUNC_5(VAR_12);
 }

 return VAR_13;
}
