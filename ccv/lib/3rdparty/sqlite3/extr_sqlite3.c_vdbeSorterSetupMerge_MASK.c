
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_22__ {int nTask; scalar_t__ bUseThreads; TYPE_5__* pMerger; TYPE_3__* aTask; TYPE_4__* pReader; } ;
typedef TYPE_2__ VdbeSorter ;
struct TYPE_26__ {scalar_t__ bUseThread; TYPE_3__* pTask; } ;
struct TYPE_25__ {TYPE_4__* aReadr; } ;
struct TYPE_24__ {TYPE_6__* pIncr; } ;
struct TYPE_23__ {int xCompare; TYPE_1__* pSorter; } ;
struct TYPE_21__ {int * db; } ;
typedef int SorterCompare ;
typedef TYPE_3__ SortSubtask ;
typedef TYPE_4__ PmaReader ;
typedef TYPE_5__ MergeEngine ;
typedef TYPE_6__ IncrMerger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,TYPE_6__**) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_5__**) ;

__attribute__((used)) static int FUNC_11(VdbeSorter *VAR_5){
  int VAR_6;
  SortSubtask *VAR_7 = &VAR_5->aTask[0];
  MergeEngine *VAR_8 = 0;
  VAR_6 = FUNC_10(VAR_5, &VAR_8);
  if( VAR_6==VAR_4 ){
    {
      VAR_6 = FUNC_5(VAR_7, VAR_8, VAR_0);
      VAR_5->pMerger = VAR_8;
      VAR_8 = 0;
    }
  }

  if( VAR_6!=VAR_4 ){
    FUNC_4(VAR_8);
  }
  return VAR_6;
}
