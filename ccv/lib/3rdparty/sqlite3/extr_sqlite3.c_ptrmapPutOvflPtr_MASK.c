
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {scalar_t__ nLocal; scalar_t__ nPayload; int nSize; } ;
struct TYPE_6__ {int pgno; int pBt; int (* xParseCell ) (TYPE_1__*,int *,TYPE_2__*) ;} ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(MemPage *VAR_1, u8 *VAR_2, int *VAR_3){
  CellInfo VAR_4;
  if( *VAR_3 ) return;
  FUNC_0( VAR_2!=0 );
  VAR_1->xParseCell(VAR_1, VAR_2, &VAR_4);
  if( VAR_4.nLocal<VAR_4.nPayload ){
    Pgno VAR_5 = FUNC_1(&VAR_2[VAR_4.nSize-4]);
    FUNC_2(VAR_1->pBt, VAR_5, VAR_0, VAR_1->pgno, VAR_3);
  }
}
