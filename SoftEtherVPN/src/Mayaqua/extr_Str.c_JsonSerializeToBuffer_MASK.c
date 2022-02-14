
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int JSON_VALUE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ,int *) ;

UINT FUNC_2(JSON_VALUE *VAR_2, char *VAR_3, UINT VAR_4) {
 int VAR_5 = -1;
 UINT VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 == 0 || VAR_4 < VAR_6) {
  return VAR_0;
 }
 VAR_5 = FUNC_1(VAR_2, VAR_3, 0, 0, ((void*)0));
 if (VAR_5 < 0) {
  return VAR_0;
 }
 return VAR_1;
}
