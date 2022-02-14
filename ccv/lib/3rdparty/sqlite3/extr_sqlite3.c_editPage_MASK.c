
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_16__ {int (* xCellSize ) (TYPE_4__*,int *) ;} ;
struct TYPE_15__ {int * szCell; int ** apCell; TYPE_4__* pRef; } ;
struct TYPE_14__ {int hdrOffset; int nCell; int nOverflow; int* aiOvfl; TYPE_1__* pBt; int * aCellIdx; int * aData; } ;
struct TYPE_13__ {size_t usableSize; int pPager; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellArray ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int * const,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int * const,size_t) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_2__*,int,int,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *,int **,int *,int,int,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_2__*,int,int **,int *) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_15(
  MemPage *VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5,
  CellArray *VAR_6
){
  u8 * const VAR_7 = VAR_2->aData;
  const int VAR_8 = VAR_2->hdrOffset;
  u8 *VAR_9 = &VAR_2->aCellIdx[VAR_5 * 2];
  int VAR_10 = VAR_2->nCell;
  u8 *VAR_11;
  u8 *VAR_12;
  int VAR_13;
  int VAR_14 = VAR_3 + VAR_2->nCell + VAR_2->nOverflow;
  int VAR_15 = VAR_4 + VAR_5;







  if( VAR_3<VAR_4 ){
    int VAR_16 = FUNC_8(VAR_2, VAR_3, VAR_4-VAR_3, VAR_6);
    FUNC_7(VAR_2->aCellIdx, &VAR_2->aCellIdx[VAR_16*2], VAR_10*2);
    VAR_10 -= VAR_16;
  }
  if( VAR_15 < VAR_14 ){
    VAR_10 -= FUNC_8(VAR_2, VAR_15, VAR_14 - VAR_15, VAR_6);
  }

  VAR_11 = &VAR_7[FUNC_4(&VAR_7[VAR_8+5])];
  if( VAR_11<VAR_9 ) goto editpage_fail;


  if( VAR_4<VAR_3 ){
    int VAR_17 = FUNC_0(VAR_5,VAR_3-VAR_4);
    FUNC_2( (VAR_3-VAR_4)<VAR_5 || VAR_10==0 || VAR_0 );
    VAR_12 = VAR_2->aCellIdx;
    FUNC_7(&VAR_12[VAR_17*2], VAR_12, VAR_10*2);
    if( FUNC_9(
          VAR_2, VAR_9, &VAR_11, VAR_12,
          VAR_4, VAR_17, VAR_6
    ) ) goto editpage_fail;
    VAR_10 += VAR_17;
  }


  for(VAR_13=0; VAR_13<VAR_2->nOverflow; VAR_13++){
    int VAR_18 = (VAR_3 + VAR_2->aiOvfl[VAR_13]) - VAR_4;
    if( VAR_18>=0 && VAR_18<VAR_5 ){
      VAR_12 = &VAR_2->aCellIdx[VAR_18 * 2];
      FUNC_7(&VAR_12[2], VAR_12, (VAR_10 - VAR_18) * 2);
      VAR_10++;
      if( FUNC_9(
            VAR_2, VAR_9, &VAR_11, VAR_12,
            VAR_18+VAR_4, 1, VAR_6
      ) ) goto editpage_fail;
    }
  }


  VAR_12 = &VAR_2->aCellIdx[VAR_10*2];
  if( FUNC_9(
        VAR_2, VAR_9, &VAR_11, VAR_12,
        VAR_4+VAR_10, VAR_5-VAR_10, VAR_6
  ) ) goto editpage_fail;

  VAR_2->nCell = VAR_5;
  VAR_2->nOverflow = 0;

  FUNC_11(&VAR_7[VAR_8+3], VAR_2->nCell);
  FUNC_11(&VAR_7[VAR_8+5], VAR_11 - VAR_7);
  return VAR_1;
 editpage_fail:

  FUNC_10(VAR_6, VAR_4, VAR_5);
  return FUNC_12(VAR_2, VAR_5, &VAR_6->apCell[VAR_4], &VAR_6->szCell[VAR_4]);
}
