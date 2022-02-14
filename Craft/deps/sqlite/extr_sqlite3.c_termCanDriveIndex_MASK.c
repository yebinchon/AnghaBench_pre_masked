
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct SrcList_item {scalar_t__ iCursor; TYPE_1__* pTab; } ;
struct TYPE_7__ {size_t leftColumn; } ;
struct TYPE_9__ {scalar_t__ leftCursor; int eOperator; int prereqRight; int pExpr; TYPE_2__ u; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_8__ {char affinity; } ;
struct TYPE_6__ {TYPE_3__* aCol; } ;
typedef int Bitmask ;


 int VAR_0 ;
 int FUNC_0 (int ,char) ;

__attribute__((used)) static int FUNC_1(
  WhereTerm *VAR_1,
  struct SrcList_item *VAR_2,
  Bitmask VAR_3
){
  char VAR_4;
  if( VAR_1->leftCursor!=VAR_2->iCursor ) return 0;
  if( (VAR_1->eOperator & VAR_0)==0 ) return 0;
  if( (VAR_1->prereqRight & VAR_3)!=0 ) return 0;
  VAR_4 = VAR_2->pTab->aCol[VAR_1->u.leftColumn].affinity;
  if( !FUNC_0(VAR_1->pExpr, VAR_4) ) return 0;
  return 1;
}
