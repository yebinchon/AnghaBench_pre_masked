
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ limit; int offset; } ;
struct TYPE_17__ {scalar_t__ vnodeIdx; scalar_t__ globalLimit; scalar_t__ command; TYPE_1__ limit; } ;
struct TYPE_15__ {scalar_t__ numOfTotal; scalar_t__ numOfRows; int offset; } ;
struct TYPE_16__ {int (* fetchFp ) (void*,int *,int) ;int fp; TYPE_5__ cmd; TYPE_3__ res; } ;
struct TYPE_14__ {scalar_t__ numOfVnodes; } ;
struct TYPE_12__ {TYPE_2__* pMetricMeta; } ;
typedef int TAOS_RES ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (void*,int *,int) ;
 TYPE_10__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void *VAR_3, TAOS_RES *VAR_4, int VAR_5) {
  if (VAR_4 == ((void*)0)) {
    return;
  }

  SSqlObj *VAR_6 = (SSqlObj *)VAR_4;
  SSqlRes *VAR_7 = &VAR_6->res;
  SSqlCmd *VAR_8 = &VAR_6->cmd;


  if (VAR_5 == 0 && FUNC_5(VAR_8)) {

    FUNC_0(VAR_8->vnodeIdx >= 0);


    if (VAR_8->globalLimit > 0 && VAR_7->numOfTotal >= VAR_8->globalLimit) {
      (*VAR_6->fetchFp)(VAR_3, VAR_4, 0);
      return;
    }


    VAR_8->limit.limit = VAR_8->globalLimit - VAR_7->numOfTotal;
    VAR_8->limit.offset = VAR_7->offset;

    if ((++(VAR_8->vnodeIdx)) < FUNC_3(VAR_8, 0)->pMetricMeta->numOfVnodes) {
      FUNC_7("%p retrieve data from next vnode:%d", VAR_6, VAR_8->vnodeIdx);

      VAR_6->cmd.command = VAR_1;

      FUNC_6(VAR_7);
      VAR_6->fp = VAR_2;
      FUNC_4(VAR_6);
      return;
    }
  } else {
    if (VAR_8->command != VAR_0) {
      VAR_7->numOfTotal += VAR_7->numOfRows;
    }
  }

  (*VAR_6->fetchFp)(VAR_3, VAR_4, VAR_5);
}
