
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ iStartOff; int bEof; TYPE_1__* aFile; int pTask; scalar_t__ bUseThread; } ;
struct TYPE_6__ {scalar_t__ iEof; } ;
typedef TYPE_1__ SorterFile ;
typedef TYPE_2__ IncrMerger ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(IncrMerger *VAR_1){
  int VAR_2 = VAR_0;
  {
    VAR_2 = FUNC_1(VAR_1);
    VAR_1->aFile[0] = VAR_1->aFile[1];
    if( VAR_1->aFile[0].iEof==VAR_1->iStartOff ){
      VAR_1->bEof = 1;
    }
  }

  return VAR_2;
}
