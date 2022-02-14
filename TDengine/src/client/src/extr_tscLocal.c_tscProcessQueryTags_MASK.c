
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {TYPE_5__* pMeterMeta; } ;
struct TYPE_17__ {scalar_t__ numOfTags; scalar_t__ numOfColumns; } ;
struct TYPE_16__ {int payload; } ;
struct TYPE_15__ {scalar_t__ functionId; } ;
struct TYPE_13__ {int code; } ;
struct TYPE_14__ {TYPE_1__ res; TYPE_4__ cmd; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SMeterMeta ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_9__* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_5(SSqlObj *VAR_2) {
  SSqlCmd *VAR_3 = &VAR_2->cmd;

  SMeterMeta *VAR_4 = FUNC_3(VAR_3, 0)->pMeterMeta;
  if (VAR_4 == ((void*)0) || VAR_4->numOfTags == 0 || VAR_4->numOfColumns == 0) {
    FUNC_0(VAR_3->payload, "invalid table");
    VAR_2->res.code = VAR_0;
    return VAR_2->res.code;
  }

  SSqlExpr *VAR_5 = FUNC_4(VAR_3, 0);
  if (VAR_5->functionId == VAR_1) {
    return FUNC_2(VAR_2);
  } else {
    return FUNC_1(VAR_2);
  }
}
