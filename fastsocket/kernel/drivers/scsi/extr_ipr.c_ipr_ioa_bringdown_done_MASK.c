
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipr_ioa_cfg {int hrrq_num; int reset_wait_q; TYPE_1__* hrrq; scalar_t__ reset_retries; scalar_t__ in_reset_reload; TYPE_3__* host; } ;
struct ipr_cmnd {TYPE_2__* hrrq; int queue; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_6__ {int host_lock; } ;
struct TYPE_5__ {int hrrq_free_q; } ;
struct TYPE_4__ {int ioa_is_dead; int _lock; int removing_ioa; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct ipr_cmnd *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = VAR_5->ioa_cfg;
 int VAR_7;

 VAR_0;
 if (!VAR_6->hrrq[VAR_1].removing_ioa) {
  VAR_4;
  FUNC_5(VAR_6->host->host_lock);
  FUNC_1(VAR_6->host);
  FUNC_3(VAR_6->host->host_lock);
 }

 VAR_6->in_reset_reload = 0;
 VAR_6->reset_retries = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->hrrq_num; VAR_7++) {
  FUNC_2(&VAR_6->hrrq[VAR_7]._lock);
  VAR_6->hrrq[VAR_7].ioa_is_dead = 1;
  FUNC_4(&VAR_6->hrrq[VAR_7]._lock);
 }
 FUNC_7();

 FUNC_0(&VAR_5->queue, &VAR_5->hrrq->hrrq_free_q);
 FUNC_6(&VAR_6->reset_wait_q);
 VAR_3;

 return VAR_2;
}
