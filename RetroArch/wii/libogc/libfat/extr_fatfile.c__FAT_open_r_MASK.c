
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* uint32_t ;
struct _reent {void* _errno; } ;
struct TYPE_18__ {int dataEnd; int dataStart; scalar_t__* entryData; int filename; } ;
struct TYPE_15__ {scalar_t__ cluster; int sector; int byte; } ;
struct TYPE_17__ {int read; int write; int append; int modified; int filesize; scalar_t__ startCluster; int inUse; struct TYPE_17__* prevOpenFile; struct TYPE_17__* nextOpenFile; TYPE_1__ rwPosition; TYPE_1__ appendPosition; scalar_t__ currentPosition; int dirEntryEnd; int dirEntryStart; TYPE_2__* partition; } ;
struct TYPE_16__ {int bytesPerCluster; int bytesPerSector; int sectorsPerCluster; int openFileCount; int lock; TYPE_3__* firstOpenFile; void* cwdCluster; scalar_t__ readOnly; } ;
typedef TYPE_2__ PARTITION ;
typedef TYPE_3__ FILE_STRUCT ;
typedef TYPE_4__ DIR_ENTRY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*,void*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,char const*,char const*) ;
 void* FUNC_2 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (char const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int ,int ) ;
 char* FUNC_13 (char const*,char) ;
 int FUNC_14 (int ,char const*,scalar_t__) ;
 char* FUNC_15 (char const*,int ) ;
 int FUNC_16 (scalar_t__*,int ,int ) ;
 int FUNC_17 (scalar_t__*,int ) ;

