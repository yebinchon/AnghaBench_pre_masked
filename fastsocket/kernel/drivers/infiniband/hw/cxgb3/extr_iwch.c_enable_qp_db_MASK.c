
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int qpid; } ;
struct iwch_qp {TYPE_4__ wq; TYPE_3__* rhp; } ;
struct TYPE_5__ {int doorbell; } ;
struct TYPE_6__ {TYPE_1__ ctrl_qp; } ;
struct TYPE_7__ {TYPE_2__ rdev; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct iwch_qp *VAR_3 = VAR_1;

 if (VAR_2)
  FUNC_1(VAR_3->rhp->rdev.ctrl_qp.doorbell, VAR_3->wq.qpid);
 FUNC_0(&VAR_3->wq);
 return 0;
}
