
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ class2_intr_base; int class2_intr; scalar_t__ slb_flt_base; int slb_flt; } ;
struct spu_context {int stop_wq; int * spu; TYPE_4__ stats; int * ops; int state; int csa; TYPE_1__* gang; } ;
struct TYPE_8__ {scalar_t__ class2_intr; scalar_t__ slb_flt; } ;
struct spu {size_t node; TYPE_3__ stats; int register_lock; TYPE_2__* ctx; scalar_t__ flags; scalar_t__ tgid; scalar_t__ pid; int * mfc_callback; int * stop_callback; int * wbox_callback; int * ibox_callback; int timestamp; } ;
struct TYPE_10__ {int reserved_spus; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int aff_sched_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_5__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spu*,int *) ;
 int VAR_7 ;
 int FUNC_5 (int ,struct spu_context*,struct spu*) ;
 int FUNC_6 (int *,struct spu*) ;
 scalar_t__ FUNC_7 (struct spu_context*,int *) ;
 int FUNC_8 (struct spu*,struct spu_context*,int ,int ) ;
 int FUNC_9 (struct spu*,int *) ;
 int VAR_8 ;
 int FUNC_10 (struct spu_context*) ;
 int FUNC_11 (struct spu_context*,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct spu *VAR_9, struct spu_context *VAR_10)
{
 u32 VAR_11;

 FUNC_5(VAR_8, VAR_10, VAR_9);

 FUNC_11(VAR_10, VAR_3);

  if (VAR_9->ctx->flags & VAR_0)
  FUNC_0(&VAR_5[VAR_9->node].reserved_spus);

 if (VAR_10->gang)





  FUNC_1(&VAR_10->gang->aff_sched_count);

 FUNC_9(VAR_9, ((void*)0));
 FUNC_10(VAR_10);
 FUNC_6(&VAR_10->csa, VAR_9);
 FUNC_8(VAR_9, VAR_10, VAR_4, 0);

 FUNC_2(&VAR_9->register_lock);
 VAR_9->timestamp = VAR_6;
 VAR_10->state = VAR_1;
 VAR_9->ibox_callback = ((void*)0);
 VAR_9->wbox_callback = ((void*)0);
 VAR_9->stop_callback = ((void*)0);
 VAR_9->mfc_callback = ((void*)0);
 VAR_9->pid = 0;
 VAR_9->tgid = 0;
 VAR_10->ops = &VAR_7;
 VAR_9->flags = 0;
 VAR_9->ctx = ((void*)0);
 FUNC_3(&VAR_9->register_lock);

 FUNC_4(VAR_9, ((void*)0));

 VAR_10->stats.slb_flt +=
  (VAR_9->stats.slb_flt - VAR_10->stats.slb_flt_base);
 VAR_10->stats.class2_intr +=
  (VAR_9->stats.class2_intr - VAR_10->stats.class2_intr_base);


 FUNC_11(VAR_10, VAR_2);
 VAR_10->spu = ((void*)0);

 if (FUNC_7(VAR_10, &VAR_11))
  FUNC_12(&VAR_10->stop_wq);
}
