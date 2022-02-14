
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int c ;
typedef int X ;
typedef int UINT ;
struct TYPE_12__ {TYPE_1__* ListenSocket; } ;
struct TYPE_11__ {int * x; int * k; TYPE_1__* s; } ;
struct TYPE_10__ {int ref; } ;
typedef int THREAD ;
typedef TYPE_1__ SOCK ;
typedef int NAME ;
typedef int LIST ;
typedef int K ;
typedef TYPE_2__ CHECK_NETWORK_2 ;
typedef TYPE_3__ CHECK_NETWORK_1 ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*,char*,char*,char*,char*) ;
 int * FUNC_11 (int *,int *,int *,int,int *) ;
 int * FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int **,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (TYPE_2__*,int) ;

void FUNC_20(THREAD *VAR_2, void *VAR_3)
{
 CHECK_NETWORK_1 *VAR_4 = (CHECK_NETWORK_1 *)VAR_3;
 SOCK *VAR_5;
 UINT VAR_6;
 K *VAR_7, *VAR_8;
 X *VAR_9;
 LIST *VAR_10 = FUNC_9(((void*)0));
 NAME *VAR_11 = FUNC_10(L"Test", L"Test", L"Test", L"JP", L"Ibaraki", L"Tsukuba");

 FUNC_17(&VAR_8, &VAR_7, 1024);
 VAR_9 = FUNC_11(VAR_7, VAR_8, VAR_11, 1000, ((void*)0));

 FUNC_3(VAR_11);

 for (VAR_6 = 1025;;VAR_6++)
 {
  VAR_5 = FUNC_8(VAR_6);
  if (VAR_5 != ((void*)0))
  {
   break;
  }
 }

 VAR_4->ListenSocket = VAR_5;
 FUNC_1(VAR_5->ref);

 FUNC_13(VAR_2);

 while (1)
 {
  SOCK *VAR_12 = FUNC_0(VAR_5);

  if (VAR_12 == ((void*)0))
  {
   break;
  }
  else
  {
   CHECK_NETWORK_2 VAR_13;
   THREAD *VAR_14;

   FUNC_19(&VAR_13, sizeof(VAR_13));
   VAR_13.s = VAR_12;
   VAR_13.k = VAR_8;
   VAR_13.x = VAR_9;

   VAR_14 = FUNC_12(VAR_0, &VAR_13);
   FUNC_5(VAR_10, VAR_14);
  }
 }

 for (VAR_6 = 0;VAR_6 < FUNC_7(VAR_10);VAR_6++)
 {
  THREAD *VAR_15 = FUNC_6(VAR_10, VAR_6);
  FUNC_18(VAR_15, VAR_1);
  FUNC_16(VAR_15);
 }

 FUNC_2(VAR_8);
 FUNC_2(VAR_7);

 FUNC_4(VAR_9);

 FUNC_15(VAR_5);
 FUNC_14(VAR_10);
}
