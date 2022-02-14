
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct ipr_resource_entry {TYPE_11__* sata_port; int res_handle; } ;
struct ipr_ioasa_gata {int dummy; } ;
struct ipr_ioarcb_ata_regs {int flags; } ;
struct TYPE_22__ {struct ipr_ioarcb_ata_regs regs; } ;
struct TYPE_23__ {TYPE_3__ u; } ;
struct TYPE_24__ {TYPE_4__ add_data; } ;
struct ipr_cmd_pkt {int * cdb; int request_type; } ;
struct ipr_ioarcb {void* add_cmd_parms_len; int res_handle; TYPE_5__ u; void* add_cmd_parms_offset; struct ipr_cmd_pkt cmd_pkt; } ;
struct ipr_ioa_cfg {int dummy; } ;
struct TYPE_17__ {int gata; } ;
struct TYPE_25__ {int ioasc; } ;
struct TYPE_18__ {TYPE_12__ u; TYPE_6__ hdr; } ;
struct TYPE_28__ {int gata; } ;
struct TYPE_15__ {TYPE_9__ u; } ;
struct TYPE_19__ {TYPE_13__ ioasa; TYPE_10__ ioasa64; } ;
struct TYPE_20__ {struct ipr_ioarcb_ata_regs regs; } ;
struct TYPE_21__ {TYPE_1__ ata_ioadl; } ;
struct ipr_cmnd {TYPE_14__ s; TYPE_8__* ioa_cfg; TYPE_7__* hrrq; int queue; TYPE_2__ i; struct ipr_ioarcb ioarcb; } ;
struct TYPE_27__ {scalar_t__ sis64; } ;
struct TYPE_26__ {int hrrq_free_q; } ;
struct TYPE_16__ {int ioasa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 struct ipr_cmnd* FUNC_3 (struct ipr_ioa_cfg*) ;
 scalar_t__ FUNC_4 (struct ipr_resource_entry*) ;
 int FUNC_5 (struct ipr_cmnd*,int ,int ) ;
 int VAR_9 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8(struct ipr_ioa_cfg *VAR_10,
       struct ipr_resource_entry *VAR_11)
{
 struct ipr_cmnd *VAR_12;
 struct ipr_ioarcb *VAR_13;
 struct ipr_cmd_pkt *VAR_14;
 struct ipr_ioarcb_ata_regs *VAR_15;
 u32 VAR_16;

 VAR_1;
 VAR_12 = FUNC_3(VAR_10);
 VAR_13 = &VAR_12->ioarcb;
 VAR_14 = &VAR_13->cmd_pkt;

 if (VAR_12->ioa_cfg->sis64) {
  VAR_15 = &VAR_12->i.ata_ioadl.regs;
  VAR_13->add_cmd_parms_offset = FUNC_2(sizeof(*VAR_13));
 } else
  VAR_15 = &VAR_13->u.add_data.u.regs;

 VAR_13->res_handle = VAR_11->res_handle;
 VAR_14->request_type = VAR_7;
 VAR_14->cdb[0] = VAR_6;
 if (FUNC_4(VAR_11)) {
  VAR_14->cdb[2] = VAR_3;
  VAR_13->add_cmd_parms_len = FUNC_2(sizeof(VAR_15->flags));
  VAR_15->flags |= VAR_2;
 }

 FUNC_5(VAR_12, VAR_9, VAR_4);
 VAR_16 = FUNC_1(VAR_12->s.ioasa.hdr.ioasc);
 FUNC_6(&VAR_12->queue, &VAR_12->hrrq->hrrq_free_q);
 if (FUNC_4(VAR_11) && VAR_11->sata_port && VAR_16 != VAR_5) {
  if (VAR_12->ioa_cfg->sis64)
   FUNC_7(&VAR_11->sata_port->ioasa, &VAR_12->s.ioasa64.u.gata,
          sizeof(struct ipr_ioasa_gata));
  else
   FUNC_7(&VAR_11->sata_port->ioasa, &VAR_12->s.ioasa.u.gata,
          sizeof(struct ipr_ioasa_gata));
 }

 VAR_8;
 return (FUNC_0(VAR_16) ? -VAR_0 : 0);
}
