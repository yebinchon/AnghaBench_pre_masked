
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pQuery; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef int SQuery ;
typedef int SMeterObj ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(SQueryRuntimeEnv *VAR_1, SMeterObj *VAR_2, bool *VAR_3, bool *VAR_4) {
  SQuery *VAR_5 = VAR_1->pQuery;

  *VAR_4 = FUNC_0(VAR_1, VAR_2);
  *VAR_3 = FUNC_1(VAR_5, VAR_2);

  FUNC_2(VAR_5, VAR_0);
}
