
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int X509_NAME ;
typedef int UINT ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int,scalar_t__*,int,int,int ) ;
 scalar_t__* FUNC_8 (int) ;
 int VAR_2 ;

bool FUNC_9(void *VAR_3, int VAR_4, wchar_t *VAR_5)
{
 X509_NAME *VAR_6;
 UINT VAR_7;
 BYTE *VAR_8;
 int VAR_9 = VAR_0;

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 == 0)
 {
  return 0;
 }
 VAR_8 = FUNC_8(VAR_7 + 1);
 FUNC_5(VAR_8, VAR_7, VAR_5);
 VAR_8[VAR_7] = 0;

 if (FUNC_3(VAR_8) != FUNC_4(VAR_5))
 {
  VAR_9 = VAR_1;
 }


 VAR_6 = (X509_NAME *)VAR_3;
 FUNC_2(VAR_2);
 {
  FUNC_7(VAR_6, VAR_4, VAR_9, VAR_8, VAR_7, -1, 0);
 }
 FUNC_6(VAR_2);
 FUNC_1(VAR_8);

 return 1;
}
