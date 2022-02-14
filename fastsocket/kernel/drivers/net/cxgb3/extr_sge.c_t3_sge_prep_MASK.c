
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_shared_info {int dummy; } ;
struct sge_params {struct qset_params* qset; scalar_t__ max_pkt_size; } ;
struct qset_params {int polling; int coalesce_usecs; int rspq_size; int fl_size; int jumbo_size; int* txq_size; scalar_t__ cong_thres; } ;
struct cpl_rx_data {int dummy; } ;
struct TYPE_4__ {int reg_lock; } ;
struct TYPE_3__ {scalar_t__ rev; } ;
struct adapter {TYPE_2__ sge; TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct adapter *VAR_4, struct sge_params *VAR_5)
{
 int VAR_6;

 VAR_5->max_pkt_size = (16 * 1024) - sizeof(struct cpl_rx_data) -
     FUNC_0(sizeof(struct skb_shared_info));

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  struct qset_params *VAR_7 = VAR_5->qset + VAR_6;

  VAR_7->polling = VAR_4->params.rev > 0;
  VAR_7->coalesce_usecs = 5;
  VAR_7->rspq_size = 1024;
  VAR_7->fl_size = 1024;
   VAR_7->jumbo_size = 512;
  VAR_7->txq_size[VAR_2] = 1024;
  VAR_7->txq_size[VAR_3] = 1024;
  VAR_7->txq_size[VAR_1] = 256;
  VAR_7->cong_thres = 0;
 }

 FUNC_1(&VAR_4->sge.reg_lock);
}
