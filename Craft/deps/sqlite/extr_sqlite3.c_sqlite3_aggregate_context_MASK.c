
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* db; } ;
struct TYPE_14__ {TYPE_4__* pFunc; TYPE_6__* pMem; TYPE_2__ s; } ;
typedef TYPE_5__ sqlite3_context ;
struct TYPE_12__ {TYPE_4__* pDef; } ;
struct TYPE_15__ {int flags; scalar_t__ z; TYPE_3__ u; } ;
struct TYPE_13__ {scalar_t__ xStep; } ;
struct TYPE_10__ {int mutex; } ;
typedef TYPE_6__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (TYPE_6__*,int,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

void *FUNC_6(sqlite3_context *VAR_2, int VAR_3){
  Mem *VAR_4;
  FUNC_0( VAR_2 && VAR_2->pFunc && VAR_2->pFunc->xStep );
  FUNC_0( FUNC_4(VAR_2->s.db->mutex) );
  VAR_4 = VAR_2->pMem;
  FUNC_5( VAR_3<0 );
  if( (VAR_4->flags & VAR_0)==0 ){
    if( VAR_3<=0 ){
      FUNC_3(VAR_4);
      VAR_4->flags = VAR_1;
      VAR_4->z = 0;
    }else{
      FUNC_2(VAR_4, VAR_3, 0);
      VAR_4->flags = VAR_0;
      VAR_4->u.pDef = VAR_2->pFunc;
      if( VAR_4->z ){
        FUNC_1(VAR_4->z, 0, VAR_3);
      }
    }
  }
  return (void*)VAR_4->z;
}
