
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int BUF ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;

void FUNC_5(BUF *VAR_0, wchar_t *VAR_1)
{
 UINT VAR_2;
 UCHAR *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_1) + 1;
 VAR_3 = FUNC_4(VAR_2);

 FUNC_2(VAR_3, VAR_2, VAR_1);

 FUNC_3(VAR_0, VAR_3, VAR_2 - 1);

 FUNC_1(VAR_3);
}
