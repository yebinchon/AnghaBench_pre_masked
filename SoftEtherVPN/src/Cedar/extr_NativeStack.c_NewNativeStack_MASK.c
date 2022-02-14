
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_15__ {int ref; } ;
struct TYPE_14__ {int IsRawIpMode; } ;
struct TYPE_13__ {TYPE_2__* Eth; int IsIpRawMode; int MainThread; int Cancel; int DeviceName; int MacAddress; int Sock2; int Ipc; TYPE_3__* Cedar; int Sock1; } ;
typedef TYPE_1__ NATIVE_STACK ;
typedef int IP ;
typedef TYPE_2__ ETH ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int *,int *,int *,int,int *,int) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,char*,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_10 (char*,int,int,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,int,char*) ;
 TYPE_1__* FUNC_13 (int) ;

NATIVE_STACK *FUNC_14(CEDAR *VAR_1, char *VAR_2, char *VAR_3)
{
 ETH *VAR_4;
 NATIVE_STACK *VAR_5;
 IP VAR_6;
 char VAR_7[64];
 bool VAR_8 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(&VAR_6);


 VAR_4 = FUNC_10(VAR_2, 0, 0, ((void*)0));
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = FUNC_5(((void*)0), ((void*)0));
  VAR_8 = 1;
 }

 VAR_5 = FUNC_13(sizeof(NATIVE_STACK));

 FUNC_7(&VAR_5->Sock1, &VAR_5->Sock2, &VAR_6, 1, &VAR_6, 1);

 VAR_5->Cedar = VAR_1;
 FUNC_0(VAR_5->Cedar->ref);

 FUNC_9(VAR_5->MacAddress, VAR_3, VAR_2);

 FUNC_1(VAR_7, sizeof(VAR_7), VAR_5->MacAddress, sizeof(VAR_5->MacAddress));
 FUNC_2("NewNativeStack: MAC Address = %s\n", VAR_7);

 VAR_5->Ipc = FUNC_6(VAR_1, VAR_5->Sock2, VAR_5->MacAddress);

 FUNC_12(VAR_5->DeviceName, sizeof(VAR_5->DeviceName), VAR_2);

 VAR_5->Eth = VAR_4;
 VAR_5->Cancel = FUNC_3(VAR_4);

 VAR_5->MainThread = FUNC_8(VAR_0, VAR_5);

 if (VAR_8)
 {
  FUNC_11(VAR_1);
 }

 VAR_5->IsIpRawMode = VAR_5->Eth->IsRawIpMode;

 return VAR_5;
}
