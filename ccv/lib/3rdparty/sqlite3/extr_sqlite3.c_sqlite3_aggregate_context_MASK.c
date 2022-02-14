
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* pMem; TYPE_3__* pOut; TYPE_1__* pFunc; } ;
typedef TYPE_5__ sqlite3_context ;
struct TYPE_11__ {int flags; scalar_t__ z; } ;
struct TYPE_10__ {TYPE_2__* db; } ;
struct TYPE_9__ {int mutex; } ;
struct TYPE_8__ {scalar_t__ xFinalize; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void *FUNC_4(sqlite3_context *VAR_1, int VAR_2){
  FUNC_0( VAR_1 && VAR_1->pFunc && VAR_1->pFunc->xFinalize );
  FUNC_0( FUNC_2(VAR_1->pOut->db->mutex) );
  FUNC_3( VAR_2<0 );
  if( (VAR_1->pMem->flags & VAR_0)==0 ){
    return FUNC_1(VAR_1, VAR_2);
  }else{
    return (void*)VAR_1->pMem->z;
  }
}
