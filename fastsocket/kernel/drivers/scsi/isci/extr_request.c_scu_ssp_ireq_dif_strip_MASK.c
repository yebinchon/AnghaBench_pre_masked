
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int crc_verify; int op; int ref_tag_chk; int app_f_detect; int app_ref_f_detect; } ;
struct scu_task_context {int block_guard_enable; int blk_prot_en; int blk_sz; int blk_prot_func; int ref_tag_seed_verify; int DIF_bytes_immed_val; scalar_t__ ref_tag_seed_gen; scalar_t__ reserved_E8_0; scalar_t__ blk_guard_err; scalar_t__ app_tag_verify_mask; TYPE_3__ bgctl_f; scalar_t__ bgctl; scalar_t__ app_tag_gen_mask; scalar_t__ reserved_E0_0; int bgc_blk_sz; scalar_t__ reserved_DC_1; scalar_t__ reserved_DC_0; int UD_bytes_immed_val; scalar_t__ app_tag_gen; scalar_t__ app_tag_verify; scalar_t__ init_crc_seed; scalar_t__ interm_crc_val; int transfer_length_bytes; } ;
struct scsi_cmnd {TYPE_4__* device; } ;
struct TYPE_6__ {TYPE_1__* io_task_ptr; } ;
struct isci_request {TYPE_2__ ttype_ptr; struct scu_task_context* tc; } ;
struct TYPE_8__ {int sector_size; } ;
struct TYPE_5__ {struct scsi_cmnd* uldd_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct isci_request *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct scu_task_context *VAR_6 = VAR_3->tc;
 struct scsi_cmnd *VAR_7 = VAR_3->ttype_ptr.io_task_ptr->uldd_task;
 u8 VAR_8 = FUNC_1(VAR_7->device);

 VAR_6->block_guard_enable = 1;
 VAR_6->blk_prot_en = 1;
 VAR_6->blk_sz = VAR_8;

 VAR_6->blk_prot_func = 0x1;

 VAR_6->transfer_length_bytes += FUNC_2(VAR_6->transfer_length_bytes,
         VAR_7->device->sector_size);


 VAR_6->interm_crc_val = 0;

 VAR_6->init_crc_seed = 0;
 VAR_6->app_tag_verify = 0;
 VAR_6->app_tag_gen = 0;

 if ((VAR_4 & VAR_0) || (VAR_4 & VAR_1))
  VAR_6->ref_tag_seed_verify = FUNC_0(VAR_7) & 0xffffffff;
 else if (VAR_4 & VAR_2)
  VAR_6->ref_tag_seed_verify = 0;


 VAR_6->UD_bytes_immed_val = VAR_7->device->sector_size;

 VAR_6->reserved_DC_0 = 0;


 VAR_6->DIF_bytes_immed_val = 8;

 VAR_6->reserved_DC_1 = 0;
 VAR_6->bgc_blk_sz = VAR_7->device->sector_size;
 VAR_6->reserved_E0_0 = 0;
 VAR_6->app_tag_gen_mask = 0;


 VAR_6->bgctl = 0;


 VAR_6->bgctl_f.crc_verify = 1;
 VAR_6->bgctl_f.op = 0x1;
 if ((VAR_4 & VAR_0) || (VAR_4 & VAR_1)) {
  VAR_6->bgctl_f.ref_tag_chk = 1;
  VAR_6->bgctl_f.app_f_detect = 1;
 } else if (VAR_4 & VAR_2)
  VAR_6->bgctl_f.app_ref_f_detect = 1;

 VAR_6->app_tag_verify_mask = 0;


 VAR_6->blk_guard_err = 0;

 VAR_6->reserved_E8_0 = 0;
 VAR_6->ref_tag_seed_gen = 0;
}
