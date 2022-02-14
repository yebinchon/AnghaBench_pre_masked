
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tabFlags; } ;
typedef TYPE_1__ Table ;
struct TYPE_11__ {int iDb; int regCtr; TYPE_1__* pTab; struct TYPE_11__* pNext; } ;
struct TYPE_10__ {int nMem; TYPE_3__* pAinc; int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ AutoincInfo ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(
  Parse *VAR_1,
  int VAR_2,
  Table *VAR_3
){
  int VAR_4 = 0;
  if( VAR_3->tabFlags & VAR_0 ){
    Parse *VAR_5 = FUNC_1(VAR_1);
    AutoincInfo *VAR_6;

    VAR_6 = VAR_5->pAinc;
    while( VAR_6 && VAR_6->pTab!=VAR_3 ){ VAR_6 = VAR_6->pNext; }
    if( VAR_6==0 ){
      VAR_6 = FUNC_0(VAR_1->db, sizeof(*VAR_6));
      if( VAR_6==0 ) return 0;
      VAR_6->pNext = VAR_5->pAinc;
      VAR_5->pAinc = VAR_6;
      VAR_6->pTab = VAR_3;
      VAR_6->iDb = VAR_2;
      VAR_5->nMem++;
      VAR_6->regCtr = ++VAR_5->nMem;
      VAR_5->nMem++;
    }
    VAR_4 = VAR_6->regCtr;
  }
  return VAR_4;
}
