
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int code; } ;
struct TYPE_11__ {void* sqlstr; TYPE_2__ res; } ;
struct TYPE_9__ {TYPE_3__* pSql; struct TYPE_9__* signature; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (void*,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (void*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (char*,TYPE_3__*) ;
 int FUNC_6 (char*,TYPE_3__*,int,int ,TYPE_1__*) ;

int FUNC_7(TAOS *VAR_5, const char *VAR_6) {
  STscObj *VAR_7 = (STscObj *)VAR_5;
  if (VAR_7 == ((void*)0) || VAR_7->signature != VAR_7) {
    VAR_4 = VAR_1;
    return VAR_1;
  }

  SSqlObj *VAR_8 = VAR_7->pSql;
  SSqlRes *VAR_9 = &VAR_8->res;

  size_t VAR_10 = FUNC_1(VAR_6);
  if (VAR_10 > VAR_3) {
    FUNC_5("%p sql too long", VAR_8);
    VAR_9->code = VAR_2;
    return VAR_9->code;
  }

  void *VAR_11 = FUNC_0(VAR_8->sqlstr, VAR_10 + 1);
  if (VAR_11 == ((void*)0)) {
    VAR_9->code = VAR_0;
    FUNC_5("%p failed to malloc sql string buffer", VAR_8);
    FUNC_6("%p SQL result:%d, %s pObj:%p", VAR_8, VAR_9->code, FUNC_3(VAR_5), VAR_7);
    return VAR_9->code;
  }

  VAR_8->sqlstr = VAR_11;
  FUNC_2(VAR_8->sqlstr, VAR_6);
  return FUNC_4(VAR_7, VAR_8);
}
