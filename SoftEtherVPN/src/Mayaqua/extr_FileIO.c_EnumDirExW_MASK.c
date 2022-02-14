
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int DIRLIST ;
typedef int COMPARE ;


 int * VAR_0 ;
 int * FUNC_0 (char*,int *) ;
 int * FUNC_1 (char*,int *) ;

DIRLIST *FUNC_2(wchar_t *VAR_1, COMPARE *VAR_2)
{
 DIRLIST *VAR_3 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = L"./";
 }

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = VAR_0;
 }




 VAR_3 = FUNC_0(VAR_1, VAR_2);


 return VAR_3;
}
