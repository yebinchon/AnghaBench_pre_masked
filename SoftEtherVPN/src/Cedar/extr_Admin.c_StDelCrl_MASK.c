
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_17__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_16__ {TYPE_1__* HubDb; } ;
struct TYPE_15__ {int Key; int HubName; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_13__ {int CrlList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CRL ;
typedef TYPE_4__ HUB ;
typedef int CRL ;
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
 TYPE_4__* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int ) ;

UINT FUNC_10(ADMIN *VAR_9, RPC_CRL *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13;
 UINT VAR_14 = VAR_4;
 char VAR_15[VAR_6 + 1];

 VAR_0;
 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_3;
 }

 FUNC_8(VAR_15, sizeof(VAR_15), VAR_10->HubName);

 VAR_13 = FUNC_3(VAR_12, VAR_15);

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
    FUNC_6(VAR_13->HubDb->CrlList);
    {
     CRL *VAR_16 = FUNC_5(VAR_13->HubDb->CrlList, VAR_10->Key);

     if (VAR_16 == ((void*)0))
     {
      VAR_14 = VAR_5;
     }
     else
     {
      FUNC_0(VAR_9, VAR_13, "LA_DEL_CRL");
      FUNC_2(VAR_16);
      FUNC_1(VAR_13->HubDb->CrlList, VAR_16);
     }
    }
    FUNC_9(VAR_13->HubDb->CrlList);
   }
  }

  FUNC_7(VAR_13);
 }

 return VAR_14;
}
