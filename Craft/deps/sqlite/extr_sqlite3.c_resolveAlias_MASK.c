
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ u16 ;
typedef int sqlite3 ;
struct TYPE_25__ {int zToken; } ;
struct TYPE_28__ {int flags; scalar_t__ op; scalar_t__ iTable; int flags2; TYPE_2__ u; } ;
struct TYPE_27__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_26__ {scalar_t__ nAlias; int * db; } ;
struct TYPE_24__ {scalar_t__ iAlias; TYPE_5__* pExpr; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int *,int ) ;
 TYPE_5__* FUNC_7 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_8 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_9 (int *,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_10 (TYPE_3__*,int ,TYPE_5__*,int ,int ) ;

__attribute__((used)) static void FUNC_11(
  Parse *VAR_9,
  ExprList *VAR_10,
  int VAR_11,
  Expr *VAR_12,
  const char *VAR_13,
  int VAR_14
){
  Expr *VAR_15;
  Expr *VAR_16;
  sqlite3 *VAR_17;

  FUNC_2( VAR_11>=0 && VAR_11<VAR_10->nExpr );
  VAR_15 = VAR_10->a[VAR_11].pExpr;
  FUNC_2( VAR_15!=0 );
  FUNC_2( VAR_15->flags & VAR_3 );
  VAR_17 = VAR_9->db;
  VAR_16 = FUNC_9(VAR_17, VAR_15, 0);
  if( VAR_16==0 ) return;
  if( VAR_15->op!=VAR_8 && VAR_13[0]!='G' ){
    FUNC_3(VAR_16, VAR_14);
    VAR_16 = FUNC_10(VAR_9, VAR_6, VAR_16, 0, 0);
    if( VAR_16==0 ) return;
    if( VAR_10->a[VAR_11].iAlias==0 ){
      VAR_10->a[VAR_11].iAlias = (u16)(++VAR_9->nAlias);
    }
    VAR_16->iTable = VAR_10->a[VAR_11].iAlias;
  }
  if( VAR_12->op==VAR_7 ){
    VAR_16 = FUNC_7(VAR_9, VAR_16, VAR_12->u.zToken);
  }
  FUNC_1(VAR_12, VAR_4);
  FUNC_8(VAR_17, VAR_12);
  FUNC_4(VAR_12, VAR_16, sizeof(*VAR_12));
  if( !FUNC_0(VAR_12, VAR_1) && VAR_12->u.zToken!=0 ){
    FUNC_2( (VAR_12->flags & (VAR_2|VAR_5))==0 );
    VAR_12->u.zToken = FUNC_6(VAR_17, VAR_12->u.zToken);
    VAR_12->flags2 |= VAR_0;
  }
  FUNC_5(VAR_17, VAR_16);
}
