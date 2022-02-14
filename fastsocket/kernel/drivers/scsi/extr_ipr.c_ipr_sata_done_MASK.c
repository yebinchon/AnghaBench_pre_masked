
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_18__ {int status; } ;
struct ipr_sata_port {TYPE_9__ ioasa; struct ipr_resource_entry* res; } ;
struct ipr_resource_entry {int target; int bus; } ;
struct ipr_ioasa_gata {int dummy; } ;
struct ipr_ioa_cfg {int host; scalar_t__ sis64; } ;
struct TYPE_14__ {int ioasc_specific; int ioasc; } ;
struct TYPE_13__ {int gata; } ;
struct TYPE_15__ {TYPE_5__ hdr; TYPE_4__ u; } ;
struct TYPE_11__ {int gata; } ;
struct TYPE_12__ {TYPE_2__ u; } ;
struct TYPE_16__ {TYPE_6__ ioasa; TYPE_3__ ioasa64; } ;
struct ipr_cmnd {TYPE_8__* hrrq; int queue; TYPE_7__ s; struct ipr_ioa_cfg* ioa_cfg; struct ata_queued_cmd* qc; } ;
struct ata_queued_cmd {int err_mask; TYPE_1__* ap; } ;
struct TYPE_17__ {int _lock; int hrrq_free_q; } ;
struct TYPE_10__ {struct ipr_sata_port* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ipr_ioa_cfg*,struct ipr_cmnd*,struct ipr_resource_entry*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_9__*,int *,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ipr_cmnd *VAR_2)
{
 struct ipr_ioa_cfg *VAR_3 = VAR_2->ioa_cfg;
 struct ata_queued_cmd *VAR_4 = VAR_2->qc;
 struct ipr_sata_port *VAR_5 = VAR_4->ap->private_data;
 struct ipr_resource_entry *VAR_6 = VAR_5->res;
 u32 VAR_7 = FUNC_4(VAR_2->s.ioasa.hdr.ioasc);

 FUNC_9(&VAR_2->hrrq->_lock);
 if (VAR_2->ioa_cfg->sis64)
  FUNC_7(&VAR_5->ioasa, &VAR_2->s.ioasa64.u.gata,
         sizeof(struct ipr_ioasa_gata));
 else
  FUNC_7(&VAR_5->ioasa, &VAR_2->s.ioasa.u.gata,
         sizeof(struct ipr_ioasa_gata));
 FUNC_5(VAR_3, VAR_2, VAR_6);

 if (FUNC_4(VAR_2->s.ioasa.hdr.ioasc_specific) & VAR_0)
  FUNC_8(VAR_3->host, VAR_6->bus, VAR_6->target);

 if (FUNC_0(VAR_7) > VAR_1)
  VAR_4->err_mask |= FUNC_1(VAR_5->ioasa.status);
 else
  VAR_4->err_mask |= FUNC_2(VAR_5->ioasa.status);
 FUNC_6(&VAR_2->queue, &VAR_2->hrrq->hrrq_free_q);
 FUNC_10(&VAR_2->hrrq->_lock);
 FUNC_3(VAR_4);
}
