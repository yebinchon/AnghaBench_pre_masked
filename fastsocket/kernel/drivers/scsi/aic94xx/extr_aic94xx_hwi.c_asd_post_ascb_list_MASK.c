
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int prev; } ;
struct TYPE_7__ {int pending; int pend_q_lock; scalar_t__ scbpro; TYPE_2__ pend_q; } ;
struct TYPE_5__ {int max_scbs; } ;
struct asd_ha_struct {TYPE_3__ seq; int pcidev; TYPE_1__ hw_prof; } ;
struct TYPE_8__ {int prev; } ;
struct asd_ascb {TYPE_4__ list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,TYPE_4__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct asd_ha_struct*,struct asd_ascb*) ;
 int FUNC_5 (struct asd_ha_struct*,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct asd_ha_struct *VAR_3, struct asd_ascb *VAR_4,
         int VAR_5)
{
 unsigned long VAR_6;
 FUNC_0(VAR_2);
 int VAR_7;

 FUNC_8(&VAR_3->seq.pend_q_lock, VAR_6);
 VAR_7 = VAR_3->hw_prof.max_scbs - VAR_3->seq.pending;
 if (VAR_7 >= VAR_5)
  VAR_3->seq.pending += VAR_5;
 else
  VAR_7 = 0;

 if (!VAR_7) {
  FUNC_9(&VAR_3->seq.pend_q_lock, VAR_6);
  FUNC_2("%s: scb queue full\n", FUNC_7(VAR_3->pcidev));
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_4);

 FUNC_1(&VAR_2, VAR_4->list.prev, &VAR_4->list);

 FUNC_3(&VAR_2);

 VAR_3->seq.scbpro += VAR_5;
 FUNC_6(&VAR_2, VAR_3->seq.pend_q.prev);
 FUNC_5(VAR_3, VAR_1, (u32)VAR_3->seq.scbpro);
 FUNC_9(&VAR_3->seq.pend_q_lock, VAR_6);

 return 0;
}
