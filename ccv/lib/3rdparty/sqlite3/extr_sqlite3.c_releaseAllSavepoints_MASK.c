
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pInSavepoint; } ;
struct TYPE_4__ {int nSavepoint; scalar_t__ nSubRec; TYPE_2__* aSavepoint; int sjfd; int exclusiveMode; } ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(Pager *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->nSavepoint; VAR_1++){
    FUNC_0(VAR_0->aSavepoint[VAR_1].pInSavepoint);
  }
  if( !VAR_0->exclusiveMode || FUNC_1(VAR_0->sjfd) ){
    FUNC_2(VAR_0->sjfd);
  }
  FUNC_3(VAR_0->aSavepoint);
  VAR_0->aSavepoint = 0;
  VAR_0->nSavepoint = 0;
  VAR_0->nSubRec = 0;
}
