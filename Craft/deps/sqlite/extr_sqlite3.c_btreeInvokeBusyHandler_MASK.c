
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int busyHandler; int mutex; } ;
struct TYPE_4__ {TYPE_2__* db; } ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0){
  BtShared *VAR_1 = (BtShared*)VAR_0;
  FUNC_0( VAR_1->db );
  FUNC_0( FUNC_2(VAR_1->db->mutex) );
  return FUNC_1(&VAR_1->db->busyHandler);
}
