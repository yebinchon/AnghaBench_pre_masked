
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_trans {int tr_touched; int tr_num_databuf_rm; int tr_num_buf_rm; } ;
struct gfs2_sbd {int sd_ail_lock; int sd_log_num_databuf; int sd_log_num_buf; } ;
struct gfs2_bufdata {int * bd_bh; int bd_blkno; scalar_t__ bd_ail; int bd_list; } ;
struct buffer_head {struct gfs2_bufdata* b_private; int b_blocknr; TYPE_1__* b_page; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* mapping; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_sbd*,int ) ;
 int VAR_0 ;
 struct gfs2_sbd* FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct gfs2_bufdata*) ;
 int FUNC_6 (struct gfs2_sbd*,struct gfs2_bufdata*) ;
 int FUNC_7 (int ,struct gfs2_bufdata*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct gfs2_bufdata*,int ) ;

void FUNC_13(struct buffer_head *VAR_1, struct gfs2_trans *VAR_2, int VAR_3)
{
 struct address_space *VAR_4 = VAR_1->b_page->mapping;
 struct gfs2_sbd *VAR_5 = FUNC_4(VAR_4);
 struct gfs2_bufdata *VAR_6 = VAR_1->b_private;
 int VAR_7 = 0;

 if (FUNC_11(VAR_1)) {
  FUNC_12(VAR_6, 0);
  FUNC_8(&VAR_6->bd_list);
  if (VAR_3) {
   FUNC_3(VAR_5, VAR_5->sd_log_num_buf);
   VAR_5->sd_log_num_buf--;
   VAR_2->tr_num_buf_rm++;
  } else {
   FUNC_3(VAR_5, VAR_5->sd_log_num_databuf);
   VAR_5->sd_log_num_databuf--;
   VAR_2->tr_num_databuf_rm++;
  }
  VAR_2->tr_touched = 1;
  FUNC_0(VAR_1);
  VAR_7 = 1;
 }
 if (VAR_6) {
  FUNC_9(&VAR_5->sd_ail_lock);
  if (VAR_6->bd_ail) {
   VAR_1->b_private = ((void*)0);
   VAR_6->bd_blkno = VAR_1->b_blocknr;
   FUNC_5(VAR_6);
   VAR_6->bd_bh = ((void*)0);
   FUNC_6(VAR_5, VAR_6);
  } else if (VAR_7) {
   VAR_1->b_private = ((void*)0);
   FUNC_7(VAR_0, VAR_6);
  }
  FUNC_10(&VAR_5->sd_ail_lock);
 }
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
}
