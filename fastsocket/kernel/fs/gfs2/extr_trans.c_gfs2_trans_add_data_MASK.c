
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_trans {int tr_touched; int tr_num_databuf_new; } ;
struct gfs2_sbd {int sd_log_le_databuf; int sd_log_num_databuf; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_glock {int gl_flags; struct gfs2_sbd* gl_sbd; } ;
struct gfs2_bufdata {int bd_list; int bd_bh; struct gfs2_glock* bd_gl; } ;
struct buffer_head {struct gfs2_bufdata* b_private; TYPE_1__* b_page; } ;
struct address_space {int host; } ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;
struct TYPE_3__ {struct address_space* mapping; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct gfs2_bufdata* FUNC_1 (struct gfs2_glock*,struct buffer_head*,int *) ;
 int FUNC_2 (struct gfs2_sbd*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_sbd*,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct buffer_head*) ;

void FUNC_13(struct gfs2_glock *VAR_4, struct buffer_head *VAR_5)
{
 struct gfs2_trans *VAR_6 = VAR_2->journal_info;
 struct gfs2_sbd *VAR_7 = VAR_4->gl_sbd;
 struct address_space *VAR_8 = VAR_5->b_page->mapping;
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_8->host);
 struct gfs2_bufdata *VAR_10;

 if (!FUNC_3(VAR_9)) {
  FUNC_6(VAR_9);
  return;
 }

 FUNC_10(VAR_5);
 FUNC_4(VAR_7);
 VAR_10 = VAR_5->b_private;
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_7);
  FUNC_12(VAR_5);
  if (VAR_5->b_private == ((void*)0))
   VAR_10 = FUNC_1(VAR_4, VAR_5, &VAR_3);
  FUNC_10(VAR_5);
  FUNC_4(VAR_7);
 }
 FUNC_2(VAR_7, VAR_10->bd_gl == VAR_4);
 VAR_6->tr_touched = 1;
 if (FUNC_9(&VAR_10->bd_list)) {
  FUNC_11(VAR_1, &VAR_10->bd_gl->gl_flags);
  FUNC_11(VAR_0, &VAR_10->bd_gl->gl_flags);
  FUNC_7(VAR_7, VAR_10->bd_bh);
  VAR_6->tr_num_databuf_new++;
  VAR_7->sd_log_num_databuf++;
  FUNC_8(&VAR_10->bd_list, &VAR_7->sd_log_le_databuf);
 }
 FUNC_5(VAR_7);
 FUNC_12(VAR_5);
}
