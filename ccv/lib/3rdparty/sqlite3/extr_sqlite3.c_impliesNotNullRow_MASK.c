
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int iCur; } ;
struct TYPE_12__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_4__ Walker ;
struct TYPE_13__ {int op; TYPE_3__* pRight; TYPE_2__* pLeft; int iTable; } ;
struct TYPE_11__ {int const op; int pTab; } ;
struct TYPE_10__ {int const op; int pTab; } ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(Walker *VAR_6, Expr *VAR_7){






  FUNC_2( VAR_7->op!=VAR_1 );
  FUNC_3( VAR_7->op==VAR_2 );

  if( FUNC_0(VAR_7, VAR_0) ) return VAR_5;
  switch( VAR_7->op ){
    case 134:
    case 129:
    case 133:
    case 135:
    case 128:
    case 142:
    case 136:
    case 139:
      FUNC_3( VAR_7->op==134 );
      FUNC_3( VAR_7->op==129 );
      FUNC_3( VAR_7->op==133 );
      FUNC_3( VAR_7->op==135 );
      FUNC_3( VAR_7->op==128 );
      FUNC_3( VAR_7->op==142 );
      FUNC_3( VAR_7->op==136 );
      FUNC_3( VAR_7->op==139 );
      return VAR_5;
    case 141:
      if( VAR_6->u.iCur==VAR_7->iTable ){
        VAR_6->eCode = 1;
        return VAR_3;
      }
      return VAR_5;




    case 140:
    case 130:
    case 131:
    case 132:
    case 137:
    case 138:
      FUNC_3( VAR_7->op==140 );
      FUNC_3( VAR_7->op==130 );
      FUNC_3( VAR_7->op==131 );
      FUNC_3( VAR_7->op==132 );
      FUNC_3( VAR_7->op==137 );
      FUNC_3( VAR_7->op==138 );
      if( (VAR_7->pLeft->op==141 && FUNC_1(VAR_7->pLeft->pTab))
       || (VAR_7->pRight->op==141 && FUNC_1(VAR_7->pRight->pTab))
      ){
       return VAR_5;
      }
    default:
      return VAR_4;
  }
}
