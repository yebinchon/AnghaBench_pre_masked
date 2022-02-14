
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int cntxt_id; int restarted; scalar_t__ credits; int starved; int lock; } ;
struct sge_qset {int rx_reclaim_timer; TYPE_6__* fl; TYPE_5__ rspq; int napi; int netdev; } ;
struct port_info {struct adapter* adapter; } ;
struct TYPE_10__ {int rev; } ;
struct TYPE_9__ {TYPE_2__* qs; } ;
struct adapter {TYPE_4__ params; TYPE_3__ sge; } ;
typedef int spinlock_t ;
struct TYPE_12__ {scalar_t__ credits; scalar_t__ size; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_8__ {TYPE_1__ rspq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adapter*,TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 struct port_info* FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,TYPE_5__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct adapter*,int ) ;
 int FUNC_8 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_3)
{
 spinlock_t *VAR_4;
 struct sge_qset *VAR_5 = (struct sge_qset *)VAR_3;
 struct port_info *VAR_6 = FUNC_3(VAR_5->netdev);
 struct adapter *VAR_7 = VAR_6->adapter;
 u32 VAR_8;

 VAR_4 = VAR_7->params.rev > 0 ?
        &VAR_5->rspq.lock : &VAR_7->sge.qs[0].rspq.lock;

 if (!FUNC_5(VAR_4))
  goto out;

 if (FUNC_2(&VAR_5->napi))
  goto unlock;

 if (VAR_7->params.rev < 4) {
  VAR_8 = FUNC_7(VAR_7, VAR_0);

  if (VAR_8 & (1 << VAR_5->rspq.cntxt_id)) {
   VAR_5->rspq.starved++;
   if (VAR_5->rspq.credits) {
    VAR_5->rspq.credits--;
    FUNC_4(VAR_7, &VAR_5->rspq, 1);
    VAR_5->rspq.restarted++;
    FUNC_8(VAR_7, VAR_0,
          1 << VAR_5->rspq.cntxt_id);
   }
  }
 }

 if (VAR_5->fl[0].credits < VAR_5->fl[0].size)
  FUNC_0(VAR_7, &VAR_5->fl[0]);
 if (VAR_5->fl[1].credits < VAR_5->fl[1].size)
  FUNC_0(VAR_7, &VAR_5->fl[1]);

unlock:
 FUNC_6(VAR_4);
out:
 FUNC_1(&VAR_5->rx_reclaim_timer, VAR_2 + VAR_1);
}
