
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int machine_name ;
typedef int hash ;
typedef int exe_path ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef int SOCK ;
typedef int IP ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (int ,char*,char*) ;
 TYPE_1__* FUNC_5 () ;
 int * FUNC_6 (int,int *,int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_1__*,char*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;

SOCK *FUNC_16(bool VAR_4, IP *VAR_5, UINT VAR_6, UCHAR VAR_7)
{
 BUF *VAR_8;
 char VAR_9[VAR_1];
 wchar_t VAR_10[VAR_0];
 char *VAR_11 = ((void*)0);
 UCHAR VAR_12[VAR_3];
 VAR_8 = FUNC_5();

 FUNC_3(VAR_9, sizeof(VAR_9));
 FUNC_10(VAR_9);
 FUNC_9(VAR_9);

 FUNC_2(VAR_10, sizeof(VAR_10));
 FUNC_13(VAR_10);
 FUNC_12(VAR_10);

 FUNC_14(VAR_8, VAR_9, FUNC_8(VAR_9));
 FUNC_14(VAR_8, VAR_10, FUNC_11(VAR_10));
 FUNC_14(VAR_8, VAR_11, FUNC_8(VAR_11));
 FUNC_15(VAR_8, VAR_7);


 FUNC_7(VAR_12, VAR_8->Buf, VAR_8->Size);

 FUNC_1(VAR_8);

 FUNC_0(VAR_11);

 return FUNC_6(VAR_4, VAR_5, VAR_12, sizeof(VAR_12), VAR_6);
}
