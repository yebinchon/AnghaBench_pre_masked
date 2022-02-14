
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ eState; scalar_t__ eLock; scalar_t__ pInJournal; scalar_t__ journalMode; scalar_t__ journalOff; scalar_t__ dbSize; scalar_t__ dbFileSize; scalar_t__ setMaster; scalar_t__ changeCountDone; int pWal; scalar_t__ exclusiveMode; int pPCache; scalar_t__ nRec; int zJournal; int pVfs; int jfd; int tempFile; } ;
struct TYPE_13__ {scalar_t__ pageHash; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_22(Pager *VAR_13, int VAR_14, int VAR_15){
  int VAR_16 = VAR_11;
  int VAR_17 = VAR_11;
  FUNC_0( FUNC_1(VAR_13) );
  FUNC_0( VAR_13->eState!=VAR_1 );
  if( VAR_13->eState<VAR_8 && VAR_13->eLock<VAR_9 ){
    return VAR_11;
  }

  FUNC_7(VAR_13);
  FUNC_0( FUNC_2(VAR_13->jfd) || VAR_13->pInJournal==0 );
  if( FUNC_2(VAR_13->jfd) ){
    FUNC_0( !FUNC_4(VAR_13) );


    if( FUNC_9(VAR_13->jfd) ){
      FUNC_0( VAR_13->journalMode==VAR_3 );
      FUNC_11(VAR_13->jfd);
    }else if( VAR_13->journalMode==VAR_5 ){
      if( VAR_13->journalOff==0 ){
        VAR_16 = VAR_11;
      }else{
        VAR_16 = FUNC_13(VAR_13->jfd, 0);
      }
      VAR_13->journalOff = 0;
    }else if( VAR_13->journalMode==VAR_4
      || (VAR_13->exclusiveMode && VAR_13->journalMode!=VAR_6)
    ){
      VAR_16 = FUNC_21(VAR_13, VAR_14);
      VAR_13->journalOff = 0;
    }else{





      int VAR_18 = (!VAR_13->tempFile && FUNC_10(VAR_13->jfd));
      FUNC_0( VAR_13->journalMode==VAR_2
           || VAR_13->journalMode==VAR_3
           || VAR_13->journalMode==VAR_6
      );
      FUNC_11(VAR_13->jfd);
      if( VAR_18 ){
        VAR_16 = FUNC_12(VAR_13->pVfs, VAR_13->zJournal, 0);
      }
    }
  }
  FUNC_8(VAR_13->pInJournal);
  VAR_13->pInJournal = 0;
  VAR_13->nRec = 0;
  FUNC_15(VAR_13->pPCache);
  FUNC_18(VAR_13->pPCache, VAR_13->dbSize);

  if( FUNC_4(VAR_13) ){




    VAR_17 = FUNC_19(VAR_13->pWal);
    FUNC_0( VAR_17==VAR_11 );
  }else if( VAR_16==VAR_11 && VAR_15 && VAR_13->dbFileSize>VAR_13->dbSize ){






    FUNC_0( VAR_13->eLock==VAR_0 );
    VAR_16 = FUNC_6(VAR_13, VAR_13->dbSize);
  }

  if( !VAR_13->exclusiveMode
   && (!FUNC_4(VAR_13) || FUNC_20(VAR_13->pWal, 0))
  ){
    VAR_17 = FUNC_3(VAR_13, VAR_10);
    VAR_13->changeCountDone = 0;
  }
  VAR_13->eState = VAR_7;
  VAR_13->setMaster = 0;

  return (VAR_16==VAR_11?VAR_17:VAR_16);
}
