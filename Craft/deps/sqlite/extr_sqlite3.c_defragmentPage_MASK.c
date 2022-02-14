
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_6__ {scalar_t__ nOverflow; unsigned char* aData; int hdrOffset; int cellOffset; int nCell; int nFree; int pDbPage; TYPE_1__* pBt; } ;
struct TYPE_5__ {int usableSize; int pPager; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (int ) ;
 unsigned char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(MemPage *VAR_3){
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  unsigned char *VAR_12;
  unsigned char *VAR_13;
  int VAR_14;
  int VAR_15;


  FUNC_0( FUNC_6(VAR_3->pDbPage) );
  FUNC_0( VAR_3->pBt!=0 );
  FUNC_0( VAR_3->pBt->usableSize <= VAR_1 );
  FUNC_0( VAR_3->nOverflow==0 );
  FUNC_0( FUNC_8(VAR_3->pBt->mutex) );
  VAR_13 = FUNC_7(VAR_3->pBt->pPager);
  VAR_12 = VAR_3->aData;
  VAR_6 = VAR_3->hdrOffset;
  VAR_9 = VAR_3->cellOffset;
  VAR_11 = VAR_3->nCell;
  FUNC_0( VAR_11==FUNC_2(&VAR_12[VAR_6+3]) );
  VAR_8 = VAR_3->pBt->usableSize;
  VAR_10 = FUNC_2(&VAR_12[VAR_6+5]);
  FUNC_3(&VAR_13[VAR_10], &VAR_12[VAR_10], VAR_8 - VAR_10);
  VAR_10 = VAR_8;
  VAR_14 = VAR_9 + 2*VAR_11;
  VAR_15 = VAR_8 - 4;
  for(VAR_4=0; VAR_4<VAR_11; VAR_4++){
    u8 *VAR_16;
    VAR_16 = &VAR_12[VAR_9 + VAR_4*2];
    VAR_5 = FUNC_2(VAR_16);
    FUNC_9( VAR_5==VAR_14 );
    FUNC_9( VAR_5==VAR_15 );




    if( VAR_5<VAR_14 || VAR_5>VAR_15 ){
      return VAR_0;
    }

    FUNC_0( VAR_5>=VAR_14 && VAR_5<=VAR_15 );
    VAR_7 = FUNC_1(VAR_3, &VAR_13[VAR_5]);
    VAR_10 -= VAR_7;





    if( VAR_10<VAR_14 || VAR_5+VAR_7>VAR_8 ){
      return VAR_0;
    }

    FUNC_0( VAR_10+VAR_7<=VAR_8 && VAR_10>=VAR_14 );
    FUNC_9( VAR_10+VAR_7==VAR_8 );
    FUNC_9( VAR_5+VAR_7==VAR_8 );
    FUNC_3(&VAR_12[VAR_10], &VAR_13[VAR_5], VAR_7);
    FUNC_5(VAR_16, VAR_10);
  }
  FUNC_0( VAR_10>=VAR_14 );
  FUNC_5(&VAR_12[VAR_6+5], VAR_10);
  VAR_12[VAR_6+1] = 0;
  VAR_12[VAR_6+2] = 0;
  VAR_12[VAR_6+7] = 0;
  FUNC_4(&VAR_12[VAR_14], 0, VAR_10-VAR_14);
  FUNC_0( FUNC_6(VAR_3->pDbPage) );
  if( VAR_10-VAR_14!=VAR_3->nFree ){
    return VAR_0;
  }
  return VAR_2;
}
