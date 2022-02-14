
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* cdb; int request_type; } ;
struct ipr_ioarcb {TYPE_3__ cmd_pkt; int res_handle; } ;
struct ipr_ioa_cfg {int dual_raid; int cfg_table_size; int cfg_table_dma; TYPE_2__* pdev; TYPE_1__* vpd_cbs; } ;
struct ipr_inquiry_page3 {int * minor_release; int card_type; int major_release; } ;
struct ipr_inquiry_cap {int cap; } ;
struct ipr_cmnd {int job_step; struct ipr_ioarcb ioarcb; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct ipr_inquiry_cap cap; struct ipr_inquiry_page3 page3_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ipr_cmnd*,int ,int ,int ) ;
 int FUNC_3 (struct ipr_cmnd*,int ,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_12)
{
 struct ipr_ioa_cfg *VAR_13 = VAR_12->ioa_cfg;
 struct ipr_ioarcb *VAR_14 = &VAR_12->ioarcb;
 struct ipr_inquiry_page3 *VAR_15 = &VAR_13->vpd_cbs->page3_data;
 struct ipr_inquiry_cap *VAR_16 = &VAR_13->vpd_cbs->cap;

 VAR_0;
 if (VAR_16->cap & VAR_1)
  VAR_13->dual_raid = 1;
 FUNC_1(&VAR_13->pdev->dev, "Adapter firmware version: %02X%02X%02X%02X\n",
   VAR_15->major_release, VAR_15->card_type,
   VAR_15->minor_release[0], VAR_15->minor_release[1]);
 VAR_14->cmd_pkt.request_type = VAR_7;
 VAR_14->res_handle = FUNC_0(VAR_4);

 VAR_14->cmd_pkt.cdb[0] = VAR_5;
 VAR_14->cmd_pkt.cdb[6] = (VAR_13->cfg_table_size >> 16) & 0xff;
 VAR_14->cmd_pkt.cdb[7] = (VAR_13->cfg_table_size >> 8) & 0xff;
 VAR_14->cmd_pkt.cdb[8] = VAR_13->cfg_table_size & 0xff;

 FUNC_3(VAR_12, VAR_13->cfg_table_dma, VAR_13->cfg_table_size,
         VAR_3);

 VAR_12->job_step = VAR_9;

 FUNC_2(VAR_12, VAR_10, VAR_11, VAR_2);

 VAR_8;
 return VAR_6;
}
