
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct _reent {void* _errno; } ;
typedef scalar_t__ off_t ;
typedef int len ;
struct TYPE_11__ {int cluster; int sector; int byte; } ;
struct TYPE_10__ {int filesize; scalar_t__ startCluster; int currentPosition; int modified; TYPE_3__ appendPosition; scalar_t__ append; TYPE_3__ rwPosition; TYPE_1__* partition; int write; int inUse; } ;
struct TYPE_9__ {int bytesPerCluster; int bytesPerSector; int sectorsPerCluster; int lock; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ FILE_STRUCT ;
typedef TYPE_3__ FILE_POSITION ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int,unsigned int) ;
 int FUNC_4 (struct _reent*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7 (struct _reent *VAR_6, void *VAR_7, off_t VAR_8) {
 FILE_STRUCT* VAR_9 = (FILE_STRUCT*) VAR_7;
 PARTITION* VAR_10;
 int VAR_11=0;
 uint32_t VAR_12 = (uint32_t)VAR_8;

 if (VAR_8 < 0) {

  VAR_6->_errno = VAR_3;
  return -1;
 }

 if ((sizeof(VAR_8) > 4) && VAR_8 > (off_t)VAR_5) {

  VAR_6->_errno = VAR_2;
  return -1;
 }

 if (!VAR_9 || !VAR_9->inUse) {

  VAR_6->_errno = VAR_1;
  return -1;
 }

 if (!VAR_9->write) {

  VAR_6->_errno = VAR_3;
  return -1;
 }

 VAR_10 = VAR_9->partition;
 FUNC_5(&VAR_10->lock);

 if (VAR_12 > VAR_9->filesize) {

  FILE_POSITION VAR_13;
  uint32_t VAR_14;

  if (VAR_9->startCluster == VAR_0) {
   uint32_t VAR_15 = FUNC_2 (VAR_10, VAR_0);
   if (!FUNC_1(VAR_10, VAR_15)) {

    FUNC_6(&VAR_10->lock);
    VAR_6->_errno = VAR_4;
    return -1;
   }
   VAR_9->startCluster = VAR_15;

   VAR_9->rwPosition.cluster = VAR_9->startCluster;
   VAR_9->rwPosition.sector = 0;
   VAR_9->rwPosition.byte = 0;
  }

  VAR_13 = VAR_9->rwPosition;
  VAR_14 = VAR_9->currentPosition;

  VAR_9->currentPosition = VAR_12;

  if (!FUNC_4 (VAR_6, VAR_9)) {
   VAR_11 = -1;
  }

  if (VAR_9->append) {
   VAR_9->appendPosition = VAR_9->rwPosition;
  }

  VAR_9->rwPosition = VAR_13;
  VAR_9->currentPosition = VAR_14;
 } else if (VAR_12 < VAR_9->filesize){

  if (VAR_8 == 0) {

   FUNC_0 (VAR_10, VAR_9->startCluster);
   VAR_9->startCluster = VAR_0;

   VAR_9->appendPosition.cluster = VAR_0;
   VAR_9->appendPosition.sector = 0;
   VAR_9->appendPosition.byte = 0;
  } else {

   unsigned int VAR_16;
   uint32_t VAR_17;




   VAR_16 = ((VAR_12-1) / VAR_10->bytesPerCluster) + 1;
   VAR_17 = FUNC_3 (VAR_10, VAR_9->startCluster, VAR_16);

   if (VAR_9->append) {
    VAR_9->appendPosition.byte = VAR_12 % VAR_10->bytesPerSector;

    if (VAR_12 % VAR_10->bytesPerCluster == 0) {

     VAR_9->appendPosition.sector = VAR_10->sectorsPerCluster;
    } else {
     VAR_9->appendPosition.sector = (VAR_12 % VAR_10->bytesPerCluster) / VAR_10->bytesPerSector;
    }
    VAR_9->appendPosition.cluster = VAR_17;
   }
  }
 } else {

 }

 VAR_9->filesize = VAR_12;
 VAR_9->modified = 1;

 FUNC_6(&VAR_10->lock);
 return VAR_11;
}
