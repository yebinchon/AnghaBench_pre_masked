
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ib_qp {int device; TYPE_3__* uobject; } ;
struct TYPE_8__ {int db_index; } ;
struct TYPE_7__ {int db_index; } ;
struct TYPE_11__ {TYPE_2__ rq; TYPE_1__ sq; } ;
struct TYPE_10__ {int db_tab; int uar; } ;
struct TYPE_9__ {int context; } ;


 int FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (struct ib_qp*) ;
 TYPE_4__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ib_qp *VAR_0)
{
 if (VAR_0->uobject) {
  FUNC_2(FUNC_3(VAR_0->device),
        &FUNC_5(VAR_0->uobject->context)->uar,
        FUNC_5(VAR_0->uobject->context)->db_tab,
        FUNC_4(VAR_0)->sq.db_index);
  FUNC_2(FUNC_3(VAR_0->device),
        &FUNC_5(VAR_0->uobject->context)->uar,
        FUNC_5(VAR_0->uobject->context)->db_tab,
        FUNC_4(VAR_0)->rq.db_index);
 }
 FUNC_1(FUNC_3(VAR_0->device), FUNC_4(VAR_0));
 FUNC_0(VAR_0);
 return 0;
}
