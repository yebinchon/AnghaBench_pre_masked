
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* vpeerDesc; } ;
struct TYPE_20__ {int * pMetricMeta; TYPE_8__* pMeterMeta; } ;
struct TYPE_19__ {void* vnode; } ;
struct TYPE_18__ {int vnodeIdx; } ;
struct TYPE_17__ {size_t index; TYPE_5__ cmd; } ;
struct TYPE_16__ {TYPE_2__* vpeerDesc; } ;
struct TYPE_15__ {int vnode; } ;
struct TYPE_14__ {int vnode; } ;
typedef TYPE_3__ SVnodeSidList ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SQueryMeterMsg ;
typedef int SMetricMeta ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SMeterMeta ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 TYPE_3__* FUNC_3 (int *,int ) ;

void FUNC_4(SSqlObj *VAR_1, char *VAR_2) {
  SSqlCmd * VAR_3 = &VAR_1->cmd;
  SMeterMetaInfo *VAR_4 = FUNC_2(VAR_3, 0);

  char * VAR_5 = VAR_2 + VAR_0;
  SQueryMeterMsg *VAR_6 = (SQueryMeterMsg *)VAR_5;

  if (FUNC_0(VAR_4)) {
    SMeterMeta *VAR_7 = VAR_4->pMeterMeta;
    VAR_6->vnode = FUNC_1(VAR_7->vpeerDesc[VAR_1->index].vnode);
  } else {
    SMetricMeta * VAR_8 = VAR_4->pMetricMeta;
    SVnodeSidList *VAR_9 = FUNC_3(VAR_8, VAR_3->vnodeIdx);
    VAR_6->vnode = FUNC_1(VAR_9->vpeerDesc[VAR_1->index].vnode);
  }
}
