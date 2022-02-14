
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tmp ;
typedef int target_port ;
typedef int recv_buf ;
typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_16__ {int Size; int Buf; } ;
struct TYPE_15__ {int* addr; } ;
struct TYPE_14__ {scalar_t__ Port; scalar_t__ TargetPort; scalar_t__ Timeout; int* Username; int TargetHostname; int Hostname; } ;
struct TYPE_13__ {int * Sock; int ResolvedIp; } ;
typedef int SOCK ;
typedef TYPE_1__ PROXY_PARAM_OUT ;
typedef TYPE_2__ PROXY_PARAM_IN ;
typedef TYPE_3__ IP ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_4 (TYPE_2__*,int volatile*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 TYPE_4__* FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,int*,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,int) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (TYPE_4__*,int*,int) ;
 int FUNC_14 (TYPE_1__*,int) ;

UINT FUNC_15(PROXY_PARAM_OUT *VAR_10, PROXY_PARAM_IN *VAR_11, volatile bool *VAR_12)
{
 bool VAR_13 = 0;
 UCHAR VAR_14, VAR_15[8];
 USHORT VAR_16;
 IP VAR_17;
 UINT VAR_18;
 SOCK *VAR_19;
 BUF *VAR_20;

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_11->Port == 0 || VAR_11->TargetPort == 0 || FUNC_5(VAR_11->Hostname) || FUNC_5(VAR_11->TargetHostname))
 {
  return VAR_7;
 }

 if (VAR_12 == ((void*)0))
 {
  VAR_12 = &VAR_13;
 }
 else if (*VAR_12)
 {
  return VAR_3;
 }

 FUNC_14(VAR_10, sizeof(PROXY_PARAM_OUT));


 if (FUNC_3(&VAR_17, VAR_11->TargetHostname) == 0)
 {
  return VAR_4;
 }


 VAR_19 = FUNC_4(VAR_11, VAR_12, &VAR_10->ResolvedIp);
 if (VAR_19 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_11(VAR_19, FUNC_6(VAR_1, (VAR_11->Timeout == 0 ? VAR_0 : VAR_11->Timeout)));


 VAR_20 = FUNC_7();
 VAR_14 = 4;
 FUNC_13(VAR_20, &VAR_14, sizeof(VAR_14));
 VAR_14 = 1;
 FUNC_13(VAR_20, &VAR_14, sizeof(VAR_14));
 VAR_16 = FUNC_1(VAR_11->TargetPort);
 FUNC_13(VAR_20, &VAR_16, sizeof(VAR_16));
 FUNC_13(VAR_20, VAR_17.addr, sizeof(VAR_17.addr));
 FUNC_13(VAR_20, VAR_11->Username, FUNC_12(VAR_11->Username) + 1);

 VAR_18 = FUNC_10(VAR_19, VAR_20->Buf, VAR_20->Size, 0);

 FUNC_2(VAR_20);

 if (VAR_18 == 0)
 {
  VAR_18 = VAR_5;
  goto FAILURE;
 }


 if (FUNC_8(VAR_19, VAR_15, sizeof(VAR_15), 0) == 0)
 {
  VAR_18 = VAR_5;
  goto FAILURE;
 }

 if (VAR_15[0] != 0)
 {
  VAR_18 = VAR_6;
  goto FAILURE;
 }

 switch (VAR_15[1])
 {
 case 90:

  FUNC_11(VAR_19, VAR_0);
  VAR_10->Sock = VAR_19;
  return VAR_8;
 case 93:

  VAR_18 = VAR_2;
  goto FAILURE;
 default:

  VAR_18 = VAR_9;
 }

FAILURE:
 FUNC_0(VAR_19);
 FUNC_9(VAR_19);
 return VAR_18;
}
