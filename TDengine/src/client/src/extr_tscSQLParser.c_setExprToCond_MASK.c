
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *,int *,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_2(SSqlCmd* VAR_3, tSQLExpr** VAR_4, tSQLExpr* VAR_5, const char* VAR_6, int32_t VAR_7) {
  if (*VAR_4 != ((void*)0)) {
    if (VAR_7 == VAR_0 && VAR_6 != ((void*)0)) {
      FUNC_0(VAR_3, VAR_6);
      return VAR_1;
    }

    *VAR_4 = FUNC_1((*VAR_4), VAR_5, VAR_7);
  } else {
    *VAR_4 = VAR_5;
  }

  return VAR_2;
}
