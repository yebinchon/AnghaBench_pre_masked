
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char wchar_t ;
typedef int v2 ;
typedef int v1 ;
typedef int tmp8 ;
typedef int tmp7 ;
typedef int tmp6 ;
typedef int tmp4 ;
typedef int tmp2 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {scalar_t__ NumItem; TYPE_1__* Items; int HubName; } ;
struct TYPE_13__ {int Protocol; int TcpStatus; int SendSize; int RecvSize; int LastCommTime; int CreatedTime; int DestPort; int DestHost; int SrcPort; int SrcHost; int Id; } ;
typedef TYPE_1__ RPC_ENUM_NAT_ITEM ;
typedef TYPE_2__ RPC_ENUM_NAT ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (int *,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int,int ,int *) ;
 int VAR_2 ;
 int * FUNC_8 (TYPE_4__*,char*,char*,int *,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int,int ) ;
 int FUNC_14 (char*,int,char*,char*,char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (TYPE_2__*,int) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (TYPE_4__*,char*) ;

UINT FUNC_19(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_NAT VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_17("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_16(&VAR_10, sizeof(VAR_10));
 FUNC_10(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_9(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_11 = FUNC_4();
  UINT VAR_12;

  FUNC_3(VAR_11, FUNC_17("NM_NAT_ID"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_PROTOCOL"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_SRC_HOST"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_SRC_PORT"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_DST_HOST"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_DST_PORT"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_CREATED"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_LAST_COMM"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_SIZE"), 0);
  FUNC_3(VAR_11, FUNC_17("NM_NAT_TCP_STATUS"), 0);

  for (VAR_12 = 0;VAR_12 < VAR_10.NumItem;VAR_12++)
  {
   RPC_ENUM_NAT_ITEM *VAR_13 = &VAR_10.Items[VAR_12];
   wchar_t VAR_14[VAR_2];
   wchar_t *VAR_15 = L"";
   wchar_t VAR_16[VAR_2];
   wchar_t VAR_17[VAR_2];
   wchar_t VAR_18[VAR_2];
   wchar_t VAR_19[VAR_2];
   wchar_t VAR_20[VAR_2];
   wchar_t VAR_21[VAR_2];
   wchar_t VAR_22[VAR_2];
   wchar_t *VAR_23 = L"";
   char VAR_24[128], VAR_25[128];


   FUNC_15(VAR_14, VAR_13->Id);


   switch (VAR_13->Protocol)
   {
   case 134:
    VAR_15 = FUNC_17("NM_NAT_PROTO_TCP");
    break;
   case 128:
    VAR_15 = FUNC_17("NM_NAT_PROTO_UDP");
    break;
   case 136:
    VAR_15 = FUNC_17("NM_NAT_PROTO_DNS");
    break;
   case 135:
    VAR_15 = FUNC_17("NM_NAT_PROTO_ICMP");
    break;
   }


   FUNC_11(VAR_16, sizeof(VAR_16), VAR_13->SrcHost);


   FUNC_15(VAR_17, VAR_13->SrcPort);


   FUNC_11(VAR_18, sizeof(VAR_18), VAR_13->DestHost);


   FUNC_15(VAR_19, VAR_13->DestPort);


   FUNC_7(VAR_20, sizeof(VAR_20), FUNC_12(VAR_13->CreatedTime), ((void*)0));


   FUNC_7(VAR_21, sizeof(VAR_21), FUNC_12(VAR_13->LastCommTime), ((void*)0));


   FUNC_13(VAR_24, sizeof(VAR_24), VAR_13->RecvSize);
   FUNC_13(VAR_25, sizeof(VAR_25), VAR_13->SendSize);
   FUNC_14(VAR_22, sizeof(VAR_22), L"%S / %S", VAR_24, VAR_25);


   if (VAR_13->Protocol == 134)
   {
    switch (VAR_13->TcpStatus)
    {
    case 132:
     VAR_23 = FUNC_17("NAT_TCP_CONNECTING");
     break;
    case 130:
     VAR_23 = FUNC_17("NAT_TCP_SEND_RESET");
     break;
    case 133:
     VAR_23 = FUNC_17("NAT_TCP_CONNECTED");
     break;
    case 131:
     VAR_23 = FUNC_17("NAT_TCP_ESTABLISHED");
     break;
    case 129:
     VAR_23 = FUNC_17("NAT_TCP_WAIT_DISCONNECT");
     break;
    }
   }

   FUNC_2(VAR_11,
    VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);
  }

  FUNC_1(VAR_11, VAR_3, 1);
 }

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
