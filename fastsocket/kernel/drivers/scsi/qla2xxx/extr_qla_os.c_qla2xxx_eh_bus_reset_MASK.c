
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fc_port {int dummy; } ;
struct TYPE_9__ {int host_no; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef struct fc_port fc_port_t ;
struct TYPE_8__ {unsigned int id; unsigned int lun; scalar_t__ hostdata; int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct scsi_cmnd *VAR_7)
{
 scsi_qla_host_t *VAR_8 = FUNC_5(VAR_7->device->host);
 fc_port_t *VAR_9 = (struct fc_port *) VAR_7->device->hostdata;
 int VAR_10 = VAR_0;
 unsigned int VAR_11, VAR_12;

 VAR_11 = VAR_7->device->id;
 VAR_12 = VAR_7->device->lun;

 if (!VAR_9) {
  return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 != 0)
  return VAR_10;
 VAR_10 = VAR_0;

 FUNC_1(VAR_5, VAR_8, 0x8012,
     "BUS RESET ISSUED nexus=%ld:%d:%d.\n", VAR_8->host_no, VAR_11, VAR_12);

 if (FUNC_4(VAR_8) != VAR_1) {
  FUNC_1(VAR_4, VAR_8, 0x8013,
      "Wait for hba online failed board disabled.\n");
  goto eh_bus_reset_done;
 }

 if (FUNC_3(VAR_8) == VAR_1)
  VAR_10 = VAR_2;

 if (VAR_10 == VAR_0)
  goto eh_bus_reset_done;


 if (FUNC_2(VAR_8, 0, 0, VAR_3) !=
     VAR_1) {
  FUNC_1(VAR_6, VAR_8, 0x8014,
      "Wait for pending commands failed.\n");
  VAR_10 = VAR_0;
 }

eh_bus_reset_done:
 FUNC_1(VAR_6, VAR_8, 0x802b,
     "BUS RESET %s nexus=%ld:%d:%d.\n",
     (VAR_10 == VAR_0) ? "FAILED" : "SUCCEEDED", VAR_8->host_no, VAR_11, VAR_12);

 return VAR_10;
}
