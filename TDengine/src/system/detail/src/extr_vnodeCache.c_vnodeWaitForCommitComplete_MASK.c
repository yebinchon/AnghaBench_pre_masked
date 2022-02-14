
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_5__ {scalar_t__ commitInProcess; int vmutex; } ;
struct TYPE_4__ {int vnode; scalar_t__ pCachePool; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SCachePool ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(SVnodeObj *VAR_0) {
  SCachePool *VAR_1 = (SCachePool *)(VAR_0->pCachePool);


  const int32_t VAR_2 = 1000;
  int32_t VAR_3 = 0;


  while(VAR_3++ < VAR_2) {
    int32_t VAR_4 = 0;

    FUNC_1(&VAR_1->vmutex);
    VAR_4 = VAR_1->commitInProcess;
    FUNC_2(&VAR_1->vmutex);

    if (VAR_4) {
      FUNC_0("vid:%d still in commit, wait for completed", VAR_0->vnode);
      FUNC_3(10);
    }
  }
}
