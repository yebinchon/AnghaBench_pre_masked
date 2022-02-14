
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_cq {int device; TYPE_1__* uobject; } ;
struct TYPE_7__ {int set_ci_db_index; int arm_db_index; } ;
struct TYPE_6__ {int db_tab; int uar; } ;
struct TYPE_5__ {int context; } ;


 int FUNC_0 (struct ib_cq*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_3 (struct ib_cq*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ib_cq *VAR_0)
{
 if (VAR_0->uobject) {
  FUNC_2(FUNC_4(VAR_0->device),
        &FUNC_5(VAR_0->uobject->context)->uar,
        FUNC_5(VAR_0->uobject->context)->db_tab,
        FUNC_3(VAR_0)->arm_db_index);
  FUNC_2(FUNC_4(VAR_0->device),
        &FUNC_5(VAR_0->uobject->context)->uar,
        FUNC_5(VAR_0->uobject->context)->db_tab,
        FUNC_3(VAR_0)->set_ci_db_index);
 }
 FUNC_1(FUNC_4(VAR_0->device), FUNC_3(VAR_0));
 FUNC_0(VAR_0);

 return 0;
}
