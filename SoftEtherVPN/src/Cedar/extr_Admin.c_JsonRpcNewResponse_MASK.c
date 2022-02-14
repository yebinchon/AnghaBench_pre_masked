
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

JSON_VALUE *FUNC_4(PACK *VAR_0)
{
 JSON_VALUE *VAR_1;
 JSON_OBJECT *VAR_2;
 JSON_VALUE *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0();
 VAR_2 = FUNC_2(VAR_1);

 VAR_3 = FUNC_3(VAR_0);

 FUNC_1(VAR_2, "result", VAR_3);

 return VAR_1;
}
