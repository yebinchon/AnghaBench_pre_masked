
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int table; } ;
struct TYPE_4__ {int table; } ;
struct ib_device {int dummy; } ;
struct ipath_ibdev {int txreq_bufs; TYPE_1__ lk_table; TYPE_2__ qp_table; int dd; int rnrwait; int piowait; int * pending; struct ib_device ibdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ipath_ibdev *VAR_0)
{
 struct ib_device *VAR_1 = &VAR_0->ibdev;
 u32 VAR_2;

 FUNC_2(VAR_1);

 FUNC_0(VAR_0->dd);

 if (!FUNC_7(&VAR_0->pending[0]) ||
     !FUNC_7(&VAR_0->pending[1]) ||
     !FUNC_7(&VAR_0->pending[2]))
  FUNC_3(VAR_0->dd, "pending list not empty!\n");
 if (!FUNC_7(&VAR_0->piowait))
  FUNC_3(VAR_0->dd, "piowait list not empty!\n");
 if (!FUNC_7(&VAR_0->rnrwait))
  FUNC_3(VAR_0->dd, "rnrwait list not empty!\n");
 if (!FUNC_5())
  FUNC_3(VAR_0->dd, "multicast table memory leak!\n");




 VAR_2 = FUNC_4(&VAR_0->qp_table);
 if (VAR_2)
  FUNC_3(VAR_0->dd, "QP memory leak! %u still in use\n",
   VAR_2);
 FUNC_6(VAR_0->qp_table.table);
 FUNC_6(VAR_0->lk_table.table);
 FUNC_6(VAR_0->txreq_bufs);
 FUNC_1(VAR_1);
}
