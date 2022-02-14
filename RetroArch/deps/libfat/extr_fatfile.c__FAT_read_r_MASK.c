
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct _reent {void* _errno; } ;
typedef int ssize_t ;
struct TYPE_9__ {unsigned int byte; scalar_t__ cluster; size_t sector; } ;
struct TYPE_8__ {scalar_t__ currentPosition; scalar_t__ filesize; scalar_t__ startCluster; TYPE_3__ rwPosition; TYPE_1__* partition; int read; int inUse; } ;
struct TYPE_7__ {unsigned int bytesPerSector; size_t sectorsPerCluster; size_t bytesPerCluster; int lock; int * cache; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ FILE_STRUCT ;
typedef TYPE_3__ FILE_POSITION ;
typedef int CACHE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,char*,size_t,unsigned int,size_t) ;
 int FUNC_1 (int *,size_t,unsigned int,char*) ;
 size_t FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

ssize_t FUNC_7 (struct _reent *VAR_6, void *VAR_7, char *VAR_8, size_t VAR_9) {
 FILE_STRUCT* VAR_10 = (FILE_STRUCT*) VAR_7;
 PARTITION* VAR_11;
 CACHE* VAR_12;
 FILE_POSITION VAR_13;
 uint32_t VAR_14;
 unsigned int VAR_15;
 size_t VAR_16;
 bool VAR_17 = 1;


 if (VAR_9 <= 0)
  return 0;


 if ((VAR_10 == ((void*)0)) || !VAR_10->inUse || !VAR_10->read) {
  VAR_6->_errno = VAR_2;
  return -1;
 }

 VAR_11 = VAR_10->partition;
 FUNC_5(&VAR_11->lock);


 if (VAR_10->currentPosition >= VAR_10->filesize || VAR_10->startCluster == VAR_1)
   {
  VAR_6->_errno = VAR_4;
  FUNC_6(&VAR_11->lock);
  return 0;
 }


 if (VAR_9 + VAR_10->currentPosition > VAR_10->filesize) {
  VAR_6->_errno = VAR_4;
  VAR_9 = VAR_10->filesize - VAR_10->currentPosition;
 }

 VAR_16 = VAR_9;
 VAR_13 = VAR_10->rwPosition;
 VAR_12 = VAR_10->partition->cache;


 VAR_15 = VAR_11->bytesPerSector - VAR_13.byte;
 if (VAR_15 > VAR_16) {
  VAR_15 = VAR_16;
 }

 if ((VAR_15 < VAR_11->bytesPerSector) && VAR_17)
 {
  FUNC_0 ( VAR_12, VAR_8, FUNC_2 (VAR_11, VAR_13.cluster) + VAR_13.sector,
   VAR_13.byte, VAR_15);

  VAR_16 -= VAR_15;
  VAR_8 += VAR_15;

  VAR_13.byte += VAR_15;
  if (VAR_13.byte >= VAR_11->bytesPerSector) {
   VAR_13.byte = 0;
   VAR_13.sector++;
  }
 }



 if (VAR_16 > (VAR_11->sectorsPerCluster - VAR_13.sector) * VAR_11->bytesPerSector) {
  VAR_15 = VAR_11->sectorsPerCluster - VAR_13.sector;
 } else {
  VAR_15 = VAR_16 / VAR_11->bytesPerSector;
 }

 if ((VAR_15 > 0) && VAR_17) {
  if (! FUNC_1 (VAR_12, FUNC_2 (VAR_11, VAR_13.cluster) + VAR_13.sector,
   VAR_15, VAR_8))
  {
   VAR_17 = 0;
   VAR_6->_errno = VAR_3;
  } else {
   VAR_8 += VAR_15 * VAR_11->bytesPerSector;
   VAR_16 -= VAR_15 * VAR_11->bytesPerSector;
   VAR_13.sector += VAR_15;
  }
 }



 if ((VAR_13.sector >= VAR_11->sectorsPerCluster) && VAR_17) {
  VAR_14 = FUNC_4(VAR_11, VAR_13.cluster);
  if ((VAR_16 == 0) && (VAR_14 == VAR_0)) {
   VAR_13.sector = VAR_11->sectorsPerCluster;
  } else if (!FUNC_3(VAR_11, VAR_14)) {
   VAR_6->_errno = VAR_3;
   VAR_17 = 0;
  } else {
   VAR_13.sector = 0;
   VAR_13.cluster = VAR_14;
  }
 }


 while ((VAR_16 >= VAR_11->bytesPerCluster) && VAR_17) {
  uint32_t VAR_18;
  uint32_t VAR_19 = VAR_13.cluster;
  size_t VAR_20 = 0;

  do {
   VAR_18 = VAR_19;
   VAR_19 = FUNC_4 (VAR_11, VAR_18);
   VAR_20 += VAR_11->bytesPerCluster;
  } while ((VAR_19 == VAR_18 + 1) &&



   (VAR_20 + VAR_11->bytesPerCluster <= VAR_16));

  if (!FUNC_1 (VAR_12, FUNC_2 (VAR_11, VAR_13.cluster),
    VAR_20 / VAR_11->bytesPerSector, VAR_8))
  {
   VAR_17 = 0;
   VAR_6->_errno = VAR_3;
   break;
  }
  VAR_8 += VAR_20;
  VAR_16 -= VAR_20;


  if ((VAR_16 == 0) && (VAR_19 == VAR_0)) {
   VAR_13.sector = VAR_11->sectorsPerCluster;
   VAR_13.cluster = VAR_18;
  } else if (!FUNC_3(VAR_11, VAR_19)) {
   VAR_6->_errno = VAR_3;
   VAR_17 = 0;
  } else {
   VAR_13.sector = 0;
   VAR_13.cluster = VAR_19;
  }
 }


 VAR_15 = VAR_16 / VAR_11->bytesPerSector;
 if ((VAR_15 > 0) && VAR_17) {
  if (!FUNC_1 (VAR_12, FUNC_2 (VAR_11, VAR_13.cluster),
   VAR_15, VAR_8))
  {
   VAR_17 = 0;
   VAR_6->_errno = VAR_3;
  } else {
   VAR_8 += VAR_15 * VAR_11->bytesPerSector;
   VAR_16 -= VAR_15 * VAR_11->bytesPerSector;
   VAR_13.sector += VAR_15;
  }
 }



 if ((VAR_16 > 0) && VAR_17) {
  FUNC_0 ( VAR_12, VAR_8,
   FUNC_2 (VAR_11, VAR_13.cluster) + VAR_13.sector, 0, VAR_16);
  VAR_13.byte += VAR_16;
  VAR_16 = 0;
 }


 VAR_9 = VAR_9 - VAR_16;


 VAR_10->rwPosition = VAR_13;
 VAR_10->currentPosition += VAR_9;

 FUNC_6(&VAR_11->lock);
 return VAR_9;
}
