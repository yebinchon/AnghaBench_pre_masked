
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int class2_intr_base; int slb_flt_base; } ;
struct spu_context {int flags; int state; int csa; int * ops; struct spu* spu; int owner; TYPE_1__ stats; } ;
struct TYPE_6__ {int class2_intr; int slb_flt; } ;
struct spu {size_t node; int timestamp; int register_lock; int mfc_callback; int stop_callback; int wbox_callback; int ibox_callback; int tgid; int pid; scalar_t__ flags; struct spu_context* ctx; TYPE_2__ stats; } ;
struct TYPE_8__ {int reserved_spus; } ;
struct TYPE_7__ {int tgid; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spu*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,struct spu_context*,struct spu*) ;
 int VAR_9 ;
 int FUNC_5 (int *,struct spu*) ;
 int FUNC_6 (struct spu*,struct spu_context*,int ,int ) ;
 int FUNC_7 (struct spu*,struct spu_context*) ;
 int FUNC_8 (struct spu_context*) ;
 int FUNC_9 (struct spu_context*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_10(struct spu *VAR_14, struct spu_context *VAR_15)
{
 FUNC_4(VAR_8, VAR_15, VAR_14);

 FUNC_9(VAR_15, VAR_2);

 if (VAR_15->flags & VAR_0)
  FUNC_0(&VAR_5[VAR_14->node].reserved_spus);

 VAR_15->stats.slb_flt_base = VAR_14->stats.slb_flt;
 VAR_15->stats.class2_intr_base = VAR_14->stats.class2_intr;

 FUNC_3(VAR_14, VAR_15->owner);

 FUNC_1(&VAR_14->register_lock);
 VAR_14->ctx = VAR_15;
 VAR_14->flags = 0;
 VAR_15->spu = VAR_14;
 VAR_15->ops = &VAR_9;
 VAR_14->pid = VAR_6->pid;
 VAR_14->tgid = VAR_6->tgid;
 VAR_14->ibox_callback = VAR_10;
 VAR_14->wbox_callback = VAR_13;
 VAR_14->stop_callback = VAR_12;
 VAR_14->mfc_callback = VAR_11;
 FUNC_2(&VAR_14->register_lock);

 FUNC_8(VAR_15);

 FUNC_6(VAR_14, VAR_15, VAR_4, 0);
 FUNC_5(&VAR_15->csa, VAR_14);
 VAR_14->timestamp = VAR_7;
 FUNC_7(VAR_14, VAR_15);
 VAR_15->state = VAR_1;

 FUNC_9(VAR_15, VAR_3);
}
