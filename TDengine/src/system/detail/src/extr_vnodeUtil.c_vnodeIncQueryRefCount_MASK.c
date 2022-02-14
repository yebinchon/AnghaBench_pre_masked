
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_15__ {scalar_t__ state; int numOfQueries; int meterId; int sid; int vnode; } ;
struct TYPE_14__ {size_t sid; } ;
struct TYPE_13__ {size_t vnode; size_t numOfSids; } ;
struct TYPE_12__ {TYPE_4__** meterList; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SQueryMeterMsg ;
typedef TYPE_3__ SMeterSidExtInfo ;
typedef TYPE_4__ SMeterObj ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (char*,TYPE_2__*,size_t,size_t) ;
 int FUNC_2 (char*,TYPE_2__*,size_t,size_t,size_t,...) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (size_t,size_t) ;

int32_t FUNC_5(SQueryMeterMsg* VAR_6, SMeterSidExtInfo** VAR_7, SMeterObj** VAR_8,
                              int32_t* VAR_9) {
  SVnodeObj* VAR_10 = &VAR_5[VAR_6->vnode];

  int32_t VAR_11 = 0;
  int32_t VAR_12 = VAR_2;

  for (int32_t VAR_13 = 0; VAR_13 < VAR_6->numOfSids; ++VAR_13) {
    SMeterObj* VAR_14 = VAR_10->meterList[VAR_7[VAR_13]->sid];

    if (VAR_14 == ((void*)0) || (VAR_14->state > VAR_4)) {
      if (VAR_14 == ((void*)0) || FUNC_3(VAR_14, VAR_3)) {
        VAR_12 = VAR_1;
        FUNC_1("qmsg:%p, vid:%d sid:%d, not there or will be dropped", VAR_6, VAR_6->vnode, VAR_7[VAR_13]->sid);
        FUNC_4(VAR_6->vnode, VAR_7[VAR_13]->sid);
      } else {
        VAR_12 = VAR_0;
        FUNC_2("qmsg:%p, vid:%d sid:%d id:%s, it is in state:%d, wait!", VAR_6, VAR_6->vnode, VAR_7[VAR_13]->sid,
               VAR_14->meterId, VAR_14->state);
      }
    } else {




      VAR_8[(*VAR_9)++] = VAR_14;
      FUNC_0(&VAR_14->numOfQueries, 1);


      if (VAR_14->numOfQueries > 1) {
        FUNC_2("qmsg:%p, vid:%d sid:%d id:%s, inc query ref, numOfQueries:%d", VAR_6, VAR_14->vnode, VAR_14->sid,
               VAR_14->meterId, VAR_14->numOfQueries);
        VAR_11++;
      }
    }
  }

  FUNC_2("qmsg:%p, query meters: %d, inc query ref %d, numOfQueries on %d meters are 1", VAR_6,
         VAR_6->numOfSids, *VAR_9, (*VAR_9) - VAR_11);

  return VAR_12;
}
