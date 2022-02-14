
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tmp ;
typedef int hashtemp ;
typedef int hashstr ;
typedef int exe ;
typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (char*,int,int *,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (char*,int,char*,char*,...) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

void FUNC_11(wchar_t *VAR_4, UINT VAR_5, wchar_t *VAR_6, UINT VAR_7, UCHAR *VAR_8)
{
 wchar_t VAR_9[VAR_0];
 wchar_t VAR_10[64];
 wchar_t VAR_11[VAR_0];
 wchar_t VAR_12[VAR_0];
 UCHAR VAR_13[VAR_2];

 if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_12, sizeof(VAR_12));
 FUNC_8(VAR_11, sizeof(VAR_11), VAR_6);
 FUNC_0(VAR_9, sizeof(VAR_9), VAR_8, VAR_1);
 FUNC_7(VAR_11, sizeof(VAR_11), VAR_9);
 FUNC_7(VAR_11, sizeof(VAR_11), VAR_12);
 FUNC_10(VAR_11);

 FUNC_4(VAR_13, VAR_11, FUNC_9(VAR_11) * sizeof(wchar_t));
 FUNC_0(VAR_10, sizeof(VAR_10), VAR_13, 4);
 FUNC_6(VAR_9, sizeof(VAR_9), VAR_3, VAR_10);
 FUNC_10(VAR_9);


 FUNC_8(VAR_12, sizeof(VAR_12), L"/tmp");




 FUNC_6(VAR_4, VAR_5, L"%s/%s", VAR_12, VAR_9);
 FUNC_3(VAR_4, VAR_5, VAR_4);
}
