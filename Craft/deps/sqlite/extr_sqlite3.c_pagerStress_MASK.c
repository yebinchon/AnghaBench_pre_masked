
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int errCode; scalar_t__ eState; scalar_t__ dbSize; scalar_t__ doNotSyncSpill; scalar_t__ doNotSpill; } ;
struct TYPE_15__ {int flags; scalar_t__ pgno; scalar_t__ pDirty; TYPE_2__* pPager; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_12(void *VAR_4, PgHdr *VAR_5){
  Pager *VAR_6 = (Pager *)VAR_4;
  int VAR_7 = VAR_3;

  FUNC_3( VAR_5->pPager==VAR_6 );
  FUNC_3( VAR_5->flags&VAR_1 );
  if( FUNC_0(VAR_6->errCode) ) return VAR_3;
  if( VAR_6->doNotSpill ) return VAR_3;
  if( VAR_6->doNotSyncSpill && (VAR_5->flags & VAR_2)!=0 ){
    return VAR_3;
  }

  VAR_5->pDirty = 0;
  if( FUNC_4(VAR_6) ){

    if( FUNC_9(VAR_5) ){
      VAR_7 = FUNC_10(VAR_5);
    }
    if( VAR_7==VAR_3 ){
      VAR_7 = FUNC_5(VAR_6, VAR_5, 0, 0);
    }
  }else{


    if( VAR_5->flags&VAR_2
     || VAR_6->eState==VAR_0
    ){
      VAR_7 = FUNC_11(VAR_6, 1);
    }
    if( FUNC_0(
        VAR_7==VAR_3 && VAR_5->pgno>VAR_6->dbSize && FUNC_9(VAR_5)
    ) ){
      VAR_7 = FUNC_10(VAR_5);
    }


    if( VAR_7==VAR_3 ){
      FUNC_3( (VAR_5->flags&VAR_2)==0 );
      VAR_7 = FUNC_7(VAR_6, VAR_5);
    }
  }


  if( VAR_7==VAR_3 ){
    FUNC_2(("STRESS %d page %d\n", FUNC_1(VAR_6), VAR_5->pgno));
    FUNC_8(VAR_5);
  }

  return FUNC_6(VAR_6, VAR_7);
}
