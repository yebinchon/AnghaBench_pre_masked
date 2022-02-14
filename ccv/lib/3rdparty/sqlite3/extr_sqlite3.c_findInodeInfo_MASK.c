
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct unixFileId {int nRef; struct unixFileId* pPrev; struct unixFileId* pNext; int fileId; scalar_t__ ino; int pId; int dev; } ;
typedef struct unixFileId unixInodeInfo ;
struct TYPE_4__ {int h; scalar_t__ lastErrno; int fsFlags; int pId; } ;
typedef TYPE_1__ unixFile ;
typedef scalar_t__ u64 ;
struct stat {scalar_t__ st_size; scalar_t__ st_ino; int st_dev; } ;
typedef int fileId ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 struct unixFileId* VAR_8 ;
 scalar_t__ FUNC_1 (struct unixFileId*,int *,int) ;
 int FUNC_2 (int *,struct unixFileId*,int) ;
 int FUNC_3 (struct unixFileId*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,char*,int) ;
 struct unixFileId* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(
  unixFile *VAR_10,
  unixInodeInfo **VAR_11
){
  int VAR_12;
  int VAR_13;
  struct unixFileId VAR_14;
  struct stat VAR_15;
  unixInodeInfo *VAR_16 = 0;

  FUNC_0( FUNC_8() );




  VAR_13 = VAR_10->h;
  VAR_12 = FUNC_4(VAR_13, &VAR_15);
  if( VAR_12!=0 ){
    FUNC_7(VAR_10, VAR_7);



    return VAR_3;
  }
  FUNC_3(&VAR_14, 0, sizeof(VAR_14));
  VAR_14.dev = VAR_15.st_dev;



  VAR_14.ino = (u64)VAR_15.st_ino;

  FUNC_0( VAR_8!=0 || VAR_9==0 );
  VAR_16 = VAR_8;
  while( VAR_16 && FUNC_1(&VAR_14, &VAR_16->fileId, sizeof(VAR_14)) ){
    VAR_16 = VAR_16->pNext;
  }
  if( VAR_16==0 ){
    VAR_16 = FUNC_6( sizeof(*VAR_16) );
    if( VAR_16==0 ){
      return VAR_5;
    }
    FUNC_3(VAR_16, 0, sizeof(*VAR_16));
    FUNC_2(&VAR_16->fileId, &VAR_14, sizeof(VAR_14));
    VAR_16->nRef = 1;
    VAR_16->pNext = VAR_8;
    VAR_16->pPrev = 0;
    if( VAR_8 ) VAR_8->pPrev = VAR_16;
    VAR_8 = VAR_16;
  }else{
    VAR_16->nRef++;
  }
  *VAR_11 = VAR_16;
  return VAR_6;
}
