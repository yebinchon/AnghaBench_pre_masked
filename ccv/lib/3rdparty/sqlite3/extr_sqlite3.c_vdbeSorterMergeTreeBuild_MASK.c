
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_17__ {int nTask; TYPE_3__* aTask; scalar_t__ bUseThreads; } ;
typedef TYPE_2__ VdbeSorter ;
struct TYPE_19__ {TYPE_1__* aReadr; } ;
struct TYPE_18__ {scalar_t__ nPMA; } ;
struct TYPE_16__ {int pIncr; } ;
typedef TYPE_3__ SortSubtask ;
typedef TYPE_4__ MergeEngine ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int,int *,TYPE_4__**) ;
 TYPE_4__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int,int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(
  VdbeSorter *VAR_4,
  MergeEngine **VAR_5
){
  MergeEngine *VAR_6 = 0;
  int VAR_7 = VAR_3;
  int VAR_8;
  for(VAR_8=0; VAR_7==VAR_3 && VAR_8<VAR_4->nTask; VAR_8++){
    SortSubtask *VAR_9 = &VAR_4->aTask[VAR_8];
    FUNC_1( VAR_9->nPMA>0 || VAR_1>0 );
    if( VAR_1==0 || VAR_9->nPMA ){
      MergeEngine *VAR_10 = 0;
      int VAR_11 = FUNC_7(VAR_9->nPMA);
      i64 VAR_12 = 0;

      if( VAR_9->nPMA<=VAR_0 ){
        VAR_7 = FUNC_4(VAR_9, VAR_9->nPMA, &VAR_12, &VAR_10);
      }else{
        int VAR_13;
        int VAR_14 = 0;
        VAR_10 = FUNC_5(VAR_0);
        if( VAR_10==0 ) VAR_7 = VAR_2;
        for(VAR_13=0; VAR_13<VAR_9->nPMA && VAR_7==VAR_3; VAR_13 += VAR_0){
          MergeEngine *VAR_15 = 0;
          int VAR_16;

          VAR_16 = FUNC_0(VAR_9->nPMA - VAR_13, VAR_0);
          VAR_7 = FUNC_4(VAR_9, VAR_16, &VAR_12, &VAR_15);
          if( VAR_7==VAR_3 ){
            VAR_7 = FUNC_6(VAR_9, VAR_11, VAR_14++, VAR_10, VAR_15);
          }
        }
      }

      if( VAR_7==VAR_3 ){





        {
          FUNC_1( VAR_6==0 );
          VAR_6 = VAR_10;
        }
      }else{
        FUNC_3(VAR_10);
      }
    }
  }

  if( VAR_7!=VAR_3 ){
    FUNC_3(VAR_6);
    VAR_6 = 0;
  }
  *VAR_5 = VAR_6;
  return VAR_7;
}
