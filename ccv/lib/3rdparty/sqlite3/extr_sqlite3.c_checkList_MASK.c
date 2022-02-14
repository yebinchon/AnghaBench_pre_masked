
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pBt; int pPager; scalar_t__ mxErr; } ;
struct TYPE_7__ {scalar_t__ autoVacuum; scalar_t__ usableSize; } ;
typedef int Pgno ;
typedef TYPE_2__ IntegrityCk ;
typedef int DbPage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (TYPE_2__*,int,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int ,int,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  IntegrityCk *VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5
){
  int VAR_6;
  int VAR_7 = VAR_5;
  int VAR_8 = VAR_4;
  while( VAR_5-- > 0 && VAR_2->mxErr ){
    DbPage *VAR_9;
    unsigned char *VAR_10;
    if( VAR_4<1 ){
      FUNC_0(VAR_2,
         "%d of %d pages missing from overflow list starting at %d",
          VAR_5+1, VAR_7, VAR_8);
      break;
    }
    if( FUNC_2(VAR_2, VAR_4) ) break;
    if( FUNC_4(VAR_2->pPager, (Pgno)VAR_4, &VAR_9, 0) ){
      FUNC_0(VAR_2, "failed to get page %d", VAR_4);
      break;
    }
    VAR_10 = (unsigned char *)FUNC_5(VAR_9);
    if( VAR_3 ){
      int VAR_11 = FUNC_3(&VAR_10[4]);

      if( VAR_2->pBt->autoVacuum ){
        FUNC_1(VAR_2, VAR_4, VAR_0, 0);
      }

      if( VAR_11>(int)VAR_2->pBt->usableSize/4-2 ){
        FUNC_0(VAR_2,
           "freelist leaf count too big on page %d", VAR_4);
        VAR_5--;
      }else{
        for(VAR_6=0; VAR_6<VAR_11; VAR_6++){
          Pgno VAR_12 = FUNC_3(&VAR_10[8+VAR_6*4]);

          if( VAR_2->pBt->autoVacuum ){
            FUNC_1(VAR_2, VAR_12, VAR_0, 0);
          }

          FUNC_2(VAR_2, VAR_12);
        }
        VAR_5 -= VAR_11;
      }
    }

    else{




      if( VAR_2->pBt->autoVacuum && VAR_5>0 ){
        VAR_6 = FUNC_3(VAR_10);
        FUNC_1(VAR_2, VAR_6, VAR_1, VAR_4);
      }
    }

    VAR_4 = FUNC_3(VAR_10);
    FUNC_6(VAR_9);

    if( VAR_3 && VAR_5<(VAR_4!=0) ){
      FUNC_0(VAR_2, "free-page count in header is too small");
    }
  }
}
