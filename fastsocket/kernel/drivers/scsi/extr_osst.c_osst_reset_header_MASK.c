
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osst_tape {int eod_frame_ppos; int first_data_ppos; int first_mark_ppos; int last_mark_ppos; int last_mark_lbn; scalar_t__ filemark_cnt; scalar_t__ frame_in_buffer; scalar_t__ frame_seq_number; scalar_t__ logical_blk_num; int * header_cache; } ;
struct osst_request {int dummy; } ;
typedef int os_header_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct osst_tape*,struct osst_request**,int) ;

__attribute__((used)) static int FUNC_2(struct osst_tape * VAR_0, struct osst_request ** VAR_1)
{
 if (VAR_0->header_cache != ((void*)0))
  FUNC_0(VAR_0->header_cache, 0, sizeof(os_header_t));

 VAR_0->logical_blk_num = VAR_0->frame_seq_number = 0;
 VAR_0->frame_in_buffer = 0;
 VAR_0->eod_frame_ppos = VAR_0->first_data_ppos = 0x0000000A;
 VAR_0->filemark_cnt = 0;
 VAR_0->first_mark_ppos = VAR_0->last_mark_ppos = VAR_0->last_mark_lbn = -1;
 return FUNC_1(VAR_0, VAR_1, 1);
}
