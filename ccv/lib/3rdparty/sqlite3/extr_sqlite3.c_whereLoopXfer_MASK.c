
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_12__ {scalar_t__ pIndex; } ;
struct TYPE_11__ {scalar_t__ needFree; } ;
struct TYPE_14__ {TYPE_2__ btree; TYPE_1__ vtab; } ;
struct TYPE_13__ {int nLTerm; int wsFlags; TYPE_8__ u; struct TYPE_13__* aLTerm; } ;
typedef TYPE_3__ WhereLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_8__*,int ,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_5, WhereLoop *VAR_6, WhereLoop *VAR_7){
  FUNC_2(VAR_5, VAR_6);
  if( FUNC_3(VAR_5, VAR_6, VAR_7->nLTerm) ){
    FUNC_1(&VAR_6->u, 0, sizeof(VAR_6->u));
    return VAR_0;
  }
  FUNC_0(VAR_6, VAR_7, VAR_3);
  FUNC_0(VAR_6->aLTerm, VAR_7->aLTerm, VAR_6->nLTerm*sizeof(VAR_6->aLTerm[0]));
  if( VAR_7->wsFlags & VAR_4 ){
    VAR_7->u.vtab.needFree = 0;
  }else if( (VAR_7->wsFlags & VAR_2)!=0 ){
    VAR_7->u.btree.pIndex = 0;
  }
  return VAR_1;
}
