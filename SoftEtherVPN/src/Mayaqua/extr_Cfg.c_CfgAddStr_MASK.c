
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;
typedef int ITEM ;
typedef int FOLDER ;


 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,char*) ;

ITEM *FUNC_5(FOLDER *VAR_0, char *VAR_1, char *VAR_2)
{
 wchar_t *VAR_3;
 UINT VAR_4;
 ITEM *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == 0)
 {
  return ((void*)0);
 }
 VAR_3 = FUNC_3(VAR_4);
 FUNC_4(VAR_3, VAR_4, VAR_2);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_3);

 return VAR_5;
}
