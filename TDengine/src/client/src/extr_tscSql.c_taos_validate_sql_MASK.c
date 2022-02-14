
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {int numOfRows; int code; scalar_t__ numOfTotal; } ;
struct TYPE_10__ {int * sqlstr; TYPE_2__ res; } ;
struct TYPE_8__ {int db; int acctId; TYPE_3__* pSql; struct TYPE_8__* signature; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,int) ;
 int FUNC_6 (char*,TYPE_3__*) ;
 int FUNC_7 (char*,TYPE_3__*,...) ;

int FUNC_8(TAOS *VAR_5, const char *VAR_6) {
  STscObj *VAR_7 = (STscObj *)VAR_5;
  if (VAR_7 == ((void*)0) || VAR_7->signature != VAR_7) {
    VAR_4 = VAR_1;
    return VAR_1;
  }

  SSqlObj *VAR_8 = VAR_7->pSql;
  SSqlRes *VAR_9 = &VAR_8->res;

  VAR_9->numOfRows = 1;
  VAR_9->numOfTotal = 0;

  FUNC_7("%p Valid SQL: %s pObj:%p", VAR_8, VAR_6, VAR_7);

  int32_t VAR_10 = FUNC_1(VAR_6);
  if (VAR_10 > VAR_3) {
    FUNC_6("%p sql too long", VAR_8);
    VAR_9->code = VAR_2;
    return VAR_9->code;
  }

  VAR_8->sqlstr = FUNC_0(VAR_8->sqlstr, VAR_10 + 1);
  if (VAR_8->sqlstr == ((void*)0)) {
    VAR_9->code = VAR_0;
    FUNC_6("%p failed to malloc sql string buffer", VAR_8);
    FUNC_7("%p Valid SQL result:%d, %s pObj:%p", VAR_8, VAR_9->code, FUNC_3(VAR_5), VAR_7);
    return VAR_9->code;
  }

  FUNC_2(VAR_8->sqlstr, VAR_6);

  VAR_9->code = (uint8_t)FUNC_5(VAR_8, VAR_7->acctId, VAR_7->db, 0);
  int VAR_11 = VAR_9->code;

  FUNC_7("%p Valid SQL result:%d, %s pObj:%p", VAR_8, VAR_9->code, FUNC_3(VAR_5), VAR_7);
  FUNC_4(VAR_8);

  return VAR_11;
}
