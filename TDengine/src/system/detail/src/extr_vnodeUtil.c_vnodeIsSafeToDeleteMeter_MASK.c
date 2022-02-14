
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {scalar_t__ numOfQueries; int meterId; int sid; int vnode; } ;
struct TYPE_7__ {int vmutex; TYPE_2__** meterList; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 size_t FUNC_5 (TYPE_2__*,size_t) ;

bool FUNC_6(SVnodeObj* VAR_3, int32_t VAR_4) {
  SMeterObj* VAR_5 = VAR_3->meterList[VAR_4];

  if (VAR_5 == ((void*)0) || FUNC_3(VAR_5, VAR_0)) {
    return 1;
  }

  int32_t VAR_6 = FUNC_5(VAR_5, VAR_1);





  if (VAR_6 != VAR_2 && VAR_6 < VAR_1) {
    FUNC_4(VAR_5);

    FUNC_0("vid:%d sid:%d id:%s, can not be deleted, state:%d, wait", VAR_5->vnode, VAR_5->sid, VAR_5->meterId, VAR_6);
    return 0;
  }

  bool VAR_7 = 1;





  FUNC_1(&VAR_3->vmutex);
  if (VAR_5->numOfQueries > 0) {
    FUNC_0("vid:%d sid:%d id:%s %d queries executing on it, wait query to be finished",
          VAR_5->vnode, VAR_5->sid, VAR_5->meterId, VAR_5->numOfQueries);
    VAR_7 = 0;
  }
  FUNC_2(&VAR_3->vmutex);

  return VAR_7;
}
