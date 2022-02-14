
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct spu_gang {int dummy; } ;
struct TYPE_2__ {int tstamp; int util_state; } ;
struct spu_context {TYPE_1__ stats; int aff_list; int rq; int owner; int * ops; int state; int run_wq; int mfc_wq; int stop_wq; int wbox_wq; int ibox_wq; int run_mutex; int state_mutex; int kref; int mapping_lock; int mmio_lock; int csa; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spu_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct timespec*) ;
 struct spu_context* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (struct spu_gang*,struct spu_context*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (struct spu_context*) ;
 int FUNC_14 (struct timespec*) ;

struct spu_context *FUNC_15(struct spu_gang *VAR_6)
{
 struct spu_context *VAR_7;
 struct timespec VAR_8;

 VAR_7 = FUNC_8(sizeof *VAR_7, VAR_0);
 if (!VAR_7)
  goto out;



 if (FUNC_12(&VAR_7->csa))
  goto out_free;
 FUNC_10(&VAR_7->mmio_lock);
 FUNC_9(&VAR_7->mapping_lock);
 FUNC_6(&VAR_7->kref);
 FUNC_9(&VAR_7->state_mutex);
 FUNC_9(&VAR_7->run_mutex);
 FUNC_4(&VAR_7->ibox_wq);
 FUNC_4(&VAR_7->wbox_wq);
 FUNC_4(&VAR_7->stop_wq);
 FUNC_4(&VAR_7->mfc_wq);
 FUNC_4(&VAR_7->run_wq);
 VAR_7->state = VAR_1;
 VAR_7->ops = &VAR_5;
 VAR_7->owner = FUNC_3(VAR_3);
 FUNC_0(&VAR_7->rq);
 FUNC_0(&VAR_7->aff_list);
 if (VAR_6)
  FUNC_11(VAR_6, VAR_7);

 FUNC_1(VAR_7);
 FUNC_13(VAR_7);
 VAR_7->stats.util_state = VAR_2;
 FUNC_7(&VAR_8);
 VAR_7->stats.tstamp = FUNC_14(&VAR_8);

 FUNC_2(&VAR_4);
 goto out;
out_free:
 FUNC_5(VAR_7);
 VAR_7 = ((void*)0);
out:
 return VAR_7;
}
