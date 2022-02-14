
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ nSize; unsigned char* pCell; int nLocal; scalar_t__ nKey; int nHeader; } ;
struct TYPE_8__ {size_t iPage; scalar_t__ eState; scalar_t__* aiIdx; TYPE_6__ info; TYPE_1__** apPage; } ;
struct TYPE_7__ {scalar_t__ nCell; scalar_t__ intKey; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static const unsigned char *FUNC_4(
  BtCursor *VAR_1,
  int *VAR_2,
  int VAR_3
){
  unsigned char *VAR_4;
  MemPage *VAR_5;
  u32 VAR_6;
  u32 VAR_7;

  FUNC_1( VAR_1!=0 && VAR_1->iPage>=0 && VAR_1->apPage[VAR_1->iPage]);
  FUNC_1( VAR_1->eState==VAR_0 );
  FUNC_1( FUNC_3(VAR_1) );
  VAR_5 = VAR_1->apPage[VAR_1->iPage];
  FUNC_1( VAR_1->aiIdx[VAR_1->iPage]<VAR_5->nCell );
  if( FUNC_0(VAR_1->info.nSize==0) ){
    FUNC_2(VAR_1->apPage[VAR_1->iPage], VAR_1->aiIdx[VAR_1->iPage],
                   &VAR_1->info);
  }
  VAR_4 = VAR_1->info.pCell;
  VAR_4 += VAR_1->info.nHeader;
  if( VAR_5->intKey ){
    VAR_6 = 0;
  }else{
    VAR_6 = (int)VAR_1->info.nKey;
  }
  if( VAR_3 ){
    VAR_4 += VAR_6;
    VAR_7 = VAR_1->info.nLocal - VAR_6;
  }else{
    VAR_7 = VAR_1->info.nLocal;
    FUNC_1( VAR_7<=VAR_6 );
  }
  *VAR_2 = VAR_7;
  return VAR_4;
}
