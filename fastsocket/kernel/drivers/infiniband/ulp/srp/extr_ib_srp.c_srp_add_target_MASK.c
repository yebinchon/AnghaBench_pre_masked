
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct srp_target_port {int scsi_id; TYPE_3__* scsi_host; int state; int list; int ioc_guid; int id_ext; int target_name; } ;
struct srp_rport_identifiers {int roles; scalar_t__ port_id; } ;
struct srp_rport {struct srp_target_port* lld_data; } ;
struct srp_host {int target_lock; int target_list; TYPE_2__* srp_dev; } ;
struct TYPE_8__ {int shost_gendev; } ;
struct TYPE_7__ {TYPE_1__* dev; } ;
struct TYPE_6__ {int dma_device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct srp_rport*) ;
 int FUNC_1 (struct srp_rport*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,unsigned long long) ;
 struct srp_rport* FUNC_11 (TYPE_3__*,struct srp_rport_identifiers*) ;

__attribute__((used)) static int FUNC_12(struct srp_host *VAR_4, struct srp_target_port *VAR_5)
{
 struct srp_rport_identifiers VAR_6;
 struct srp_rport *VAR_7;

 FUNC_10(VAR_5->target_name, "SRP.T10:%016llX",
   (unsigned long long) FUNC_2(VAR_5->id_ext));

 if (FUNC_5(VAR_5->scsi_host, VAR_4->srp_dev->dev->dma_device))
  return -VAR_0;

 FUNC_4(VAR_6.port_id, &VAR_5->id_ext, 8);
 FUNC_4(VAR_6.port_id + 8, &VAR_5->ioc_guid, 8);
 VAR_6.roles = VAR_2;
 VAR_7 = FUNC_11(VAR_5->scsi_host, &VAR_6);
 if (FUNC_0(VAR_7)) {
  FUNC_6(VAR_5->scsi_host);
  return FUNC_1(VAR_7);
 }

 VAR_7->lld_data = VAR_5;

 FUNC_8(&VAR_4->target_lock);
 FUNC_3(&VAR_5->list, &VAR_4->target_list);
 FUNC_9(&VAR_4->target_lock);

 VAR_5->state = VAR_3;

 FUNC_7(&VAR_5->scsi_host->shost_gendev,
    0, VAR_5->scsi_id, VAR_1, 0);

 return 0;
}
