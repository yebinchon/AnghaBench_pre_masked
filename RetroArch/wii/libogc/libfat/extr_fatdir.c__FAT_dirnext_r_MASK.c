
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int dummy; } ;
struct _reent {int _errno; } ;
struct TYPE_11__ {int filename; } ;
struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {scalar_t__ dirStruct; } ;
struct TYPE_8__ {TYPE_4__* partition; TYPE_5__ currentEntry; scalar_t__ validEntry; int inUse; } ;
typedef TYPE_1__ DIR_STATE_STRUCT ;
typedef TYPE_2__ DIR_ITER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*,struct stat*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5 (struct _reent *VAR_2, DIR_ITER *VAR_3, char *VAR_4, struct stat *VAR_5) {
 DIR_STATE_STRUCT* VAR_6 = (DIR_STATE_STRUCT*) (VAR_3->dirStruct);

 FUNC_2(&VAR_6->partition->lock);


 if (!VAR_6->inUse) {
  FUNC_3(&VAR_6->partition->lock);
  VAR_2->_errno = VAR_0;
  return -1;
 }


 if (! VAR_6->validEntry) {
  FUNC_3(&VAR_6->partition->lock);
  return -1;
 }


 FUNC_4 (VAR_4, VAR_6->currentEntry.filename, VAR_1);

 if (VAR_5 != ((void*)0)) {
  FUNC_0 (VAR_6->partition, &(VAR_6->currentEntry), VAR_5);
 }


 VAR_6->validEntry =
  FUNC_1 (VAR_6->partition, &(VAR_6->currentEntry));

 FUNC_3(&VAR_6->partition->lock);
 return 0;
}
