
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int tmp ;
typedef int target_port ;
typedef int recv_buf ;
typedef int dest_length ;
typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_19__ {int Size; int Buf; } ;
struct TYPE_18__ {int* ipv6_addr; int* addr; } ;
struct TYPE_17__ {scalar_t__ Port; scalar_t__ TargetPort; int* Hostname; int* TargetHostname; scalar_t__ Timeout; int* Username; int* Password; } ;
struct TYPE_16__ {int * Sock; int ResolvedIp; } ;
typedef int SOCK ;
typedef TYPE_1__ PROXY_PARAM_OUT ;
typedef TYPE_2__ PROXY_PARAM_IN ;
typedef TYPE_3__ IP ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_6 (TYPE_2__*,int volatile*,int *) ;
 scalar_t__ FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int* FUNC_11 (int) ;
 TYPE_4__* FUNC_12 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* FUNC_13 (int*,int) ;
 int FUNC_14 (int *,int*,int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ,int) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (TYPE_3__*,int*) ;
 int FUNC_20 (TYPE_4__*,int*,int) ;
 int FUNC_21 (TYPE_1__*,int) ;

UINT FUNC_22(PROXY_PARAM_OUT *VAR_11, PROXY_PARAM_IN *VAR_12, volatile bool *VAR_13)
{
 bool VAR_14 = 0;
 UCHAR VAR_15, VAR_16[2], *VAR_17;
 USHORT VAR_18;
 IP VAR_19;
 UINT VAR_20;
 SOCK *VAR_21;
 BUF *VAR_22;

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_12->Port == 0 || VAR_12->TargetPort == 0 || FUNC_7(VAR_12->Hostname) || FUNC_7(VAR_12->TargetHostname))
 {
  return VAR_7;
 }

 if (VAR_13 == ((void*)0))
 {
  VAR_13 = &VAR_14;
 }
 else if (*VAR_13)
 {
  return VAR_3;
 }

 FUNC_21(VAR_11, sizeof(PROXY_PARAM_OUT));


 VAR_21 = FUNC_6(VAR_12, VAR_13, &VAR_11->ResolvedIp);
 if (VAR_21 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_17(VAR_21, FUNC_10(VAR_1, (VAR_12->Timeout == 0 ? VAR_0 : VAR_12->Timeout)));
 VAR_22 = FUNC_12();
 VAR_15 = 5;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
 VAR_15 = 2;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
 VAR_15 = 0;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
 VAR_15 = 2;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));

 VAR_20 = FUNC_16(VAR_21, VAR_22->Buf, VAR_22->Size, 0);

 if (VAR_20 == 0)
 {
  FUNC_5(VAR_22);
  FUNC_1("ProxySocks5Connect(): [Phase 1] Failed to send initial data to the server.\n");
  VAR_20 = VAR_5;
  goto FAILURE;
 }







 if (FUNC_14(VAR_21, VAR_16, sizeof(VAR_16), 0) == 0)
 {
  FUNC_5(VAR_22);
  FUNC_1("ProxySocks5Connect(): [Phase 1] Failed to receive initial data response from the server.\n");
  VAR_20 = VAR_5;
  goto FAILURE;
 }

 if (VAR_16[0] != 5)
 {
  FUNC_5(VAR_22);
  FUNC_1("ProxySocks5Connect(): [Phase 1] Unmatching version: %u.\n", VAR_16[0]);
  VAR_20 = VAR_10;
  goto FAILURE;
 }

 FUNC_0(VAR_22);


 if (VAR_16[1] == 2)
 {






  VAR_15 = 1;
  FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
  VAR_15 = FUNC_18(VAR_12->Username);
  FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
  FUNC_20(VAR_22, VAR_12->Username, VAR_15);
  VAR_15 = FUNC_18(VAR_12->Password);
  FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
  FUNC_20(VAR_22, VAR_12->Password, VAR_15);

  VAR_20 = FUNC_16(VAR_21, VAR_22->Buf, VAR_22->Size, 0);

  FUNC_0(VAR_22);

  if (VAR_20 == 0)
  {
   FUNC_1("ProxySocks5Connect(): [Phase 1] Failed to send authentication data to the server.\n");
   VAR_20 = VAR_5;
   goto FAILURE;
  }







  if (FUNC_14(VAR_21, VAR_16, sizeof(VAR_16), 0) == 0)
  {
   FUNC_1("ProxySocks5Connect(): [Phase 1] Failed to receive authentication data response from the server.\n");
   VAR_20 = VAR_5;
   goto FAILURE;
  }

  if (VAR_16[1] != 0)
  {
   FUNC_1("ProxySocks5Connect(): [Phase 1] Authentication failure, error code sent by the server: %u.\n", VAR_16[1]);
   VAR_20 = VAR_2;
   goto FAILURE;
  }
 }
 VAR_15 = 5;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
 VAR_15 = 1;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
 VAR_15 = 0;
 FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));


 FUNC_19(&VAR_19, VAR_12->TargetHostname);


 if (FUNC_9(&VAR_19))
 {
  UCHAR VAR_23 = FUNC_18(VAR_12->TargetHostname);
  VAR_15 = 3;
  FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
  FUNC_20(VAR_22, &VAR_23, sizeof(VAR_23));
  FUNC_20(VAR_22, VAR_12->TargetHostname, VAR_23);
 }
 else
 {
  if (FUNC_8(&VAR_19))
  {
   VAR_15 = 4;
   FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
   FUNC_20(VAR_22, VAR_19.ipv6_addr, sizeof(VAR_19.ipv6_addr));
  }
  else
  {
   VAR_15 = 1;
   FUNC_20(VAR_22, &VAR_15, sizeof(VAR_15));
   FUNC_20(VAR_22, VAR_19.addr, sizeof(VAR_19.addr));
  }
 }


 VAR_18 = FUNC_3(VAR_12->TargetPort);
 FUNC_20(VAR_22, &VAR_18, sizeof(VAR_18));


 VAR_20 = FUNC_16(VAR_21, VAR_22->Buf, VAR_22->Size, 0);
 FUNC_5(VAR_22);

 if (VAR_20 == 0)
 {
  FUNC_1("ProxySocks5Connect(): [Phase 2] Failed to send data to the server.\n");
  VAR_20 = VAR_5;
  goto FAILURE;
 }
 VAR_17 = FUNC_11(4);

 if (FUNC_14(VAR_21, VAR_17, 4, 0) == 0)
 {
  FUNC_4(VAR_17);
  FUNC_1("ProxySocks5Connect(): [Phase 2] Failed to receive response from the server.\n");
  VAR_20 = VAR_5;
  goto FAILURE;
 }


 VAR_16[0] = VAR_17[0];
 VAR_16[1] = VAR_17[1];


 switch (VAR_17[3])
 {
 case 1:

  VAR_17 = FUNC_13(VAR_17, 6);
  VAR_20 = FUNC_14(VAR_21, VAR_17, 6, 0);
  break;
 case 4:

  VAR_17 = FUNC_13(VAR_17, 18);
  VAR_20 = FUNC_14(VAR_21, VAR_17, 18, 0);
  break;
 case 3:

  VAR_20 = FUNC_14(VAR_21, &VAR_15, 1, 0);
  if (VAR_20 == 1)
  {
   VAR_17 = FUNC_13(VAR_17, VAR_15 + 2);
   VAR_20 = FUNC_14(VAR_21, VAR_17, VAR_15 + 2, 0);
  }
 }

 FUNC_4(VAR_17);

 if (VAR_20 == 0)
 {
  FUNC_1("ProxySocks5Connect(): [Phase 2] Malformed response received from the server.\n");
  VAR_20 = VAR_5;
  goto FAILURE;
 }

 if (VAR_16[0] != 5)
 {
  FUNC_1("ProxySocks5Connect(): [Phase 2] Unmatching version: %u.\n", VAR_17[0]);
  VAR_20 = VAR_10;
  goto FAILURE;
 }

 switch (VAR_16[1])
 {
 case 0:

  FUNC_17(VAR_21, VAR_0);
  VAR_11->Sock = VAR_21;
  return VAR_8;
 case 3:
 case 4:
 case 5:
  FUNC_1("ProxySocks5Connect(): [Phase 2] Connection to target failed with error: %u\n", VAR_16[1]);
  VAR_20 = VAR_9;
  goto FAILURE;
 default:
  FUNC_1("ProxySocks5Connect(): [Phase 2] Connection failed with error: %u\n", VAR_16[1]);
  VAR_20 = VAR_6;
  goto FAILURE;
 }

FAILURE:
 FUNC_2(VAR_21);
 FUNC_15(VAR_21);
 return VAR_20;
}
