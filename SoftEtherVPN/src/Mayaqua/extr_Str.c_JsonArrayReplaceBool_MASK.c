
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int JSON_VALUE ;
typedef int JSON_ARRAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

UINT FUNC_3(JSON_ARRAY *VAR_2, UINT VAR_3, int VAR_4) {
 JSON_VALUE *VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0)) {
  return VAR_0;
 }
 if (FUNC_0(VAR_2, VAR_3, VAR_5) == VAR_0) {
  FUNC_1(VAR_5);
  return VAR_0;
 }
 return VAR_1;
}
