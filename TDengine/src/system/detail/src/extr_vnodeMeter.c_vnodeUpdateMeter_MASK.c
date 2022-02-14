
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_15__ {size_t vnode; size_t sid; scalar_t__ numOfQueries; scalar_t__ timeStamp; int state; int meterId; int sversion; int pCache; struct TYPE_15__* schema; int maxBytes; int bytesPerPoint; int numOfColumns; } ;
struct TYPE_14__ {scalar_t__ lastCreate; int vmutex; TYPE_2__** meterList; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,size_t,int ,...) ;
 int FUNC_1 (char*,size_t,size_t,int ,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (void (*) (void*,void*),int,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 void FUNC_13 (void*,void*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ) ;
 int VAR_4 ;

void FUNC_16(void *VAR_5, void *VAR_6) {
  SMeterObj *VAR_7 = (SMeterObj *)VAR_5;
  if (VAR_7 == ((void*)0) || VAR_7->vnode < 0 || VAR_7->sid < 0) return;

  SVnodeObj* VAR_8 = &VAR_3[VAR_7->vnode];

  if (VAR_8->meterList == ((void*)0)) {
    FUNC_1("vid:%d sid:%d id:%s, vnode is deleted, abort update schema", VAR_7->vnode, VAR_7->sid, VAR_7->meterId);
    FUNC_2(VAR_7->schema);
    FUNC_2(VAR_7);
    return;
  }

  SMeterObj *VAR_9 = VAR_8->meterList[VAR_7->sid];
  if (VAR_9 == ((void*)0) || FUNC_12(VAR_9, VAR_0)) {
    FUNC_1("vid:%d sid:%d id:%s, meter is deleted, abort update schema", VAR_7->vnode, VAR_7->sid, VAR_7->meterId);
    FUNC_2(VAR_7->schema);
    FUNC_2(VAR_7);
    return;
  }

  int32_t VAR_10 = FUNC_15(VAR_9, VAR_2);
  if (VAR_10 >= VAR_0) {
    FUNC_0("vid:%d sid:%d id:%s, meter is deleted, failed to update, state:%d",
           VAR_9->vnode, VAR_9->sid, VAR_9->meterId, VAR_10);
    return;
  }

  int32_t VAR_11 = 0;
  FUNC_3(&VAR_8->vmutex);
  VAR_11 = VAR_9->numOfQueries;
  FUNC_4(&VAR_8->vmutex);

  if (VAR_11 > 0 || VAR_10 != VAR_1) {

    FUNC_9(VAR_9, VAR_2);
    FUNC_1("vid:%d sid:%d id:%s, update failed, retry later, numOfQueries:%d, state:%d",
           VAR_7->vnode, VAR_7->sid, VAR_7->meterId, VAR_11, VAR_10);


    if (FUNC_6(FUNC_16, 50, VAR_7, VAR_4) == ((void*)0)) {
      FUNC_0("vid:%d sid:%d id:%s, failed to start update timer, no retry", VAR_7->vnode, VAR_7->sid, VAR_7->meterId);
      FUNC_2(VAR_7->schema);
      FUNC_2(VAR_7);
    }
    return;
  }


  if (!FUNC_11(VAR_9)) {

    if (FUNC_6(FUNC_13, 0, VAR_9, VAR_4) == ((void*)0)) {
      FUNC_0("vid:%d sid:%d id:%s, failed to start commit timer", VAR_9->vnode, VAR_9->sid, VAR_9->meterId);
      FUNC_9(VAR_9, VAR_2);
      FUNC_2(VAR_7->schema);
      FUNC_2(VAR_7);
      return;
    }

    if (FUNC_6(FUNC_16, 50, VAR_7, VAR_4) == ((void*)0)) {
      FUNC_0("vid:%d sid:%d id:%s, failed to start update timer", VAR_7->vnode, VAR_7->sid, VAR_7->meterId);
      FUNC_9(VAR_9, VAR_2);
      FUNC_2(VAR_7->schema);
      FUNC_2(VAR_7);
    }

    FUNC_1("vid:%d sid:%d meterId:%s, there are data in cache, commit first, update later",
           VAR_7->vnode, VAR_7->sid, VAR_7->meterId);
    FUNC_9(VAR_9, VAR_2);
    return;
  }

  FUNC_5(VAR_9->meterId, VAR_7->meterId);
  VAR_9->numOfColumns = VAR_7->numOfColumns;
  VAR_9->timeStamp = VAR_7->timeStamp;
  VAR_9->bytesPerPoint = VAR_7->bytesPerPoint;
  VAR_9->maxBytes = VAR_7->maxBytes;
  if (VAR_9->timeStamp > VAR_3[VAR_9->vnode].lastCreate) VAR_3[VAR_9->vnode].lastCreate = VAR_9->timeStamp;

  FUNC_7(VAR_9->schema);
  VAR_9->schema = VAR_7->schema;

  FUNC_10(VAR_9);
  VAR_9->pCache = FUNC_8(VAR_9);

  VAR_9->sversion = VAR_7->sversion;
  FUNC_14(VAR_9);
  FUNC_9(VAR_9, VAR_2);

  FUNC_1("vid:%d sid:%d id:%s, schema is updated, state:%d", VAR_9->vnode, VAR_9->sid, VAR_9->meterId, VAR_9->state);
  FUNC_2(VAR_7);
}
