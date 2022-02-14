
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char wchar_t ;
typedef int UINT ;
struct TYPE_18__ {int Buf; } ;
struct TYPE_17__ {int (* Write ) (TYPE_1__*,char*) ;} ;
typedef int LIST ;
typedef TYPE_1__ CONSOLE ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,char*,char*,int *,int ) ;
 TYPE_2__* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (TYPE_1__*,char*) ;
 int FUNC_16 (TYPE_1__*,char*) ;

UINT FUNC_17(CONSOLE *VAR_1, char *VAR_2, wchar_t *VAR_3, void *VAR_4)
{
 LIST *VAR_5;
 BUF *VAR_6;

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, ((void*)0), 0);
 if (VAR_5 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_6 = FUNC_6("|legal.txt");

 FUNC_0(VAR_1);
 VAR_1->Write(VAR_1, L"\r\n");

 if (VAR_6 != ((void*)0))
 {
  wchar_t *VAR_7;

  FUNC_7(VAR_6);
  FUNC_8(VAR_6, 13);
  FUNC_8(VAR_6, 10);
  FUNC_8(VAR_6, 0);

  VAR_7 = FUNC_1(VAR_6->Buf);

  VAR_1->Write(VAR_1, VAR_7);

  FUNC_2(VAR_7);
 }


 VAR_1->Write(VAR_1, FUNC_9("D_ABOUT@S_INFO3"));
 VAR_1->Write(VAR_1, L"\r\n");
 VAR_1->Write(VAR_1, FUNC_9("D_ABOUT@S_INFO4"));
 VAR_1->Write(VAR_1, L"\r\n");
 FUNC_0(VAR_1);
 VAR_1->Write(VAR_1, L"\r\n");

 FUNC_4(VAR_5);

 FUNC_3(VAR_6);

 return 0;
}
