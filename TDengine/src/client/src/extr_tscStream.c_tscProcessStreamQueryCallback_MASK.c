
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int cmd; } ;
struct TYPE_6__ {TYPE_3__* pSql; int precision; int slidingTime; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlStream ;
typedef int SMeterMetaInfo ;


 int FUNC_0 (int *,int ,void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,TYPE_3__*,TYPE_1__*,int,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, TAOS_RES *VAR_2, int VAR_3) {
  SSqlStream *VAR_4 = (SSqlStream *)VAR_1;
  if (VAR_2 == ((void*)0) || VAR_3 < 0) {
    int64_t VAR_5 = FUNC_4(VAR_4->slidingTime, VAR_4->precision);
    FUNC_2("%p stream:%p, query data failed, code:%d, retry in %lldms", VAR_4->pSql, VAR_4, VAR_3,
             VAR_5);

    SMeterMetaInfo* VAR_6 = FUNC_3(&VAR_4->pSql->cmd, 0);
    FUNC_1(VAR_6, 1);

    FUNC_5(VAR_4, VAR_4->pSql, VAR_5);
    return;
  }

  FUNC_0(VAR_2, VAR_0, VAR_1);
}
