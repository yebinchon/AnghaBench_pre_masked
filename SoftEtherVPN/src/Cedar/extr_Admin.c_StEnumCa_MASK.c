
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int hubname ;
struct TYPE_18__ {int notAfter; int issuer_name; int subject_name; } ;
typedef TYPE_2__ X ;
typedef size_t UINT ;
struct TYPE_23__ {TYPE_3__* Server; } ;
struct TYPE_22__ {TYPE_1__* HubDb; } ;
struct TYPE_21__ {char* HubName; int NumCa; TYPE_4__* Ca; } ;
struct TYPE_20__ {int Expires; int IssuerName; int SubjectName; int Key; } ;
struct TYPE_19__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_17__ {int * RootCertList; } ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_HUB_ENUM_CA_ITEM ;
typedef TYPE_5__ RPC_HUB_ENUM_CA ;
typedef TYPE_6__ HUB ;
typedef int CEDAR ;
typedef TYPE_7__ ADMIN ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_6__* FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_13 (int) ;

UINT FUNC_14(ADMIN *VAR_7, RPC_HUB_ENUM_CA *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;
 char VAR_12[VAR_4 + 1];
 UINT VAR_13;

 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }

 VAR_5;

 FUNC_9(VAR_12, sizeof(VAR_12), VAR_8->HubName);

 FUNC_0(VAR_8);
 FUNC_12(VAR_8, sizeof(RPC_HUB_ENUM_CA));

 FUNC_9(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_12);
 VAR_0;

 FUNC_5(VAR_10);
 {
  VAR_11 = FUNC_2(VAR_10, VAR_12);
 }
 FUNC_10(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_12(VAR_8, sizeof(RPC_HUB_ENUM_CA));
 FUNC_9(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_12);

 if (VAR_11->HubDb->RootCertList != ((void*)0))
 {
  FUNC_6(VAR_11->HubDb->RootCertList);
  {
   VAR_8->NumCa = FUNC_4(VAR_11->HubDb->RootCertList);
   VAR_8->Ca = FUNC_13(sizeof(RPC_HUB_ENUM_CA_ITEM) * VAR_8->NumCa);

   for (VAR_13 = 0;VAR_13 < VAR_8->NumCa;VAR_13++)
   {
    RPC_HUB_ENUM_CA_ITEM *VAR_14 = &VAR_8->Ca[VAR_13];
    X *VAR_15 = FUNC_3(VAR_11->HubDb->RootCertList, VAR_13);

    VAR_14->Key = FUNC_7(VAR_15);
    FUNC_1(VAR_14->SubjectName, sizeof(VAR_14->SubjectName), VAR_15->subject_name);
    FUNC_1(VAR_14->IssuerName, sizeof(VAR_14->IssuerName), VAR_15->issuer_name);
    VAR_14->Expires = VAR_15->notAfter;
   }
  }
  FUNC_11(VAR_11->HubDb->RootCertList);
 }

 FUNC_8(VAR_11);

 return VAR_3;
}
