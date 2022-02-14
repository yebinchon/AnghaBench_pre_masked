
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ eState; int changeCountDone; scalar_t__ dbSize; scalar_t__ dbFileSize; int dbFileVers; int * aStat; int pageSize; int fd; int tempFile; } ;
struct TYPE_11__ {int pData; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int,int,void const*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,void const*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,void const*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int,TYPE_1__**) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(Pager *VAR_6, int VAR_7){
  int VAR_8 = VAR_5;

  FUNC_3( VAR_6->eState==VAR_2
       || VAR_6->eState==VAR_3
  );
  FUNC_3( FUNC_4(VAR_6) );
  FUNC_3( VAR_7==0 );
  FUNC_2(VAR_7);




  if( !VAR_6->changeCountDone && FUNC_0(VAR_6->dbSize>0) ){
    PgHdr *VAR_9;

    FUNC_3( !VAR_6->tempFile && FUNC_5(VAR_6->fd) );


    VAR_8 = FUNC_9(VAR_6, 1, &VAR_9);
    FUNC_3( VAR_9==0 || VAR_8==VAR_5 );






    if( !0 && FUNC_0(VAR_8==VAR_5) ){
      VAR_8 = FUNC_11(VAR_9);
    }

    if( VAR_8==VAR_5 ){

      FUNC_7(VAR_9);


      if( 0 ){
        const void *VAR_10;
        FUNC_3( VAR_6->dbFileSize>0 );
        FUNC_1(VAR_6, VAR_9->pData, 1, 6, VAR_8=VAR_4, VAR_10);
        if( VAR_8==VAR_5 ){
          VAR_8 = FUNC_8(VAR_6->fd, VAR_10, VAR_6->pageSize, 0);
          VAR_6->aStat[VAR_1]++;
        }
        if( VAR_8==VAR_5 ){



          const void *VAR_11 = (const void *)&((const char *)VAR_10)[24];
          FUNC_6(&VAR_6->dbFileVers, VAR_11, sizeof(VAR_6->dbFileVers));
          VAR_6->changeCountDone = 1;
        }
      }else{
        VAR_6->changeCountDone = 1;
      }
    }


    FUNC_10(VAR_9);
  }
  return VAR_8;
}
