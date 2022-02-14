
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {scalar_t__ numOfQueries; int meterId; int sid; int vnode; } ;
typedef int SQueryMeterMsg ;
typedef TYPE_1__ SMeterObj ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (char*,int *,size_t,size_t,...) ;

void FUNC_2(SQueryMeterMsg* VAR_0, SMeterObj** VAR_1, int32_t VAR_2) {
  int32_t VAR_3 = 0;

  for (int32_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    SMeterObj* VAR_5 = VAR_1[VAR_4];

    if (VAR_5 != ((void*)0)) {
      FUNC_0(&VAR_5->numOfQueries, 1);

      if (VAR_5->numOfQueries > 0) {
        FUNC_1("qmsg:%p, vid:%d sid:%d id:%s dec query ref, numOfQueries:%d", VAR_0, VAR_5->vnode, VAR_5->sid,
               VAR_5->meterId, VAR_5->numOfQueries);
        VAR_3++;
      }
    }
  }

  FUNC_1("qmsg:%p, dec query ref for %d meters, numOfQueries on %d meters are 0", VAR_0, VAR_2, VAR_2 - VAR_3);
}
