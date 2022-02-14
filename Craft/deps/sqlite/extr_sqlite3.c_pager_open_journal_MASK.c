
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_7__ {scalar_t__ eState; scalar_t__ pInJournal; int errCode; scalar_t__ journalMode; scalar_t__ journalHdr; scalar_t__ setMaster; scalar_t__ journalOff; scalar_t__ nRec; int jfd; int zJournal; scalar_t__ tempFile; int dbSize; int * pVfs; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int * const,int ,int ,int const,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int * const,int ,int ,int const,int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(Pager *VAR_11){
  int VAR_12 = VAR_5;
  sqlite3_vfs * const VAR_13 = VAR_11->pVfs;

  FUNC_1( VAR_11->eState==VAR_3 );
  FUNC_1( FUNC_2(VAR_11) );
  FUNC_1( VAR_11->pInJournal==0 );




  if( FUNC_0(VAR_11->errCode) ) return VAR_11->errCode;

  if( !FUNC_5(VAR_11) && VAR_11->journalMode!=VAR_1 ){
    VAR_11->pInJournal = FUNC_6(VAR_11->dbSize);
    if( VAR_11->pInJournal==0 ){
      return VAR_4;
    }


    if( !FUNC_3(VAR_11->jfd) ){
      if( VAR_11->journalMode==VAR_0 ){
        FUNC_9(VAR_11->jfd);
      }else{
        const int VAR_14 =
          VAR_9|VAR_6|
          (VAR_11->tempFile ?
            (VAR_7|VAR_10):
            (VAR_8)
          );





        VAR_12 = FUNC_10(VAR_13, VAR_11->zJournal, VAR_11->jfd, VAR_14, 0);

      }
      FUNC_1( VAR_12!=VAR_5 || FUNC_3(VAR_11->jfd) );
    }





    if( VAR_12==VAR_5 ){

      VAR_11->nRec = 0;
      VAR_11->journalOff = 0;
      VAR_11->setMaster = 0;
      VAR_11->journalHdr = 0;
      VAR_12 = FUNC_11(VAR_11);
    }
  }

  if( VAR_12!=VAR_5 ){
    FUNC_7(VAR_11->pInJournal);
    VAR_11->pInJournal = 0;
  }else{
    FUNC_1( VAR_11->eState==VAR_3 );
    VAR_11->eState = VAR_2;
  }

  return VAR_12;
}
