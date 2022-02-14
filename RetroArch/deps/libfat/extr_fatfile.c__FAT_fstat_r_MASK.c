
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_size; scalar_t__ st_ino; } ;
struct _reent {int _errno; } ;
typedef scalar_t__ ino_t ;
struct TYPE_10__ {int dataEnd; int dataStart; } ;
struct TYPE_9__ {int inUse; int filesize; scalar_t__ startCluster; int dirEntryEnd; int dirEntryStart; TYPE_1__* partition; } ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ FILE_STRUCT ;
typedef TYPE_3__ DIR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,struct stat*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4 (struct _reent *VAR_2, void *VAR_3, struct stat *VAR_4) {
 FILE_STRUCT* VAR_5 = (FILE_STRUCT*) VAR_3;
 PARTITION* VAR_6;
 DIR_ENTRY VAR_7;

 if ((VAR_5 == ((void*)0)) || (VAR_5->inUse == 0)) {

  VAR_2->_errno = VAR_0;
  return -1;
 }

 VAR_6 = VAR_5->partition;
 FUNC_2(&VAR_6->lock);


 VAR_7.dataStart = VAR_5->dirEntryStart;
 VAR_7.dataEnd = VAR_5->dirEntryEnd;

 if (!FUNC_0 (VAR_6, &VAR_7)) {
  FUNC_3(&VAR_6->lock);
  VAR_2->_errno = VAR_1;
  return -1;
 }


 FUNC_1 (VAR_6, &VAR_7, VAR_4);


   VAR_4->st_ino = (ino_t)(VAR_5->startCluster);
 VAR_4->st_size = VAR_5->filesize;

 FUNC_3(&VAR_6->lock);
 return 0;
}
