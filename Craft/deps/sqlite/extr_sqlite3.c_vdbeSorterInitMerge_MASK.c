
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int i64 ;
struct TYPE_8__ {int iEof; } ;
typedef TYPE_1__ VdbeSorterIter ;
struct TYPE_9__ {int nTree; int iWriteOff; int iReadOff; TYPE_1__* aIter; } ;
typedef TYPE_2__ VdbeSorter ;
struct TYPE_10__ {TYPE_2__* pSorter; } ;
typedef TYPE_3__ VdbeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__ const*,int) ;
 int FUNC_2 (int *,TYPE_2__*,int ,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_2,
  const VdbeCursor *VAR_3,
  i64 *VAR_4
){
  VdbeSorter *VAR_5 = VAR_3->pSorter;
  int VAR_6 = VAR_1;
  int VAR_7;
  i64 VAR_8 = 0;


  for(VAR_7=0; VAR_7<VAR_0; VAR_7++){
    VdbeSorterIter *VAR_9 = &VAR_5->aIter[VAR_7];
    VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_5->iReadOff, VAR_9, &VAR_8);
    VAR_5->iReadOff = VAR_9->iEof;
    FUNC_0( VAR_6!=VAR_1 || VAR_5->iReadOff<=VAR_5->iWriteOff );
    if( VAR_6!=VAR_1 || VAR_5->iReadOff>=VAR_5->iWriteOff ) break;
  }


  for(VAR_7=VAR_5->nTree-1; VAR_6==VAR_1 && VAR_7>0; VAR_7--){
    VAR_6 = FUNC_1(VAR_3, VAR_7);
  }

  *VAR_4 = VAR_8;
  return VAR_6;
}
