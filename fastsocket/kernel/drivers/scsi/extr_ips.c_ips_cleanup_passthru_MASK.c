
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ op_code; } ;
struct TYPE_12__ {scalar_t__ op_code; } ;
struct TYPE_16__ {TYPE_4__ flashfw; TYPE_1__ dcdb; } ;
struct TYPE_17__ {int scsi_cmd; TYPE_5__ cmd; int extended_status; int basic_status; int dcdb; } ;
typedef TYPE_6__ ips_scb_t ;
struct TYPE_13__ {int dcdb; } ;
struct TYPE_18__ {int AdapterType; int ExtendedStatus; int BasicStatus; TYPE_2__ CoppCP; } ;
typedef TYPE_7__ ips_passthru_t ;
struct TYPE_19__ {int ioctl_datasize; scalar_t__ ioctl_data; TYPE_3__* pcidev; int ad_type; int host_num; } ;
typedef TYPE_8__ ips_ha_t ;
struct TYPE_14__ {scalar_t__ device; } ;
typedef int IPS_DCDB_TABLE ;


 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(ips_ha_t * VAR_5, ips_scb_t * VAR_6)
{
 ips_passthru_t *VAR_7;

 FUNC_1("ips_cleanup_passthru", 1);

 if ((!VAR_6) || (!VAR_6->scsi_cmd) || (!FUNC_5(VAR_6->scsi_cmd))) {
  FUNC_0(1, "(%s%d) couldn't cleanup after passthru",
     VAR_4, VAR_5->host_num);

  return;
 }
 VAR_7 = (ips_passthru_t *) VAR_5->ioctl_data;


 if (VAR_6->cmd.dcdb.op_code == VAR_0)
  FUNC_4(&VAR_7->CoppCP.dcdb, &VAR_6->dcdb, sizeof (IPS_DCDB_TABLE));

 VAR_7->BasicStatus = VAR_6->basic_status;
 VAR_7->ExtendedStatus = VAR_6->extended_status;
 VAR_7->AdapterType = VAR_5->ad_type;

 if (VAR_5->pcidev->device == VAR_3 &&
     (VAR_6->cmd.flashfw.op_code == VAR_1 ||
      VAR_6->cmd.flashfw.op_code == VAR_2))
  FUNC_2(VAR_5);

 FUNC_3(VAR_6->scsi_cmd, VAR_5->ioctl_data, VAR_5->ioctl_datasize);
}
