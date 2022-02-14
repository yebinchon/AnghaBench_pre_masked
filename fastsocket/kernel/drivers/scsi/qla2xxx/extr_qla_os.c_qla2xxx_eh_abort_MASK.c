
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct qla_hw_data {int hardware_lock; TYPE_2__* isp_ops; } ;
struct TYPE_13__ {int (* done ) (struct qla_hw_data*,TYPE_3__*,int ) ;} ;
typedef TYPE_3__ srb_t ;
struct TYPE_14__ {int host_no; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_12__ {scalar_t__ (* abort_command ) (TYPE_3__*) ;} ;
struct TYPE_11__ {unsigned int id; unsigned int lun; int host; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int ,TYPE_4__*,int,char*,struct scsi_cmnd*,...) ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_4__*,int,char*,struct scsi_cmnd*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct qla_hw_data*,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_11(struct scsi_cmnd *VAR_6)
{
 scsi_qla_host_t *VAR_7 = FUNC_5(VAR_6->device->host);
 srb_t *VAR_8;
 int VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;
 struct qla_hw_data *VAR_14 = VAR_7->hw;

 if (!FUNC_0(VAR_6))
  return VAR_2;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 != 0)
  return VAR_9;
 VAR_9 = VAR_2;

 VAR_10 = VAR_6->device->id;
 VAR_11 = VAR_6->device->lun;

 FUNC_7(&VAR_14->hardware_lock, VAR_12);
 VAR_8 = (srb_t *) FUNC_0(VAR_6);
 if (!VAR_8) {
  FUNC_8(&VAR_14->hardware_lock, VAR_12);
  return VAR_2;
 }

 FUNC_2(VAR_3, VAR_7, 0x8002,
     "Aborting from RISC nexus=%ld:%d:%d sp=%p cmd=%p\n",
     VAR_7->host_no, VAR_10, VAR_11, VAR_8, VAR_6);


 FUNC_6(VAR_8);

 FUNC_8(&VAR_14->hardware_lock, VAR_12);
 if (VAR_14->isp_ops->abort_command(VAR_8)) {
  VAR_9 = VAR_0;
  FUNC_2(VAR_3, VAR_7, 0x8003,
      "Abort command mbx failed cmd=%p.\n", VAR_6);
 } else {
  FUNC_2(VAR_3, VAR_7, 0x8004,
      "Abort command mbx success cmd=%p.\n", VAR_6);
  VAR_13 = 1;
 }
 FUNC_7(&VAR_14->hardware_lock, VAR_12);
 VAR_8->done(VAR_14, VAR_8, 0);
 FUNC_8(&VAR_14->hardware_lock, VAR_12);


 if (VAR_9 == VAR_0 && !FUNC_0(VAR_6))
  VAR_9 = VAR_2;


 if (VAR_13) {
  if (FUNC_4(VAR_6) != VAR_1) {
   FUNC_3(VAR_5, VAR_7, 0x8006,
       "Abort handler timed out cmd=%p.\n", VAR_6);
   VAR_9 = VAR_0;
  }
 }

 FUNC_3(VAR_4, VAR_7, 0x801c,
     "Abort command issued nexus=%ld:%d:%d --  %d %x.\n",
     VAR_7->host_no, VAR_10, VAR_11, VAR_13, VAR_9);

 return VAR_9;
}
