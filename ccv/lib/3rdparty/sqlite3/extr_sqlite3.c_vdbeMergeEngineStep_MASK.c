
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int* aTree; int nTree; TYPE_3__* aReadr; TYPE_2__* pTask; } ;
struct TYPE_10__ {scalar_t__ pFd; int nKey; int aKey; } ;
struct TYPE_9__ {int (* xCompare ) (TYPE_2__*,int*,int ,int ,int ,int ) ;TYPE_1__* pUnpacked; } ;
struct TYPE_8__ {int errCode; } ;
typedef TYPE_2__ SortSubtask ;
typedef TYPE_3__ PmaReader ;
typedef TYPE_4__ MergeEngine ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(
  MergeEngine *VAR_1,
  int *VAR_2
){
  int VAR_3;
  int VAR_4 = VAR_1->aTree[1];
  SortSubtask *VAR_5 = VAR_1->pTask;


  VAR_3 = FUNC_1(&VAR_1->aReadr[VAR_4]);


  if( VAR_3==VAR_0 ){
    int VAR_6;
    PmaReader *VAR_7;
    PmaReader *VAR_8;
    int VAR_9 = 0;



    VAR_7 = &VAR_1->aReadr[(VAR_4 & 0xFFFE)];
    VAR_8 = &VAR_1->aReadr[(VAR_4 | 0x0001)];

    for(VAR_6=(VAR_1->nTree+VAR_4)/2; VAR_6>0; VAR_6=VAR_6/2){

      int VAR_10;
      if( VAR_7->pFd==0 ){
        VAR_10 = +1;
      }else if( VAR_8->pFd==0 ){
        VAR_10 = -1;
      }else{
        VAR_10 = VAR_5->xCompare(VAR_5, &VAR_9,
            VAR_7->aKey, VAR_7->nKey, VAR_8->aKey, VAR_8->nKey
        );
      }
      if( VAR_10<0 || (VAR_10==0 && VAR_7<VAR_8) ){
        VAR_1->aTree[VAR_6] = (int)(VAR_7 - VAR_1->aReadr);
        VAR_8 = &VAR_1->aReadr[ VAR_1->aTree[VAR_6 ^ 0x0001] ];
        VAR_9 = 0;
      }else{
        if( VAR_7->pFd ) VAR_9 = 0;
        VAR_1->aTree[VAR_6] = (int)(VAR_8 - VAR_1->aReadr);
        VAR_7 = &VAR_1->aReadr[ VAR_1->aTree[VAR_6 ^ 0x0001] ];
      }
    }
    *VAR_2 = (VAR_1->aReadr[VAR_1->aTree[1]].pFd==0);
  }

  return (VAR_3==VAR_0 ? VAR_5->pUnpacked->errCode : VAR_3);
}
