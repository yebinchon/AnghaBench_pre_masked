
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;
typedef int IO ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static wchar_t *FUNC_9(char *VAR_0)
{
 IO *VAR_1;
 UINT VAR_2, VAR_3;
 BYTE *VAR_4;
 wchar_t *VAR_5;


 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2(VAR_0, 0);
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_2 = FUNC_4(VAR_1);
 VAR_4 = (BYTE*)FUNC_6(VAR_2);
 FUNC_3(VAR_1, (void*)VAR_4, VAR_2);
 FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 VAR_5 = (wchar_t*)FUNC_8(VAR_3+sizeof(wchar_t));
 FUNC_7(VAR_5, VAR_3, VAR_4, VAR_2);
 FUNC_5(VAR_4);

 return VAR_5;
}
