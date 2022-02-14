
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dropStatus; TYPE_1__* pHead; } ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ SVgObj ;
typedef TYPE_2__ SDbObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(SDbObj *VAR_3) {
  if (VAR_3->dropStatus == VAR_1) {
    bool VAR_4 = FUNC_0(VAR_3);
    if (!VAR_4) {
      SVgObj *VAR_5 = VAR_3->pHead;
      while (VAR_5 != ((void*)0)) {
        FUNC_2(VAR_5);
        VAR_5 = VAR_5->next;
      }
      return VAR_0;
    }


    VAR_3->dropStatus = VAR_2;
    FUNC_1(VAR_3);
    return 0;
  } else {
    int VAR_6 = FUNC_3(VAR_3);
    if (VAR_6 != 0) return VAR_6;
    return VAR_0;
  }
}
