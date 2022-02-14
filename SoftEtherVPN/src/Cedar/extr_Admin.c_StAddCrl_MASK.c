
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_21__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_20__ {scalar_t__ Bridge; } ;
struct TYPE_19__ {TYPE_1__* HubDb; } ;
struct TYPE_18__ {int Crl; int HubName; } ;
struct TYPE_17__ {scalar_t__ ServerType; TYPE_5__* Cedar; } ;
struct TYPE_16__ {int CrlList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CRL ;
typedef TYPE_4__ HUB ;
typedef int CRL ;
typedef TYPE_5__ CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (TYPE_6__*,TYPE_4__*,char*) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (int ) ;

UINT FUNC_11(ADMIN *VAR_9, RPC_CRL *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13;
 UINT VAR_14 = VAR_4;
 char VAR_15[VAR_5 + 1];

 if (VAR_12->Bridge)
 {
  return VAR_3;
 }

 VAR_0;
 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_3;
 }

 FUNC_9(VAR_15, sizeof(VAR_15), VAR_10->HubName);

 VAR_13 = FUNC_2(VAR_12, VAR_15);

 if (VAR_13 == ((void*)0))
 {
  VAR_14 = VAR_1;
 }
 else
 {
  if (VAR_9->ServerAdmin == 0 && FUNC_3(VAR_13, "no_change_crl_list") != 0)
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
     if (FUNC_6(VAR_13->HubDb->CrlList) < VAR_6)
     {
      CRL *VAR_16 = FUNC_1(VAR_10->Crl);

      FUNC_5(VAR_13->HubDb->CrlList, VAR_16);

      FUNC_0(VAR_9, VAR_13, "LA_SET_CRL");

      FUNC_4(VAR_11);
     }
    }
    FUNC_10(VAR_13->HubDb->CrlList);
   }
  }

  FUNC_8(VAR_13);
 }

 return VAR_14;
}
