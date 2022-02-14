
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int server_ip_str ;
typedef int client_ip_str ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int sorted; } ;
struct TYPE_21__ {scalar_t__ ClientPort; scalar_t__ ServerPort; int Deleting; int ServerIP; int ClientIP; int Id; scalar_t__ LastCommTick; int FirstCommTick; int ClientId; int * L2TP; } ;
struct TYPE_20__ {TYPE_4__* IkeClient; } ;
struct TYPE_19__ {TYPE_9__* ClientList; int IPsecSaList; int IkeSaList; } ;
struct TYPE_18__ {TYPE_4__* IkeClient; } ;
typedef TYPE_1__ IPSECSA ;
typedef int IP ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_3__ IKE_SA ;
typedef TYPE_4__ IKE_CLIENT ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,TYPE_4__*,...) ;
 int FUNC_3 (TYPE_9__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*,int *,int *,char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_11 (int ,int ) ;
 TYPE_4__* FUNC_12 (TYPE_9__*,TYPE_4__*) ;
 int FUNC_13 (int ,int,int ) ;

IKE_CLIENT *FUNC_14(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2, IP *VAR_3, UINT VAR_4, IP *VAR_5, UINT VAR_6)
{
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 IKE_CLIENT *VAR_9 = VAR_2;
 IKE_CLIENT *VAR_10;
 IKE_CLIENT VAR_11;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 || VAR_5 == ((void*)0) || VAR_6 == 0)
 {
  return ((void*)0);
 }

 if (FUNC_0(&VAR_2->ClientIP, VAR_3) == 0 &&
  FUNC_0(&VAR_2->ServerIP, VAR_5) == 0 &&
  VAR_2->ClientPort == VAR_4 &&
  VAR_2->ServerPort == VAR_6)
 {

  return VAR_9;
 }

 if (FUNC_7(VAR_4) || FUNC_7(VAR_6))
 {

  return VAR_9;
 }


 FUNC_1(&VAR_11.ClientIP, VAR_3, sizeof(IP));
 VAR_11.ClientPort = VAR_4;
 FUNC_1(&VAR_11.ServerIP, VAR_5, sizeof(IP));
 VAR_11.ServerPort = VAR_6;

 VAR_10 = FUNC_12(VAR_1->ClientList, &VAR_11);
 if (VAR_10 != ((void*)0) && VAR_2 != VAR_10 && VAR_10->Deleting == 0 && VAR_2->L2TP == ((void*)0))
 {
  UINT VAR_12;

  for (VAR_12 = 0;VAR_12 < FUNC_9(VAR_1->IkeSaList);VAR_12++)
  {
   IKE_SA *VAR_13 = FUNC_8(VAR_1->IkeSaList, VAR_12);

   if (VAR_13->IkeClient == VAR_2)
   {
    VAR_13->IkeClient = VAR_10;
   }
  }
  for (VAR_12 = 0;VAR_12 < FUNC_9(VAR_1->IPsecSaList);VAR_12++)
  {
   IPSECSA *VAR_14 = FUNC_8(VAR_1->IPsecSaList, VAR_12);

   if (VAR_14->IkeClient == VAR_2)
   {
    VAR_14->IkeClient = VAR_10;
   }
  }

  if (VAR_10->LastCommTick < VAR_2->LastCommTick)
  {
   FUNC_13(VAR_10->ClientId, sizeof(VAR_10->ClientId), VAR_2->ClientId);
  }

  VAR_10->FirstCommTick = FUNC_11(VAR_10->FirstCommTick, VAR_2->FirstCommTick);
  VAR_10->LastCommTick = FUNC_10(VAR_10->LastCommTick, VAR_2->LastCommTick);

  VAR_9 = VAR_10;

  FUNC_5(VAR_7, sizeof(VAR_7), VAR_3);
  FUNC_5(VAR_8, sizeof(VAR_8), VAR_5);

  FUNC_2("Merge IKE_CLIENT: %p->%p: %s:%u -> %s:%u\n", VAR_2, VAR_10, VAR_7, VAR_4, VAR_8, VAR_6);

  FUNC_6(VAR_1, VAR_2, ((void*)0), ((void*)0), "LI_CLIENT_MERGE", VAR_2->Id, VAR_10->Id, VAR_10->Id);


  FUNC_3(VAR_1->ClientList, VAR_2);
  FUNC_4(VAR_1, VAR_2);
 }
 else
 {

  FUNC_1(&VAR_2->ClientIP, VAR_3, sizeof(IP));
  FUNC_1(&VAR_2->ServerIP, VAR_5, sizeof(IP));
  VAR_2->ClientPort = VAR_4;
  VAR_2->ServerPort = VAR_6;

  FUNC_5(VAR_7, sizeof(VAR_7), VAR_3);
  FUNC_5(VAR_8, sizeof(VAR_8), VAR_5);

  FUNC_2("Update IKE_CLIENT: %p: %s:%u -> %s:%u\n", VAR_2, VAR_7, VAR_4, VAR_8, VAR_6);

  FUNC_6(VAR_1, VAR_2, ((void*)0), ((void*)0), "LI_CLIENT_UPDATE");

  VAR_1->ClientList->sorted = 0;
 }

 return VAR_9;
}
