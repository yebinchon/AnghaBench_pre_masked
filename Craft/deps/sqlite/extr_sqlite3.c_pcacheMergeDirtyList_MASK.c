
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pgno; struct TYPE_5__* pDirty; } ;
typedef TYPE_1__ PgHdr ;



__attribute__((used)) static PgHdr *FUNC_0(PgHdr *VAR_0, PgHdr *VAR_1){
  PgHdr VAR_2, *VAR_3;
  VAR_3 = &VAR_2;
  while( VAR_0 && VAR_1 ){
    if( VAR_0->pgno<VAR_1->pgno ){
      VAR_3->pDirty = VAR_0;
      VAR_3 = VAR_0;
      VAR_0 = VAR_0->pDirty;
    }else{
      VAR_3->pDirty = VAR_1;
      VAR_3 = VAR_1;
      VAR_1 = VAR_1->pDirty;
    }
  }
  if( VAR_0 ){
    VAR_3->pDirty = VAR_0;
  }else if( VAR_1 ){
    VAR_3->pDirty = VAR_1;
  }else{
    VAR_3->pDirty = 0;
  }
  return VAR_2.pDirty;
}
