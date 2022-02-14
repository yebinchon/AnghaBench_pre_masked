
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct _reent {void* _errno; } ;
typedef int off_t ;
typedef int newPosition ;
struct TYPE_5__ {scalar_t__ cluster; scalar_t__ byte; scalar_t__ sector; } ;
struct TYPE_7__ {int inUse; scalar_t__ currentPosition; scalar_t__ filesize; scalar_t__ startCluster; TYPE_1__ rwPosition; TYPE_2__* partition; } ;
struct TYPE_6__ {scalar_t__ bytesPerCluster; scalar_t__ bytesPerSector; int lock; scalar_t__ sectorsPerCluster; } ;
typedef TYPE_2__ PARTITION ;
typedef TYPE_3__ FILE_STRUCT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;



 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

off_t FUNC_3 (struct _reent *VAR_6, void *VAR_7, off_t VAR_8, int VAR_9) {
 FILE_STRUCT* VAR_10 = (FILE_STRUCT*) VAR_7;
 PARTITION* VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14;
 off_t VAR_15;
 uint32_t VAR_16;

 if ((VAR_10 == ((void*)0)) || (VAR_10->inUse == 0)) {

  VAR_6->_errno = VAR_2;
  return -1;
 }

 VAR_11 = VAR_10->partition;
 FUNC_1(&VAR_11->lock);

 switch (VAR_9) {
  case 128:
   VAR_15 = VAR_8;
   break;
  case 130:
   VAR_15 = (off_t)VAR_10->currentPosition + VAR_8;
   break;
  case 129:
   VAR_15 = (off_t)VAR_10->filesize + VAR_8;
   break;
  default:
   FUNC_2(&VAR_11->lock);
   VAR_6->_errno = VAR_3;
   return -1;
 }

 if ((VAR_8 > 0) && (VAR_15 < 0)) {
  FUNC_2(&VAR_11->lock);
  VAR_6->_errno = VAR_4;
  return -1;
 }



 if (VAR_15 < 0 || ((sizeof(VAR_15) > 4) && VAR_15 > (off_t)VAR_5)) {
  FUNC_2(&VAR_11->lock);
  VAR_6->_errno = VAR_3;
  return -1;
 }

 VAR_16 = (uint32_t)VAR_15;



 if (VAR_16 <= VAR_10->filesize && VAR_10->startCluster != VAR_1) {


  VAR_14 = VAR_16 / VAR_11->bytesPerCluster;
  VAR_12 = VAR_10->startCluster;
  if (VAR_16 >= VAR_10->currentPosition) {

   int VAR_17 = VAR_10->currentPosition / VAR_11->bytesPerCluster;
   if (VAR_10->rwPosition.sector == VAR_11->sectorsPerCluster) {
    VAR_17--;
   }
   VAR_14 -= VAR_17;
   VAR_12 = VAR_10->rwPosition.cluster;
  }


  VAR_10->rwPosition.sector = (VAR_16 % VAR_11->bytesPerCluster) / VAR_11->bytesPerSector;
  VAR_10->rwPosition.byte = VAR_16 % VAR_11->bytesPerSector;

  VAR_13 = FUNC_0 (VAR_11, VAR_12);
  while ((VAR_14 > 0) && (VAR_13 != VAR_1) && (VAR_13 != VAR_0)) {
   VAR_14--;
   VAR_12 = VAR_13;
   VAR_13 = FUNC_0 (VAR_11, VAR_12);
  }


  if (VAR_14 > 0) {
   if ((VAR_14 == 1) && (VAR_10->filesize == VAR_16) && (VAR_10->rwPosition.sector == 0)) {

    VAR_10->rwPosition.sector = VAR_11->sectorsPerCluster;
    VAR_10->rwPosition.byte = 0;
   } else {
    FUNC_2(&VAR_11->lock);
    VAR_6->_errno = VAR_3;
    return -1;
   }
  }

  VAR_10->rwPosition.cluster = VAR_12;
 }


 VAR_10->currentPosition = VAR_16;

 FUNC_2(&VAR_11->lock);
 return VAR_16;
}
