
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int nSize; } ;
typedef TYPE_1__ tSkipList ;
typedef int int32_t ;
struct TYPE_6__ {int num; int * cur; TYPE_1__* pSkipList; } ;
typedef TYPE_2__ SSkipListIterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int32_t FUNC_2(tSkipList *VAR_0, SSkipListIterator* VAR_1) {
  if (VAR_0 == ((void*)0)) {
    return -1;
  }

  VAR_1->pSkipList = VAR_0;

  FUNC_0(&VAR_0->lock);
  VAR_1->cur = ((void*)0);
  VAR_1->num = VAR_0->nSize;
  FUNC_1(&VAR_0->lock);

  return 0;
}
