
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
 int FUNC_0 (TYPE_2__*,char*,char*,int,...) ;
 int FUNC_1 (TYPE_2__*,int,int ,int,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,char*) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int ,int,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  IntegrityCk *VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5,
  char *VAR_6
){
  int VAR_7;
  int VAR_8 = VAR_5;
  int VAR_9 = VAR_4;
  while( VAR_5-- > 0 && VAR_2->mxErr ){
    DbPage *VAR_10;
    unsigned char *VAR_11;
    if( VAR_4<1 ){
      FUNC_0(VAR_2, VAR_6,
         "%d of %d pages missing from overflow list starting at %d",
          VAR_5+1, VAR_8, VAR_9);
      break;
    }
    if( FUNC_2(VAR_2, VAR_4, VAR_6) ) break;
    if( FUNC_4(VAR_2->pPager, (Pgno)VAR_4, &VAR_10) ){
      FUNC_0(VAR_2, VAR_6, "failed to get page %d", VAR_4);
      break;
    }
    VAR_11 = (unsigned char *)FUNC_5(VAR_10);
    if( VAR_3 ){
      int VAR_12 = FUNC_3(&VAR_11[4]);

      if( VAR_2->pBt->autoVacuum ){
        FUNC_1(VAR_2, VAR_4, VAR_0, 0, VAR_6);
      }

      if( VAR_12>(int)VAR_2->pBt->usableSize/4-2 ){
        FUNC_0(VAR_2, VAR_6,
           "freelist leaf count too big on page %d", VAR_4);
        VAR_5--;
      }else{
        for(VAR_7=0; VAR_7<VAR_12; VAR_7++){
          Pgno VAR_13 = FUNC_3(&VAR_11[8+VAR_7*4]);

          if( VAR_2->pBt->autoVacuum ){
            FUNC_1(VAR_2, VAR_13, VAR_0, 0, VAR_6);
          }

          FUNC_2(VAR_2, VAR_13, VAR_6);
        }
        VAR_5 -= VAR_12;
      }
    }

    else{




      if( VAR_2->pBt->autoVacuum && VAR_5>0 ){
        VAR_7 = FUNC_3(VAR_11);
        FUNC_1(VAR_2, VAR_7, VAR_1, VAR_4, VAR_6);
      }
    }

    VAR_4 = FUNC_3(VAR_11);
    FUNC_6(VAR_10);
  }
}
