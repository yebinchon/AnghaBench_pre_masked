
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; TYPE_1__* request; } ;
typedef struct fc_port fc_port ;
struct TYPE_10__ {int host_no; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef struct fc_port fc_port_t ;
typedef enum nexus_wait_type { ____Placeholder_nexus_wait_type } nexus_wait_type ;
struct TYPE_9__ {unsigned int lun; int id; scalar_t__ hostdata; int host; } ;
struct TYPE_8__ {int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,unsigned int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int * VAR_5 ;
 TYPE_3__* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(char *VAR_6, enum nexus_wait_type VAR_7,
    struct scsi_cmnd *VAR_8, int (*VAR_9)(struct fc_port *, unsigned int, int))
{
 scsi_qla_host_t *VAR_10 = FUNC_4(VAR_8->device->host);
 fc_port_t *VAR_11 = (struct fc_port *) VAR_8->device->hostdata;
 int VAR_12;

 if (!VAR_11) {
  return VAR_0;
 }
 VAR_12 = FUNC_0(VAR_8);
 if (VAR_12 != 0)
  return VAR_12;

 FUNC_1(VAR_3, VAR_10, 0x8009,
     "%s RESET ISSUED nexus=%ld:%d:%d cmd=%p.\n", VAR_6, VAR_10->host_no,
     VAR_8->device->id, VAR_8->device->lun, VAR_8);

 VAR_12 = 0;
 if (FUNC_3(VAR_10) != VAR_1) {
  FUNC_1(VAR_4, VAR_10, 0x800a,
      "Wait for hba online failed for cmd=%p.\n", VAR_8);
  goto eh_reset_failed;
 }
 VAR_12 = 2;
 if (VAR_9(VAR_11, VAR_8->device->lun, VAR_8->request->cpu + 1)
  != VAR_1) {
  FUNC_1(VAR_4, VAR_10, 0x800c,
      "do_reset failed for cmd=%p.\n", VAR_8);
  goto eh_reset_failed;
 }
 VAR_12 = 3;
 if (FUNC_2(VAR_10, VAR_8->device->id,
     VAR_8->device->lun, VAR_7) != VAR_1) {
  goto eh_reset_failed;
  FUNC_1(VAR_4, VAR_10, 0x800d,
      "wait for pending cmds failed for cmd=%p.\n", VAR_8);
 }
 FUNC_1(VAR_3, VAR_10, 0x800e,
     "%s RESET SUCCEEDED nexus:%ld:%d:%d cmd=%p.\n", VAR_6,
     VAR_10->host_no, VAR_8->device->id, VAR_8->device->lun, VAR_8);

 return VAR_2;

eh_reset_failed:
 FUNC_1(VAR_3, VAR_10, 0x800f,
     "%s RESET FAILED: %s nexus=%ld:%d:%d cmd=%p.\n", VAR_6,
     VAR_5[VAR_12], VAR_10->host_no, VAR_8->device->id, VAR_8->device->lun,
     VAR_8);
 return VAR_0;
}
