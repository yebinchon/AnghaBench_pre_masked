
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nRef; scalar_t__ h; int zFilename; int mutex; TYPE_3__* pFirst; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixShmNode ;
struct TYPE_9__ {struct TYPE_9__* pNext; TYPE_2__* pShmNode; } ;
typedef TYPE_3__ unixShm ;
struct TYPE_10__ {TYPE_3__* pShm; TYPE_1__* pInode; } ;
typedef TYPE_4__ unixFile ;
typedef int sqlite3_file ;
struct TYPE_7__ {TYPE_2__* pShmNode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_file *VAR_1,
  int VAR_2
){
  unixShm *VAR_3;
  unixShmNode *VAR_4;
  unixShm **VAR_5;
  unixFile *VAR_6;

  VAR_6 = (unixFile*)VAR_1;
  VAR_3 = VAR_6->pShm;
  if( VAR_3==0 ) return VAR_0;
  VAR_4 = VAR_3->pShmNode;

  FUNC_0( VAR_4==VAR_6->pInode->pShmNode );
  FUNC_0( VAR_4->pInode==VAR_6->pInode );



  FUNC_3(VAR_4->mutex);
  for(VAR_5=&VAR_4->pFirst; (*VAR_5)!=VAR_3; VAR_5 = &(*VAR_5)->pNext){}
  *VAR_5 = VAR_3->pNext;


  FUNC_2(VAR_3);
  VAR_6->pShm = 0;
  FUNC_4(VAR_4->mutex);



  FUNC_5();
  FUNC_0( VAR_4->nRef>0 );
  VAR_4->nRef--;
  if( VAR_4->nRef==0 ){
    if( VAR_2 && VAR_4->h>=0 ) FUNC_1(VAR_4->zFilename);
    FUNC_7(VAR_6);
  }
  FUNC_6();

  return VAR_0;
}
