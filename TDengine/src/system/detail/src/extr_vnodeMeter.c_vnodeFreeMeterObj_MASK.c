
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ** meterList; } ;
struct TYPE_6__ {size_t vnode; size_t sid; int meterId; } ;
typedef TYPE_1__ SMeterObj ;


 int FUNC_0 (char*,size_t,size_t,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

void FUNC_5(SMeterObj *VAR_1) {
  if (VAR_1 == ((void*)0)) return;

  FUNC_0("vid:%d sid:%d id:%s, meter is cleaned up", VAR_1->vnode, VAR_1->sid, VAR_1->meterId);

  FUNC_4(VAR_1);
  if (VAR_0[VAR_1->vnode].meterList != ((void*)0)) {
    VAR_0[VAR_1->vnode].meterList[VAR_1->sid] = ((void*)0);
  }

  FUNC_1(VAR_1->meterId, 0, FUNC_2(VAR_1->meterId));
  FUNC_3(VAR_1);
}
