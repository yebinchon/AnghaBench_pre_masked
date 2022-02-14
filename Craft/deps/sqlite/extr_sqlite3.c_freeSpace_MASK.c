
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {unsigned char* aData; int hdrOffset; int childPtrSize; int pDbPage; TYPE_1__* pBt; scalar_t__ nFree; } ;
struct TYPE_4__ {int usableSize; int btsFlags; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(MemPage *VAR_3, int VAR_4, int VAR_5){
  int VAR_6, VAR_7, VAR_8;
  int VAR_9;
  unsigned char *VAR_10 = VAR_3->aData;

  FUNC_0( VAR_3->pBt!=0 );
  FUNC_0( FUNC_5(VAR_3->pDbPage) );
  FUNC_0( VAR_4>=VAR_3->hdrOffset+6+VAR_3->childPtrSize );
  FUNC_0( (VAR_4 + VAR_5) <= (int)VAR_3->pBt->usableSize );
  FUNC_0( FUNC_6(VAR_3->pBt->mutex) );
  FUNC_0( VAR_5>=0 );

  if( VAR_3->pBt->btsFlags & VAR_0 ){


    FUNC_3(&VAR_10[VAR_4], 0, VAR_5);
  }
  VAR_8 = VAR_3->hdrOffset;
  VAR_6 = VAR_8 + 1;
  VAR_9 = VAR_3->pBt->usableSize - 4;
  FUNC_0( VAR_4<=VAR_9 );
  while( (VAR_7 = FUNC_1(&VAR_10[VAR_6]))<VAR_4 && VAR_7>0 ){
    if( VAR_7<VAR_6+4 ){
      return VAR_1;
    }
    VAR_6 = VAR_7;
  }
  if( VAR_7>VAR_9 ){
    return VAR_1;
  }
  FUNC_0( VAR_7>VAR_6 || VAR_7==0 );
  FUNC_4(&VAR_10[VAR_6], VAR_4);
  FUNC_4(&VAR_10[VAR_4], VAR_7);
  FUNC_4(&VAR_10[VAR_4+2], VAR_5);
  VAR_3->nFree = VAR_3->nFree + (u16)VAR_5;


  VAR_6 = VAR_8 + 1;
  while( (VAR_7 = FUNC_1(&VAR_10[VAR_6]))>0 ){
    int VAR_11, VAR_12, VAR_13;
    FUNC_0( VAR_7>VAR_6 );
    FUNC_0( VAR_7 <= (int)VAR_3->pBt->usableSize-4 );
    VAR_11 = FUNC_1(&VAR_10[VAR_7]);
    VAR_12 = FUNC_1(&VAR_10[VAR_7+2]);
    if( VAR_7 + VAR_12 + 3 >= VAR_11 && VAR_11>0 ){
      int VAR_14 = VAR_11 - (VAR_7+VAR_12);
      if( (VAR_14<0) || (VAR_14>(int)VAR_10[VAR_8+7]) ){
        return VAR_1;
      }
      VAR_10[VAR_8+7] -= (u8)VAR_14;
      VAR_13 = FUNC_1(&VAR_10[VAR_11]);
      FUNC_4(&VAR_10[VAR_7], VAR_13);
      VAR_13 = VAR_11 + FUNC_1(&VAR_10[VAR_11+2]) - VAR_7;
      FUNC_4(&VAR_10[VAR_7+2], VAR_13);
    }else{
      VAR_6 = VAR_7;
    }
  }


  if( VAR_10[VAR_8+1]==VAR_10[VAR_8+5] && VAR_10[VAR_8+2]==VAR_10[VAR_8+6] ){
    int VAR_15;
    VAR_7 = FUNC_1(&VAR_10[VAR_8+1]);
    FUNC_2(&VAR_10[VAR_8+1], &VAR_10[VAR_7], 2);
    VAR_15 = FUNC_1(&VAR_10[VAR_8+5]) + FUNC_1(&VAR_10[VAR_7+2]);
    FUNC_4(&VAR_10[VAR_8+5], VAR_15);
  }
  FUNC_0( FUNC_5(VAR_3->pDbPage) );
  return VAR_2;
}
