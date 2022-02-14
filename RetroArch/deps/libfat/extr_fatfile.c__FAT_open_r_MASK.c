
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
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
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

int FUNC_18 (struct _reent *VAR_26, void *VAR_27, const char *VAR_28, int VAR_29, int VAR_30) {
 PARTITION* VAR_31 = ((void*)0);
 bool VAR_32;
 DIR_ENTRY VAR_33;
 const char* VAR_34;
 uint32_t VAR_35;
 FILE_STRUCT* VAR_36 = (FILE_STRUCT*) VAR_27;
 VAR_31 = FUNC_10 (VAR_28);

 if (VAR_31 == ((void*)0))
   {
  VAR_26->_errno = VAR_12;
  return -1;
 }


 if (FUNC_13 (VAR_28, ':') != ((void*)0))
  VAR_28 = FUNC_13 (VAR_28, ':') + 1;

 if (FUNC_13 (VAR_28, ':') != ((void*)0))
   {
  VAR_26->_errno = VAR_10;
  return -1;
 }


 if ((VAR_29 & 0x03) == VAR_22)
   {

  VAR_36->read = 1;
  VAR_36->write = 0;
  VAR_36->append = 0;
 }
   else if ((VAR_29 & 0x03) == VAR_25)
   {

  VAR_36->read = 0;
  VAR_36->write = 1;
  VAR_36->append = 0;
 }
   else if ((VAR_29 & 0x03) == VAR_23)
   {

  VAR_36->read = 1;
  VAR_36->write = 1;
  VAR_36->append = 0;
 } else {
  VAR_26->_errno = VAR_7;
  return -1;
 }


 if (VAR_36->write && VAR_31->readOnly)
   {
  VAR_26->_errno = VAR_16;
  return -1;
 }


 FUNC_9(&VAR_31->lock);
 VAR_32 = FUNC_1 (VAR_31, &VAR_33, VAR_28, ((void*)0));


 if ((VAR_29 & VAR_19) && (VAR_29 & VAR_20) && VAR_32)
   {
  FUNC_11(&VAR_31->lock);
  VAR_26->_errno = VAR_8;
  return -1;
 }


 if (VAR_32 && FUNC_3(&VAR_33))
   {
  FUNC_11(&VAR_31->lock);
  VAR_26->_errno = VAR_11;
  return -1;
 }


 VAR_36->modified = 0;


 if (!VAR_32)
   {
  if (VAR_29 & VAR_19)
      {
   if (VAR_31->readOnly)
         {

    FUNC_11(&VAR_31->lock);
    VAR_26->_errno = VAR_16;
    return -1;
   }


   VAR_34 = FUNC_15 (VAR_28, VAR_6);
   if (VAR_34 == ((void*)0))
         {

    VAR_35 = VAR_31->cwdCluster;
    VAR_34 = VAR_28;
   }
         else
         {


    if (!FUNC_1 (VAR_31, &VAR_33, VAR_28, VAR_34) ||
     !FUNC_3(&VAR_33))
            {
     FUNC_11(&VAR_31->lock);
     VAR_26->_errno = VAR_15;
     return -1;
    }
    VAR_35 = FUNC_2 (VAR_31, VAR_33.entryData);

    VAR_34 += 1;
   }

   FUNC_14 (VAR_33.filename, VAR_34, VAR_17 - 1);
   FUNC_12 (VAR_33.entryData, 0, VAR_1);


   VAR_33.entryData[VAR_4] = 0;
   FUNC_16 (VAR_33.entryData, VAR_3, FUNC_8());
   FUNC_16 (VAR_33.entryData, VAR_2, FUNC_7());

   if (!FUNC_0 (VAR_31, &VAR_33, VAR_35))
         {
    FUNC_11(&VAR_31->lock);
    VAR_26->_errno = VAR_14;
    return -1;
   }


   VAR_36->modified = 1;
  }
      else
      {

   FUNC_11(&VAR_31->lock);
   VAR_26->_errno = VAR_13;
   return -1;
  }
 }

 VAR_36->filesize = FUNC_17 (VAR_33.entryData, VAR_5);
 if (VAR_36->write && !FUNC_4(&VAR_33)) {
  FUNC_11(&VAR_31->lock);
  VAR_26->_errno = VAR_16;
  return -1;
 }


 VAR_36->partition = VAR_31;

 VAR_36->startCluster = FUNC_2 (VAR_31, VAR_33.entryData);


 if ((VAR_29 & VAR_24) && VAR_36->write && (VAR_36->startCluster != 0)) {
  FUNC_5 (VAR_31, VAR_36->startCluster);
  VAR_36->startCluster = VAR_0;
  VAR_36->filesize = 0;

  VAR_36->modified = 1;
 }


 VAR_36->dirEntryStart = VAR_33.dataStart;
 VAR_36->dirEntryEnd = VAR_33.dataEnd;


 VAR_36->currentPosition = 0;
 VAR_36->rwPosition.cluster = VAR_36->startCluster;
 VAR_36->rwPosition.sector = 0;
 VAR_36->rwPosition.byte = 0;

 if (VAR_29 & VAR_18)
   {
  VAR_36->append = 1;


  VAR_36->appendPosition.cluster = FUNC_6 (VAR_31, VAR_36->startCluster);
  VAR_36->appendPosition.sector = (VAR_36->filesize % VAR_31->bytesPerCluster) / VAR_31->bytesPerSector;
  VAR_36->appendPosition.byte = VAR_36->filesize % VAR_31->bytesPerSector;


  if ( (VAR_36->filesize > 0) && ((VAR_36->filesize % VAR_31->bytesPerCluster)==0) ){

   VAR_36->appendPosition.sector = VAR_31->sectorsPerCluster;
   VAR_36->appendPosition.byte = 0;
  }
 } else {
  VAR_36->append = 0;

  VAR_36->appendPosition = VAR_36->rwPosition;
 }

 VAR_36->inUse = 1;


 VAR_31->openFileCount += 1;
 if (VAR_31->firstOpenFile) {
  VAR_36->nextOpenFile = VAR_31->firstOpenFile;
  VAR_31->firstOpenFile->prevOpenFile = VAR_36;
 } else {
  VAR_36->nextOpenFile = ((void*)0);
 }
 VAR_36->prevOpenFile = ((void*)0);
 VAR_31->firstOpenFile = VAR_36;

 FUNC_11(&VAR_31->lock);

 return (int) VAR_36;
}
