
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct osst_tape {int update_frame_cntr; int first_mark_ppos; int wrt_pass_cntr; int first_data_ppos; int capacity; int filemark_cnt; int last_mark_ppos; int last_mark_lbn; scalar_t__ raw; TYPE_1__* buffer; } ;
struct TYPE_9__ {void* last_frame_ppos; void* first_frame_ppos; void* wrt_pass_cntr; void* par_desc_ver; int partition_num; } ;
typedef TYPE_3__ os_partition_t ;
struct TYPE_10__ {int dat_sz; int entry_cnt; TYPE_2__* dat_list; int reserved3; int reserved1; } ;
typedef TYPE_4__ os_dat_t ;
struct TYPE_11__ {int frame_type; void* last_mark_lbn; void* last_mark_ppos; void* phys_fm; void* filemark_cnt; void* logical_blk_num; void* logical_blk_num_high; void* frame_seq_num; void* update_frame_cntr; void* next_mark_ppos; void* hdwr; int application_sig; void* format_id; TYPE_4__ dat; TYPE_3__ partition; } ;
typedef TYPE_5__ os_aux_t ;
struct TYPE_8__ {int reserved; int flags; void* blk_cnt; void* blk_sz; } ;
struct TYPE_7__ {TYPE_5__* aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 void* VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct osst_tape * VAR_5, int VAR_6, int VAR_7,
      int VAR_8, int VAR_9, int VAR_10)
{
 os_aux_t *VAR_11 = VAR_5->buffer->aux;
 os_partition_t *VAR_12 = &VAR_11->partition;
 os_dat_t *VAR_13 = &VAR_11->dat;

 if (VAR_5->raw) return;

 FUNC_3(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->format_id = FUNC_0(0);
 FUNC_2(VAR_11->application_sig, "LIN4", 4);
 VAR_11->hdwr = FUNC_0(0);
 VAR_11->frame_type = VAR_6;

 switch (VAR_6) {
   case 129:
  VAR_11->update_frame_cntr = FUNC_0(VAR_5->update_frame_cntr);
  VAR_12->partition_num = VAR_0;
  VAR_12->par_desc_ver = VAR_4;
  VAR_12->wrt_pass_cntr = FUNC_1(0xffff);

  VAR_12->first_frame_ppos = FUNC_0(0);
  VAR_12->last_frame_ppos = FUNC_0(0xbb7);
  VAR_11->frame_seq_num = FUNC_0(0);
  VAR_11->logical_blk_num_high = FUNC_0(0);
  VAR_11->logical_blk_num = FUNC_0(0);
  VAR_11->next_mark_ppos = FUNC_0(VAR_5->first_mark_ppos);
  break;
   case 131:
   case 128:
  VAR_13->dat_sz = 8;
  VAR_13->reserved1 = 0;
  VAR_13->entry_cnt = 1;
  VAR_13->reserved3 = 0;
  VAR_13->dat_list[0].blk_sz = FUNC_0(VAR_9);
  VAR_13->dat_list[0].blk_cnt = FUNC_1(VAR_10);
  VAR_13->dat_list[0].flags = VAR_6==128?
       VAR_3:VAR_2;
  VAR_13->dat_list[0].reserved = 0;
   case 130:
  VAR_11->update_frame_cntr = FUNC_0(0);
  VAR_12->partition_num = VAR_1;
  VAR_12->par_desc_ver = VAR_4;
  VAR_12->wrt_pass_cntr = FUNC_1(VAR_5->wrt_pass_cntr);
  VAR_12->first_frame_ppos = FUNC_0(VAR_5->first_data_ppos);
  VAR_12->last_frame_ppos = FUNC_0(VAR_5->capacity);
  VAR_11->frame_seq_num = FUNC_0(VAR_7);
  VAR_11->logical_blk_num_high = FUNC_0(0);
  VAR_11->logical_blk_num = FUNC_0(VAR_8);
  break;
   default: ;
 }
 VAR_11->filemark_cnt = FUNC_0(VAR_5->filemark_cnt);
 VAR_11->phys_fm = FUNC_0(0xffffffff);
 VAR_11->last_mark_ppos = FUNC_0(VAR_5->last_mark_ppos);
 VAR_11->last_mark_lbn = FUNC_0(VAR_5->last_mark_lbn);
}
