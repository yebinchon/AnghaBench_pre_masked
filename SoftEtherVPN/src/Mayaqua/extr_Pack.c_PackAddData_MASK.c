
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VALUE ;
typedef int UINT ;
typedef int PACK ;
typedef int ELEMENT ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (void*,int ) ;
 int * FUNC_2 (char*,int ,int,int **) ;
 int VAR_0 ;

ELEMENT *FUNC_3(PACK *VAR_1, char *VAR_2, void *VAR_3, UINT VAR_4)
{
 VALUE *VAR_5;
 ELEMENT *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_2, VAR_0, 1, &VAR_5);
 if (FUNC_0(VAR_1, VAR_6) == 0)
 {
  return ((void*)0);
 }

 return VAR_6;
}
