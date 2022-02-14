
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pParent; } ;
typedef TYPE_1__ VdbeFrame ;
struct TYPE_8__ {scalar_t__ nFrame; scalar_t__ pAuxData; int db; TYPE_1__* pDelFrame; int nMem; scalar_t__ aMem; TYPE_1__* pFrame; } ;
typedef TYPE_2__ Vdbe ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(Vdbe *VAR_0){
  if( VAR_0->pFrame ){
    VdbeFrame *VAR_1;
    for(VAR_1=VAR_0->pFrame; VAR_1->pParent; VAR_1=VAR_1->pParent);
    FUNC_5(VAR_1);
    VAR_0->pFrame = 0;
    VAR_0->nFrame = 0;
  }
  FUNC_0( VAR_0->nFrame==0 );
  FUNC_1(VAR_0);
  if( VAR_0->aMem ){
    FUNC_2(VAR_0->aMem, VAR_0->nMem);
  }
  while( VAR_0->pDelFrame ){
    VdbeFrame *VAR_2 = VAR_0->pDelFrame;
    VAR_0->pDelFrame = VAR_2->pParent;
    FUNC_4(VAR_2);
  }


  if( VAR_0->pAuxData ) FUNC_3(VAR_0->db, &VAR_0->pAuxData, -1, 0);
  FUNC_0( VAR_0->pAuxData==0 );
}
