
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int jointype; } ;
struct SrcList_item {scalar_t__ iCursor; TYPE_3__* pTab; TYPE_1__ fg; } ;
struct TYPE_12__ {size_t leftColumn; } ;
struct TYPE_13__ {scalar_t__ leftCursor; int eOperator; int prereqRight; TYPE_7__* pExpr; TYPE_4__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_14__ {scalar_t__ op; } ;
struct TYPE_11__ {TYPE_2__* aCol; } ;
struct TYPE_10__ {char affinity; } ;
typedef int Bitmask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  WhereTerm *VAR_5,
  struct SrcList_item *VAR_6,
  Bitmask VAR_7
){
  char VAR_8;
  if( VAR_5->leftCursor!=VAR_6->iCursor ) return 0;
  if( (VAR_5->eOperator & (VAR_3|VAR_4))==0 ) return 0;
  if( (VAR_6->fg.jointype & VAR_1)
   && !FUNC_0(VAR_5->pExpr, VAR_0)
   && (VAR_5->eOperator & VAR_4)
  ){



    return 0;
  }
  if( (VAR_5->prereqRight & VAR_7)!=0 ) return 0;
  if( VAR_5->u.leftColumn<0 ) return 0;
  VAR_8 = VAR_6->pTab->aCol[VAR_5->u.leftColumn].affinity;
  if( !FUNC_1(VAR_5->pExpr, VAR_8) ) return 0;
  FUNC_2( VAR_5->pExpr->op==VAR_2 );
  return 1;
}
