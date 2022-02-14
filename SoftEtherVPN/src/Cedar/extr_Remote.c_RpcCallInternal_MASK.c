
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_15__ {int SecureMode; } ;
struct TYPE_14__ {int Size; int* Buf; } ;
struct TYPE_13__ {TYPE_4__* Sock; } ;
typedef TYPE_1__ RPC ;
typedef int PACK ;
typedef TYPE_2__ BUF ;


 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 void* FUNC_4 (int,int) ;
 TYPE_2__* FUNC_5 () ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,void*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int*,int) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_2__*,void*,int) ;

PACK *FUNC_12(RPC *VAR_1, PACK *VAR_2)
{
 BUF *VAR_3;
 UINT VAR_4;
 PACK *VAR_5;
 void *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1->Sock == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_6(VAR_2);

 VAR_4 = FUNC_1(VAR_3->Size);
 FUNC_9(VAR_1->Sock, &VAR_4, sizeof(UINT));
 FUNC_9(VAR_1->Sock, VAR_3->Buf, VAR_3->Size);
 FUNC_3(VAR_3);

 if (FUNC_10(VAR_1->Sock, VAR_1->Sock->SecureMode) == 0)
 {
  return ((void*)0);
 }

 if (FUNC_7(VAR_1->Sock, &VAR_4, sizeof(UINT), VAR_1->Sock->SecureMode) == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_4);
 if (VAR_4 > VAR_0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_4(VAR_4, 1);
 if (FUNC_7(VAR_1->Sock, VAR_6, VAR_4, VAR_1->Sock->SecureMode) == 0)
 {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_3 = FUNC_5();
 FUNC_11(VAR_3, VAR_6, VAR_4);
 FUNC_8(VAR_3, 0, 0);
 FUNC_2(VAR_6);

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == ((void*)0))
 {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 FUNC_3(VAR_3);

 return VAR_5;
}
