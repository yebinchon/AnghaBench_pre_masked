
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;
typedef int K ;
typedef int ELEMENT ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int *) ;
 int * FUNC_2 (int *,char*,int *) ;

ELEMENT *FUNC_3(PACK *VAR_0, char *VAR_1, K *VAR_2)
{
 BUF *VAR_3;
 ELEMENT *VAR_4 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_2, 0, ((void*)0));
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_0(VAR_3);

 return VAR_4;
}
