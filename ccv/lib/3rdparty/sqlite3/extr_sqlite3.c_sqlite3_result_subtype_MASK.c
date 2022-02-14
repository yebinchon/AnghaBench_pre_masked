
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* pOut; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_7__ {unsigned int eSubtype; int flags; TYPE_1__* db; } ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(sqlite3_context *VAR_1, unsigned int VAR_2){
  Mem *VAR_3 = VAR_1->pOut;
  FUNC_0( FUNC_1(VAR_3->db->mutex) );
  VAR_3->eSubtype = VAR_2 & 0xff;
  VAR_3->flags |= VAR_0;
}
