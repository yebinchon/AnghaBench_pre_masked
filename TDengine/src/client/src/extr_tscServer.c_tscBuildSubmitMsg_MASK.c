
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int order; } ;
struct TYPE_17__ {char* payload; int msgType; int count; TYPE_1__ order; } ;
struct TYPE_16__ {size_t index; TYPE_2__* vpeerDesc; } ;
struct TYPE_15__ {TYPE_6__* pMeterMeta; } ;
struct TYPE_14__ {int vnode; int numOfSid; int import; } ;
struct TYPE_13__ {TYPE_9__ cmd; } ;
struct TYPE_12__ {int vnode; } ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SShellSubmitMsg ;
typedef TYPE_5__ SMeterMetaInfo ;
typedef TYPE_6__ SMeterMeta ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (TYPE_9__*,int ) ;
 int FUNC_3 (char*,TYPE_3__*,int ) ;

int FUNC_4(SSqlObj *VAR_2) {
  SShellSubmitMsg *VAR_3;
  char * VAR_4, *VAR_5;
  int VAR_6 = 0;

  SMeterMetaInfo *VAR_7 = FUNC_2(&VAR_2->cmd, 0);
  SMeterMeta * VAR_8 = VAR_7->pMeterMeta;

  VAR_5 = VAR_2->cmd.payload + VAR_1;
  VAR_4 = VAR_5;

  VAR_3 = (SShellSubmitMsg *)VAR_4;
  VAR_3->import = VAR_2->cmd.order.order;
  VAR_3->vnode = FUNC_1(VAR_8->vpeerDesc[VAR_8->index].vnode);
  VAR_3->numOfSid = FUNC_0(VAR_2->cmd.count);


  VAR_2->cmd.msgType = VAR_0;
  FUNC_3("%p update submit msg vnode:%d", VAR_2, FUNC_1(VAR_3->vnode));

  return VAR_6;
}
