
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* pMetricMeta; } ;
struct TYPE_11__ {scalar_t__ limit; scalar_t__ offset; } ;
struct TYPE_15__ {scalar_t__ globalLimit; scalar_t__ vnodeIdx; int command; TYPE_1__ limit; } ;
struct TYPE_13__ {scalar_t__ numOfTotal; scalar_t__ offset; scalar_t__ numOfRows; } ;
struct TYPE_14__ {int * fp; struct TYPE_14__* signature; TYPE_3__ res; TYPE_5__ cmd; } ;
struct TYPE_12__ {scalar_t__ numOfVnodes; } ;
typedef int * TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SMeterMetaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 TYPE_6__* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;

TAOS_ROW FUNC_5(TAOS_RES *VAR_3) {
  SSqlObj *VAR_4 = (SSqlObj *)VAR_3;
  SSqlCmd *VAR_5 = &VAR_4->cmd;
  SSqlRes *VAR_6 = &VAR_4->res;

  if (VAR_4 == ((void*)0) || VAR_4->signature != VAR_4) {
    VAR_2 = VAR_0;
    return ((void*)0);
  }


  TAOS_ROW VAR_7 = FUNC_1(VAR_3);
  while (VAR_7 == ((void*)0) && FUNC_4(VAR_5)) {
    SMeterMetaInfo *VAR_8 = FUNC_2(VAR_5, 0);


    if (VAR_5->globalLimit > 0 && VAR_6->numOfTotal >= VAR_5->globalLimit) {
      return ((void*)0);
    }





    VAR_5->limit.limit = VAR_5->globalLimit - VAR_6->numOfTotal;
    VAR_5->limit.offset = VAR_6->offset;

    FUNC_0((VAR_6->offset >= 0 && VAR_6->numOfRows == 0) || (VAR_6->offset == 0 && VAR_6->numOfRows >= 0));

    if ((++VAR_5->vnodeIdx) < VAR_8->pMetricMeta->numOfVnodes) {
      VAR_5->command = VAR_1;
      FUNC_0(VAR_4->fp == ((void*)0));
      FUNC_3(VAR_4);
      VAR_7 = FUNC_1(VAR_3);
    }


    if (VAR_7 != ((void*)0) || VAR_5->vnodeIdx >= VAR_8->pMetricMeta->numOfVnodes) {
      break;
    }
  }

  return VAR_7;
}
