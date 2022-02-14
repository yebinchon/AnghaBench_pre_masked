
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ const int32_t ;
struct TYPE_10__ {int code; scalar_t__ qhandle; scalar_t__ numOfTotal; } ;
struct TYPE_11__ {int * thandle; int * fp; TYPE_2__ res; } ;
struct TYPE_9__ {TYPE_3__* pSql; struct TYPE_9__* signature; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int,scalar_t__ const) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,TYPE_3__*,...) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,char*,scalar_t__ const) ;
 int FUNC_10 (char*,TYPE_3__*,...) ;

int FUNC_11(TAOS *VAR_5, const char *VAR_6) {
  const int32_t VAR_7 = 12*1024*1024;

  STscObj *VAR_8 = (STscObj *)VAR_5;
  if (VAR_8 == ((void*)0) || VAR_8->signature != VAR_8) {
    VAR_4 = VAR_1;
    return VAR_1;
  }

  SSqlObj *VAR_9 = VAR_8->pSql;
  SSqlRes *VAR_10 = &VAR_9->res;

  VAR_10->numOfTotal = 0;
  VAR_10->code = 0;

  FUNC_0(VAR_9->fp == ((void*)0));
  FUNC_10("%p tableNameList: %s pObj:%p", VAR_9, VAR_6, VAR_8);

  int32_t VAR_11 = FUNC_3(VAR_6);
  if (VAR_11 > VAR_7) {
    FUNC_7("%p tableNameList too long, length:%d, maximum allowed:%d", VAR_9, VAR_11, VAR_7);
    VAR_10->code = VAR_2;
    return VAR_10->code;
  }

  char* VAR_12 = FUNC_1(1, VAR_11 + 1);
  if (VAR_12 == ((void*)0)) {
    VAR_10->code = VAR_0;
    FUNC_7("%p failed to malloc sql string buffer", VAR_9);
    return VAR_10->code;
  }

  FUNC_4(VAR_12, VAR_6);
  VAR_10->code = (uint8_t) FUNC_9(VAR_9, VAR_12, VAR_11);






  VAR_10->qhandle = 0;
  VAR_9->thandle = ((void*)0);
  FUNC_2(VAR_12);

  if (VAR_10->code != VAR_3) {
    return VAR_10->code;
  }

  FUNC_6(VAR_9);

  FUNC_10("%p load multi metermeta result:%d %s pObj:%p", VAR_9, VAR_10->code, FUNC_5(VAR_5), VAR_8);
  if (VAR_10->code != VAR_3) {
    FUNC_8(VAR_9);
  }

  return VAR_10->code;
}
