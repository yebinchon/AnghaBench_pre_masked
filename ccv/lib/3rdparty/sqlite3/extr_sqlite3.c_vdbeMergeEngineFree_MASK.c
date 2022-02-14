
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nTree; int * aReadr; } ;
typedef TYPE_1__ MergeEngine ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(MergeEngine *VAR_0){
  int VAR_1;
  if( VAR_0 ){
    for(VAR_1=0; VAR_1<VAR_0->nTree; VAR_1++){
      FUNC_1(&VAR_0->aReadr[VAR_1]);
    }
  }
  FUNC_0(VAR_0);
}
