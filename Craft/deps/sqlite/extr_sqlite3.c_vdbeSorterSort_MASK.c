
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pRecord; } ;
typedef TYPE_1__ VdbeSorter ;
struct TYPE_11__ {TYPE_1__* pSorter; } ;
typedef TYPE_2__ VdbeCursor ;
struct TYPE_12__ {struct TYPE_12__* pNext; } ;
typedef TYPE_3__ SorterRecord ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_3__*,TYPE_3__*,TYPE_3__**) ;

__attribute__((used)) static int FUNC_3(const VdbeCursor *VAR_2){
  int VAR_3;
  SorterRecord **VAR_4;
  SorterRecord *VAR_5;
  VdbeSorter *VAR_6 = VAR_2->pSorter;

  VAR_4 = (SorterRecord **)FUNC_0(64 * sizeof(SorterRecord *));
  if( !VAR_4 ){
    return VAR_0;
  }

  VAR_5 = VAR_6->pRecord;
  while( VAR_5 ){
    SorterRecord *VAR_7 = VAR_5->pNext;
    VAR_5->pNext = 0;
    for(VAR_3=0; VAR_4[VAR_3]; VAR_3++){
      FUNC_2(VAR_2, VAR_5, VAR_4[VAR_3], &VAR_5);
      VAR_4[VAR_3] = 0;
    }
    VAR_4[VAR_3] = VAR_5;
    VAR_5 = VAR_7;
  }

  VAR_5 = 0;
  for(VAR_3=0; VAR_3<64; VAR_3++){
    FUNC_2(VAR_2, VAR_5, VAR_4[VAR_3], &VAR_5);
  }
  VAR_6->pRecord = VAR_5;

  FUNC_1(VAR_4);
  return VAR_1;
}
