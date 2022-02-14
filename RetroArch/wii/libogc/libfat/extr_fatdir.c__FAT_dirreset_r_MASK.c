
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {scalar_t__ dirStruct; } ;
struct TYPE_5__ {TYPE_4__* partition; int startCluster; int currentEntry; int validEntry; int inUse; } ;
typedef TYPE_1__ DIR_STATE_STRUCT ;
typedef TYPE_2__ DIR_ITER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3 (struct _reent *VAR_1, DIR_ITER *VAR_2) {
 DIR_STATE_STRUCT* VAR_3 = (DIR_STATE_STRUCT*) (VAR_2->dirStruct);

 FUNC_1(&VAR_3->partition->lock);


 if (!VAR_3->inUse) {
  FUNC_2(&VAR_3->partition->lock);
  VAR_1->_errno = VAR_0;
  return -1;
 }


 VAR_3->validEntry =
  FUNC_0 (VAR_3->partition, &(VAR_3->currentEntry), VAR_3->startCluster);

 FUNC_2(&VAR_3->partition->lock);
 return 0;
}
