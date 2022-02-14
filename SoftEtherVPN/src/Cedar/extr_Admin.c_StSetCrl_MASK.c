
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_18__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_17__ {TYPE_1__* HubDb; } ;
struct TYPE_16__ {int Crl; int Key; int HubName; } ;
struct TYPE_15__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_14__ {int CrlList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CRL ;
typedef TYPE_4__ HUB ;
typedef int CRL ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*,char*) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int ,int *,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*,int,int ) ;
 int FUNC_11 (int ) ;

UINT FUNC_12(ADMIN *VAR_9, RPC_CRL *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13;
 UINT VAR_14 = VAR_4;
 UINT VAR_15;
 char VAR_16[VAR_6 + 1];

 VAR_0;
 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_3;
 }

 FUNC_10(VAR_16, sizeof(VAR_16), VAR_10->HubName);
 VAR_15 = VAR_10->Key;

 VAR_13 = FUNC_3(VAR_12, VAR_16);

 if (VAR_13 == ((void*)0))
 {
  VAR_14 = VAR_1;
 }
 else
 {
  if (VAR_9->ServerAdmin == 0 && FUNC_4(VAR_13, "no_change_crl_list") != 0)
  {
   VAR_14 = VAR_2;
  }
  else
  {
   if (VAR_13->HubDb == ((void*)0))
   {
    VAR_14 = VAR_3;
   }
   else
   {
    FUNC_7(VAR_13->HubDb->CrlList);
    {
     CRL *VAR_17 = FUNC_6(VAR_13->HubDb->CrlList, VAR_10->Key);

     if (VAR_17 == ((void*)0))
     {
      VAR_14 = VAR_5;
     }
     else
     {
      CRL *VAR_18 = FUNC_1(VAR_10->Crl);
      if (FUNC_9(VAR_13->HubDb->CrlList, VAR_17, VAR_18))
      {
       FUNC_0(VAR_9, VAR_13, "LA_ADD_CRL");
       FUNC_2(VAR_17);

       FUNC_5(VAR_11);
      }
     }
    }
    FUNC_11(VAR_13->HubDb->CrlList);
   }
  }

  FUNC_8(VAR_13);
 }

 return VAR_14;
}
