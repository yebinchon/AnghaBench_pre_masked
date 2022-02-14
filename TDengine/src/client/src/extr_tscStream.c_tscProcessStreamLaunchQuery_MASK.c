
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_23__ {int name; } ;
struct TYPE_22__ {scalar_t__ ahandle; } ;
struct TYPE_19__ {int code; } ;
struct TYPE_21__ {int cmd; TYPE_1__ res; TYPE_2__* param; int fp; } ;
struct TYPE_20__ {TYPE_3__* pSql; int precision; int slidingTime; } ;
typedef TYPE_2__ SSqlStream ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSchedMsg ;
typedef TYPE_5__ SMeterMetaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 TYPE_5__* FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_11(SSchedMsg *VAR_3) {
  SSqlStream *VAR_4 = (SSqlStream *)VAR_3->ahandle;
  SSqlObj * VAR_5 = VAR_4->pSql;

  VAR_5->fp = VAR_2;
  VAR_5->param = VAR_4;
  SMeterMetaInfo *VAR_6 = FUNC_3(&VAR_5->cmd, 0);

  int VAR_7 = FUNC_2(VAR_5, VAR_6->name, 0);
  VAR_5->res.code = VAR_7;

  if (VAR_7 == VAR_0) return;

  if (VAR_7 == 0 && FUNC_0(VAR_6)) {
    VAR_7 = FUNC_4(VAR_5);
    VAR_5->res.code = VAR_7;

    if (VAR_7 == VAR_0) return;
  }

  FUNC_9(&VAR_5->cmd);


  if (VAR_7 != VAR_1) {
    int64_t VAR_8 = FUNC_5(VAR_4->slidingTime, VAR_4->precision);
    FUNC_1("%p stream:%p,get metermeta failed, retry in %lldms", VAR_4->pSql, VAR_4, VAR_8);

    FUNC_8(VAR_4, VAR_5, VAR_8);
    return;
  }

  FUNC_10("%p stream:%p start stream query on:%s", VAR_5, VAR_4, VAR_6->name);
  FUNC_7(VAR_4->pSql);

  FUNC_6(VAR_4);
}
