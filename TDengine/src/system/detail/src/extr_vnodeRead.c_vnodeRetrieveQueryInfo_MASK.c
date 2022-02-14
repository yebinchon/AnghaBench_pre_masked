
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_12__ {int precision; } ;
struct TYPE_16__ {TYPE_1__ cfg; } ;
struct TYPE_14__ {int rowSize; int * sdata; } ;
struct TYPE_15__ {int code; int pointsRead; int pointsReturned; TYPE_2__* pObj; int dataReady; scalar_t__ killed; int signature; TYPE_3__ query; } ;
struct TYPE_13__ {size_t vnode; } ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SQInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_4__*,TYPE_3__*,TYPE_4__*,int ,int *) ;
 int FUNC_1 (char*,TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_5__* VAR_3 ;

int FUNC_4(void *VAR_4, int *VAR_5, int *VAR_6, int16_t *VAR_7) {
  SQInfo *VAR_8;
  SQuery *VAR_9;

  *VAR_5 = 0;
  *VAR_6 = 0;

  VAR_8 = (SQInfo *)VAR_4;
  if (VAR_8 == ((void*)0)) {
    return VAR_0;
  }

  VAR_9 = &(VAR_8->query);
  if (!FUNC_3(VAR_8) || (VAR_9->sdata == ((void*)0))) {
    FUNC_0("QInfo:%p %p retrieve memory is corrupted!!! QInfo:%p, sign:%p, sdata:%p", VAR_8, VAR_9, VAR_8,
           VAR_8->signature, VAR_9->sdata);
    return VAR_0;
  }

  if (VAR_8->killed) {
    FUNC_1("QInfo:%p it is already killed, %p, code:%d", VAR_8, VAR_9, VAR_8->code);
    if (VAR_8->code == VAR_2) {
      return VAR_1;
    } else {
      return VAR_8->code;
    }
  }

  FUNC_2(&VAR_8->dataReady);
  *VAR_5 = VAR_8->pointsRead - VAR_8->pointsReturned;
  *VAR_6 = VAR_9->rowSize;

  *VAR_7 = VAR_3[VAR_8->pObj->vnode].cfg.precision;

  if (VAR_8->code < 0) return -VAR_8->code;

  return VAR_2;
}
