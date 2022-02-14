
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_17__ {int Size; int* Buf; } ;
struct TYPE_16__ {TYPE_1__* Sock; } ;
struct TYPE_15__ {int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ RPC ;
typedef int PACK ;
typedef TYPE_3__ BUF ;


 int * FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 void* FUNC_6 (int,int) ;
 TYPE_3__* FUNC_7 () ;
 int * FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,void*,int,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int*,int) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_3__*,void*,int) ;

bool FUNC_15(RPC *VAR_2)
{
 UINT VAR_3;
 void *VAR_4;
 SOCK *VAR_5;
 BUF *VAR_6;
 PACK *VAR_7;
 PACK *VAR_8;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = VAR_2->Sock;

 if (FUNC_10(VAR_5, &VAR_3, sizeof(UINT), VAR_5->SecureMode) == 0)
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_3);

 if (VAR_3 > VAR_1)
 {
  return 0;
 }

 VAR_4 = FUNC_6(VAR_3, 1);

 if (FUNC_10(VAR_5, VAR_4, VAR_3, VAR_5->SecureMode) == 0)
 {
  FUNC_3(VAR_4);
  return 0;
 }

 VAR_6 = FUNC_7();
 FUNC_14(VAR_6, VAR_4, VAR_3);
 FUNC_11(VAR_6, 0, 0);
 FUNC_3(VAR_4);

 VAR_7 = FUNC_0(VAR_6);
 FUNC_4(VAR_6);

 if (VAR_7 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_7);
 FUNC_5(VAR_7);

 if (VAR_8 == ((void*)0))
 {
  VAR_8 = FUNC_8(VAR_0);
 }

 VAR_6 = FUNC_9(VAR_8);
 FUNC_5(VAR_8);

 VAR_3 = FUNC_2(VAR_6->Size);
 FUNC_12(VAR_5, &VAR_3, sizeof(UINT));
 FUNC_12(VAR_5, VAR_6->Buf, VAR_6->Size);

 if (FUNC_13(VAR_5, VAR_5->SecureMode) == 0)
 {
  FUNC_4(VAR_6);
  return 0;
 }

 FUNC_4(VAR_6);

 return 1;
}
