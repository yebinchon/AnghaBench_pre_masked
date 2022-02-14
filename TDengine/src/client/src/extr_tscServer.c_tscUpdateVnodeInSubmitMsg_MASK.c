
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* vpeerDesc; } ;
struct TYPE_12__ {TYPE_5__* pMeterMeta; } ;
struct TYPE_11__ {int vnode; } ;
struct TYPE_10__ {size_t index; int cmd; } ;
struct TYPE_9__ {int vnode; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SShellSubmitMsg ;
typedef TYPE_4__ SMeterMetaInfo ;
typedef TYPE_5__ SMeterMeta ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,TYPE_2__*,int ) ;

void FUNC_3(SSqlObj *VAR_1, char *VAR_2) {
  SShellSubmitMsg *VAR_3;
  char * VAR_4;
  SMeterMetaInfo * VAR_5 = FUNC_1(&VAR_1->cmd, 0);

  SMeterMeta *VAR_6 = VAR_5->pMeterMeta;

  VAR_4 = VAR_2 + VAR_0;

  VAR_3 = (SShellSubmitMsg *)VAR_4;
  VAR_3->vnode = FUNC_0(VAR_6->vpeerDesc[VAR_1->index].vnode);
  FUNC_2("%p update submit msg vnode:%d", VAR_1, FUNC_0(VAR_3->vnode));
}
