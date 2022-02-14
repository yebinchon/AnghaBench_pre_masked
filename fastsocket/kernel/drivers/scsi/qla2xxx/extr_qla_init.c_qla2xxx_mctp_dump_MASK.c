
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nic_core_reset_hdlr_active; } ;
struct qla_hw_data {int mctp_dumped; TYPE_2__ flags; scalar_t__ mctp_dump; int mctp_dump_dma; TYPE_1__* pdev; } ;
struct TYPE_11__ {int host_no; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int,char*) ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_3__*,int ,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;

int
FUNC_6(scsi_qla_host_t *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 int VAR_10 = VAR_3;

 if (!FUNC_0(VAR_9)) {

  FUNC_3(VAR_6, VAR_8, 0x506d,
      "This board is not MCTP capable\n");
  return VAR_10;
 }

 if (!VAR_9->mctp_dump) {
  VAR_9->mctp_dump = FUNC_1(&VAR_9->pdev->dev,
      VAR_1, &VAR_9->mctp_dump_dma, VAR_0);

  if (!VAR_9->mctp_dump) {
   FUNC_3(VAR_7, VAR_8, 0x506e,
       "Failed to allocate memory for mctp dump\n");
   return VAR_10;
  }
 }


 VAR_10 = FUNC_4(VAR_8, VAR_9->mctp_dump_dma,
     0x00000000, VAR_1/4);
 if (VAR_10 != VAR_4) {
  FUNC_3(VAR_7, VAR_8, 0x506f,
      "Failed to capture mctp dump\n");
 } else {
  FUNC_3(VAR_6, VAR_8, 0x5070,
      "Mctp dump capture for host (%ld/%p).\n",
      VAR_8->host_no, VAR_9->mctp_dump);
  VAR_9->mctp_dumped = 1;
 }

 if (!VAR_9->flags.nic_core_reset_hdlr_active) {
  VAR_9->flags.nic_core_reset_hdlr_active = 1;
  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10)

   FUNC_3(VAR_7, VAR_8, 0x5071,
       "Failed to restart nic firmware\n");
  else
   FUNC_2(VAR_5, VAR_8, 0xb084,
       "Restarted NIC firmware successfully.\n");
  VAR_9->flags.nic_core_reset_hdlr_active = 0;
 }

 return VAR_10;

}
