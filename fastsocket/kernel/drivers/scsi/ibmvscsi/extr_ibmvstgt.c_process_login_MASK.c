
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tag; } ;
struct srp_login_rsp {int max_it_iu_len; int max_ti_iu_len; int buf_fmt; int tag; int req_lim_delta; int opcode; } ;
struct TYPE_6__ {TYPE_1__ rsp; struct srp_login_rsp login_rsp; } ;
union viosrp_iu {int roles; int port_id; TYPE_2__ srp; } ;
typedef union srp_iu {int dummy; } srp_iu ;
typedef int uint64_t ;
struct vio_port {scalar_t__ rport; TYPE_4__* dma_dev; } ;
struct srp_target {int dummy; } ;
struct srp_rport_identifiers {int roles; int port_id; TYPE_2__ srp; } ;
struct iu_entry {TYPE_3__* target; } ;
struct Scsi_Host {int dummy; } ;
typedef int ids ;
struct TYPE_8__ {int unit_address; } ;
struct TYPE_7__ {struct Scsi_Host* shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct srp_target* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (union viosrp_iu*,int ,int) ;
 int FUNC_2 (struct iu_entry*,int,int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct Scsi_Host*,union viosrp_iu*) ;
 struct vio_port* FUNC_5 (struct srp_target*) ;
 union viosrp_iu* FUNC_6 (struct iu_entry*) ;

__attribute__((used)) static void FUNC_7(struct iu_entry *VAR_6)
{
 union viosrp_iu *VAR_7 = FUNC_6(VAR_6);
 struct srp_login_rsp *VAR_8 = &VAR_7->srp.login_rsp;
 uint64_t VAR_9 = VAR_7->srp.rsp.tag;
 struct Scsi_Host *VAR_10 = VAR_6->target->shost;
 struct srp_target *VAR_11 = FUNC_0(VAR_10);
 struct vio_port *VAR_12 = FUNC_5(VAR_11);
 struct srp_rport_identifiers VAR_13;

 FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 FUNC_3(VAR_13.port_id, "%x", VAR_12->dma_dev->unit_address);
 VAR_13.roles = VAR_4;
 if (!VAR_12->rport)
  VAR_12->rport = FUNC_4(VAR_10, &VAR_13);




 FUNC_1(VAR_7, 0, sizeof(struct srp_login_rsp));
 VAR_8->opcode = VAR_3;
 VAR_8->req_lim_delta = VAR_0;
 VAR_8->tag = VAR_9;
 VAR_8->max_it_iu_len = sizeof(union srp_iu);
 VAR_8->max_ti_iu_len = sizeof(union srp_iu);

 VAR_8->buf_fmt = VAR_1 | VAR_2;

 FUNC_2(VAR_6, sizeof(*VAR_8), VAR_5);
}
