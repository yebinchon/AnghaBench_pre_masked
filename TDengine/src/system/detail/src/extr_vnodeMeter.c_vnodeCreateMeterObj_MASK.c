
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lastCreate; TYPE_1__** meterList; } ;
struct TYPE_9__ {size_t vnode; size_t sid; scalar_t__ uid; scalar_t__ sversion; scalar_t__ timeStamp; int meterId; int state; int * pCache; } ;
typedef TYPE_1__ SMeterObj ;
typedef int SConnSec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,size_t,size_t,int ,...) ;
 int FUNC_1 (char*,size_t,size_t,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 TYPE_4__* VAR_4 ;
 int FUNC_5 (size_t,size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;

int FUNC_8(SMeterObj *VAR_5, SConnSec *VAR_6) {
  SMeterObj *VAR_7;
  int VAR_8;

  VAR_7 = VAR_4[VAR_5->vnode].meterList[VAR_5->sid];
  VAR_8 = VAR_1;

  if (VAR_7 && VAR_7->uid == VAR_5->uid) {
    if (VAR_7->sversion == VAR_5->sversion) {
      FUNC_0("vid:%d sid:%d id:%s sversion:%d, identical meterObj, ignore create", VAR_5->vnode, VAR_5->sid,
             VAR_5->meterId, VAR_5->sversion);
      return -1;
    }

    FUNC_0("vid:%d sid:%d id:%s, update schema", VAR_5->vnode, VAR_5->sid, VAR_5->meterId);
    if (!FUNC_4(VAR_7, VAR_3)) FUNC_7(VAR_5, ((void*)0));
    return VAR_1;
  }

  if (VAR_7) {
    FUNC_1("vid:%d sid:%d id:%s, old meter is there, remove it", VAR_5->vnode, VAR_5->sid, VAR_5->meterId);
    FUNC_5(VAR_5->vnode, VAR_5->sid);
  }

  VAR_5->pCache = FUNC_2(VAR_5);
  if (VAR_5->pCache == ((void*)0)) {
    VAR_8 = VAR_0;
  } else {
    VAR_4[VAR_5->vnode].meterList[VAR_5->sid] = VAR_5;
    VAR_5->state = VAR_2;
    if (VAR_5->timeStamp > VAR_4[VAR_5->vnode].lastCreate) VAR_4[VAR_5->vnode].lastCreate = VAR_5->timeStamp;
    FUNC_6(VAR_5);

    FUNC_3(VAR_5);
    FUNC_0("vid:%d sid:%d id:%s, meterObj is created, uid:%ld", VAR_5->vnode, VAR_5->sid, VAR_5->meterId, VAR_5->uid);
  }

  return VAR_8;
}