int FUNC_18 (struct _reent *VAR_24, void *VAR_25, const char *VAR_26, int VAR_27, int VAR_28) {
 PARTITION* VAR_29 = ((void*)0);
 bool VAR_30;
 DIR_ENTRY VAR_31;
 const char* VAR_32;
 uint32_t VAR_33;
 FILE_STRUCT* VAR_34 = (FILE_STRUCT*) VAR_25;
 VAR_29 = FUNC_10 (VAR_26);

 if (VAR_29 == ((void*)0)) {
  VAR_24->_errno = VAR_11;
  return -1;
 }


 if (FUNC_13 (VAR_26, ':') != ((void*)0)) {
  VAR_26 = FUNC_13 (VAR_26, ':') + 1;
 }
 if (FUNC_13 (VAR_26, ':') != ((void*)0)) {
  VAR_24->_errno = VAR_9;
  return -1;
 }


 if ((VAR_27 & 0x03) == VAR_20) {

  VAR_34->read = 1;
  VAR_34->write = 0;
  VAR_34->append = 0;
 } else if ((VAR_27 & 0x03) == VAR_23) {

  VAR_34->read = 0;
  VAR_34->write = 1;
  VAR_34->append = 0;
 } else if ((VAR_27 & 0x03) == VAR_21) {

  VAR_34->read = 1;
  VAR_34->write = 1;
  VAR_34->append = 0;
 } else {
  VAR_24->_errno = VAR_7;
  return -1;
 }


 if (VAR_34->write && VAR_29->readOnly) {
  VAR_24->_errno = VAR_15;
  return -1;
 }


 FUNC_9(&VAR_29->lock);
 VAR_30 = FUNC_1 (VAR_29, &VAR_31, VAR_26, ((void*)0));


 if ((VAR_27 & VAR_18) && (VAR_27 & VAR_19) && VAR_30) {
  FUNC_11(&VAR_29->lock);
  VAR_24->_errno = VAR_8;
  return -1;
 }


 if (VAR_30 && FUNC_3(&VAR_31)) {
  FUNC_11(&VAR_29->lock);
  VAR_24->_errno = VAR_10;
  return -1;
 }


 VAR_34->modified = 0;


 if (!VAR_30) {
  if (VAR_27 & VAR_18) {
   if (VAR_29->readOnly) {

    FUNC_11(&VAR_29->lock);
    VAR_24->_errno = VAR_15;
    return -1;
   }


   VAR_32 = FUNC_15 (VAR_26, VAR_6);
   if (VAR_32 == ((void*)0)) {

    VAR_33 = VAR_29->cwdCluster;
    VAR_32 = VAR_26;
   } else {


    if (!FUNC_1 (VAR_29, &VAR_31, VAR_26, VAR_32) ||
     !FUNC_3(&VAR_31)) {
     FUNC_11(&VAR_29->lock);
     VAR_24->_errno = VAR_14;
     return -1;
    }
    VAR_33 = FUNC_2 (VAR_29, VAR_31.entryData);

    VAR_32 += 1;
   }

   FUNC_14 (VAR_31.filename, VAR_32, VAR_16 - 1);
   FUNC_12 (VAR_31.entryData, 0, VAR_1);


   VAR_31.entryData[VAR_4] = 0;
   FUNC_16 (VAR_31.entryData, VAR_3, FUNC_8());
   FUNC_16 (VAR_31.entryData, VAR_2, FUNC_7());

   if (!FUNC_0 (VAR_29, &VAR_31, VAR_33)) {
    FUNC_11(&VAR_29->lock);
    VAR_24->_errno = VAR_13;
    return -1;
   }


   VAR_34->modified = 1;
  } else {

   FUNC_11(&VAR_29->lock);
   VAR_24->_errno = VAR_12;
   return -1;
  }
 }

 VAR_34->filesize = FUNC_17 (VAR_31.entryData, VAR_5);
 if (VAR_34->write && !FUNC_4(&VAR_31)) {
  FUNC_11(&VAR_29->lock);
  VAR_24->_errno = VAR_15;
  return -1;
 }


 VAR_34->partition = VAR_29;

 VAR_34->startCluster = FUNC_2 (VAR_29, VAR_31.entryData);


 if ((VAR_27 & VAR_22) && VAR_34->write && (VAR_34->startCluster != 0)) {
  FUNC_5 (VAR_29, VAR_34->startCluster);
  VAR_34->startCluster = VAR_0;
  VAR_34->filesize = 0;

  VAR_34->modified = 1;
 }


 VAR_34->dirEntryStart = VAR_31.dataStart;
 VAR_34->dirEntryEnd = VAR_31.dataEnd;


 VAR_34->currentPosition = 0;
 VAR_34->rwPosition.cluster = VAR_34->startCluster;
 VAR_34->rwPosition.sector = 0;
 VAR_34->rwPosition.byte = 0;

 if (VAR_27 & VAR_17) {
  VAR_34->append = 1;


  VAR_34->appendPosition.cluster = FUNC_6 (VAR_29, VAR_34->startCluster);
  VAR_34->appendPosition.sector = (VAR_34->filesize % VAR_29->bytesPerCluster) / VAR_29->bytesPerSector;
  VAR_34->appendPosition.byte = VAR_34->filesize % VAR_29->bytesPerSector;


  if ( (VAR_34->filesize > 0) && ((VAR_34->filesize % VAR_29->bytesPerCluster)==0) ){

   VAR_34->appendPosition.sector = VAR_29->sectorsPerCluster;
   VAR_34->appendPosition.byte = 0;
  }
 } else {
  VAR_34->append = 0;

  VAR_34->appendPosition = VAR_34->rwPosition;
 }

 VAR_34->inUse = 1;


 VAR_29->openFileCount += 1;
 if (VAR_29->firstOpenFile) {
  VAR_34->nextOpenFile = VAR_29->firstOpenFile;
  VAR_29->firstOpenFile->prevOpenFile = VAR_34;
 } else {
  VAR_34->nextOpenFile = ((void*)0);
 }
 VAR_34->prevOpenFile = ((void*)0);
 VAR_29->firstOpenFile = VAR_34;

 FUNC_11(&VAR_29->lock);

 return (int) VAR_34;
}
