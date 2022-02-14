
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* db; } ;
struct TYPE_8__ {TYPE_2__ s; } ;
typedef TYPE_3__ sqlite3_context ;
struct TYPE_6__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,void const*,int,int ,void (*) (void*)) ;
 int FUNC_2 (int ) ;

void FUNC_3(
  sqlite3_context *VAR_1,
  const void *VAR_2,
  int VAR_3,
  void (*VAR_4)(void *)
){
  FUNC_0( FUNC_2(VAR_1->s.db->mutex) );
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0, VAR_4);
}
