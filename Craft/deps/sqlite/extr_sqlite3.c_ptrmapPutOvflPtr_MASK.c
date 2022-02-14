
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {scalar_t__ nData; scalar_t__ nKey; scalar_t__ nPayload; int iOverflow; } ;
struct TYPE_6__ {int pgno; int pBt; scalar_t__ intKey; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int*) ;

__attribute__((used)) static void FUNC_4(MemPage *VAR_1, u8 *VAR_2, int *VAR_3){
  CellInfo VAR_4;
  if( *VAR_3 ) return;
  FUNC_0( VAR_2!=0 );
  FUNC_1(VAR_1, VAR_2, &VAR_4);
  FUNC_0( (VAR_4.nData+(VAR_1->intKey?0:VAR_4.nKey))==VAR_4.nPayload );
  if( VAR_4.iOverflow ){
    Pgno VAR_5 = FUNC_2(&VAR_2[VAR_4.iOverflow]);
    FUNC_3(VAR_1->pBt, VAR_5, VAR_0, VAR_1->pgno, VAR_3);
  }
}
