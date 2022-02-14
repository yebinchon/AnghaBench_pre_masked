
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {int pAndInfo; int pOrInfo; } ;
struct TYPE_9__ {int wtFlags; TYPE_1__ u; int pExpr; } ;
typedef TYPE_3__ WhereTerm ;
struct TYPE_10__ {int nTerm; TYPE_3__* a; TYPE_3__* aStatic; TYPE_2__* pParse; } ;
typedef TYPE_4__ WhereClause ;
struct TYPE_8__ {int * db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(WhereClause *VAR_3){
  int VAR_4;
  WhereTerm *VAR_5;
  sqlite3 *VAR_6 = VAR_3->pParse->db;
  for(VAR_4=VAR_3->nTerm-1, VAR_5=VAR_3->a; VAR_4>=0; VAR_4--, VAR_5++){
    if( VAR_5->wtFlags & VAR_1 ){
      FUNC_1(VAR_6, VAR_5->pExpr);
    }
    if( VAR_5->wtFlags & VAR_2 ){
      FUNC_3(VAR_6, VAR_5->u.pOrInfo);
    }else if( VAR_5->wtFlags & VAR_0 ){
      FUNC_2(VAR_6, VAR_5->u.pAndInfo);
    }
  }
  if( VAR_3->a!=VAR_3->aStatic ){
    FUNC_0(VAR_6, VAR_3->a);
  }
}
