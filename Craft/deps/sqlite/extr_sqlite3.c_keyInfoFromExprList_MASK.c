
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ExprList_item {int sortOrder; int pExpr; } ;
struct TYPE_12__ {int * pDfltColl; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_15__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_14__ {int * aSortOrder; int ** aColl; TYPE_1__* db; int enc; scalar_t__ nField; } ;
struct TYPE_13__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ KeyInfo ;
typedef TYPE_4__ ExprList ;
typedef int CollSeq ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static KeyInfo *FUNC_3(Parse *VAR_0, ExprList *VAR_1){
  sqlite3 *VAR_2 = VAR_0->db;
  int VAR_3;
  KeyInfo *VAR_4;
  struct ExprList_item *VAR_5;
  int VAR_6;

  VAR_3 = VAR_1->nExpr;
  VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4) + VAR_3*(sizeof(CollSeq*)+1) );
  if( VAR_4 ){
    VAR_4->aSortOrder = (u8*)&VAR_4->aColl[VAR_3];
    VAR_4->nField = (u16)VAR_3;
    VAR_4->enc = FUNC_0(VAR_2);
    VAR_4->db = VAR_2;
    for(VAR_6=0, VAR_5=VAR_1->a; VAR_6<VAR_3; VAR_6++, VAR_5++){
      CollSeq *VAR_7;
      VAR_7 = FUNC_2(VAR_0, VAR_5->pExpr);
      if( !VAR_7 ){
        VAR_7 = VAR_2->pDfltColl;
      }
      VAR_4->aColl[VAR_6] = VAR_7;
      VAR_4->aSortOrder[VAR_6] = VAR_5->sortOrder;
    }
  }
  return VAR_4;
}
