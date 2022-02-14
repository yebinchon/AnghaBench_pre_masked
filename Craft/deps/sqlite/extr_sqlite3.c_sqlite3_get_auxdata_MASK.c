
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_10__ {TYPE_5__* pVdbeFunc; TYPE_2__ s; } ;
typedef TYPE_4__ sqlite3_context ;
struct TYPE_11__ {int nAux; TYPE_3__* apAux; } ;
typedef TYPE_5__ VdbeFunc ;
struct TYPE_9__ {void* pAux; } ;
struct TYPE_7__ {int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void *FUNC_2(sqlite3_context *VAR_0, int VAR_1){
  VdbeFunc *VAR_2;

  FUNC_0( FUNC_1(VAR_0->s.db->mutex) );
  VAR_2 = VAR_0->pVdbeFunc;
  if( !VAR_2 || VAR_1>=VAR_2->nAux || VAR_1<0 ){
    return 0;
  }
  return VAR_2->apAux[VAR_1].pAux;
}
