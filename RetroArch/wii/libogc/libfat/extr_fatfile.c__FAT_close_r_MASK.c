
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_9__ {int inUse; TYPE_3__* partition; TYPE_2__* nextOpenFile; TYPE_1__* prevOpenFile; scalar_t__ write; } ;
struct TYPE_8__ {int openFileCount; int lock; TYPE_2__* firstOpenFile; } ;
struct TYPE_7__ {TYPE_1__* prevOpenFile; } ;
struct TYPE_6__ {TYPE_2__* nextOpenFile; } ;
typedef TYPE_4__ FILE_STRUCT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;

int FUNC_3 (struct _reent *VAR_1, void *VAR_2) {
 FILE_STRUCT* VAR_3 = (FILE_STRUCT*) VAR_2;
 int VAR_4 = 0;

 if (!VAR_3->inUse) {
  VAR_1->_errno = VAR_0;
  return -1;
 }

 FUNC_0(&VAR_3->partition->lock);

 if (VAR_3->write) {
  VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4 != 0) {
   VAR_1->_errno = VAR_4;
   VAR_4 = -1;
  }
 }

 VAR_3->inUse = 0;


 VAR_3->partition->openFileCount -= 1;
 if (VAR_3->nextOpenFile) {
  VAR_3->nextOpenFile->prevOpenFile = VAR_3->prevOpenFile;
 }
 if (VAR_3->prevOpenFile) {
  VAR_3->prevOpenFile->nextOpenFile = VAR_3->nextOpenFile;
 } else {
  VAR_3->partition->firstOpenFile = VAR_3->nextOpenFile;
 }

 FUNC_2(&VAR_3->partition->lock);

 return VAR_4;
}
