
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pHisto; } ;
typedef int SQLFunctionCtx ;
typedef TYPE_1__ SAPercentileInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static bool FUNC_3(SQLFunctionCtx *VAR_1) {
  if (!FUNC_0(VAR_1)) {
    return 0;
  }

  SAPercentileInfo *VAR_2 = FUNC_1(VAR_1);

  char *VAR_3 = (char *)VAR_2 + sizeof(SAPercentileInfo);
  VAR_2->pHisto = FUNC_2(VAR_3, VAR_0);
  return 1;
}
