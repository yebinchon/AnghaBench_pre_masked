
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_7__ {scalar_t__ nKey; } ;
struct TYPE_10__ {int eState; TYPE_1__ info; scalar_t__ isIncrblobHandle; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {TYPE_4__* pCursor; } ;
struct TYPE_8__ {TYPE_3__* pBt; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(
  Btree *VAR_1,
  i64 VAR_2,
  int VAR_3
){
  BtCursor *VAR_4;
  BtShared *VAR_5 = VAR_1->pBt;
  FUNC_0( FUNC_1(VAR_1) );
  for(VAR_4=VAR_5->pCursor; VAR_4; VAR_4=VAR_4->pNext){
    if( VAR_4->isIncrblobHandle && (VAR_3 || VAR_4->info.nKey==VAR_2) ){
      VAR_4->eState = VAR_0;
    }
  }
}
