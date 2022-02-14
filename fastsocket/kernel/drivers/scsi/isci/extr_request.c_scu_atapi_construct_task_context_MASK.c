
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int lbal; int fis_type; } ;
struct TYPE_7__ {TYPE_5__ stp; } ;
struct scu_task_context {int sata_direction; int ssp_command_iu_length; int task_phase; int transfer_length_bytes; scalar_t__ stp_retry_count; TYPE_2__ type; int task_type; } ;
struct TYPE_9__ {int atapi_packet; } ;
struct sas_task {scalar_t__ data_dir; int total_xfer_len; TYPE_4__ ata_task; } ;
struct TYPE_8__ {TYPE_5__ cmd; } ;
struct isci_request {TYPE_3__ stp; struct scu_task_context* tc; TYPE_1__* target_device; } ;
struct ata_device {int cdb_len; } ;
struct TYPE_6__ {int domain_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sas_task* FUNC_0 (struct isci_request*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 struct ata_device* FUNC_3 (int ) ;
 int FUNC_4 (struct isci_request*) ;

__attribute__((used)) static void FUNC_5(struct isci_request *VAR_4)
{
 struct ata_device *VAR_5 = FUNC_3(VAR_4->target_device->domain_dev);
 struct sas_task *VAR_6 = FUNC_0(VAR_4);
 struct scu_task_context *VAR_7 = VAR_4->tc;
 int VAR_8 = VAR_5->cdb_len;




 if (VAR_6->data_dir == VAR_0) {
  VAR_7->task_type = VAR_3;
  VAR_7->sata_direction = 0;
 } else {

  VAR_7->task_type = VAR_2;
  VAR_7->sata_direction = 1;
 }

 FUNC_2(&VAR_7->type.stp, 0, sizeof(VAR_7->type.stp));
 VAR_7->type.stp.fis_type = VAR_1;

 FUNC_2(&VAR_4->stp.cmd, 0, sizeof(VAR_4->stp.cmd));
 FUNC_1(&VAR_4->stp.cmd.lbal, VAR_6->ata_task.atapi_packet, VAR_8);
 VAR_7->ssp_command_iu_length = VAR_8 / sizeof(u32);


 VAR_7->task_phase = 0x1;


 VAR_7->stp_retry_count = 0;


 VAR_7->transfer_length_bytes = VAR_6->total_xfer_len;


 FUNC_4(VAR_4);
}
