
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct gfs2_trans {scalar_t__ tr_num_buf_new; } ;
struct gfs2_sbd {struct inode* sd_rindex; scalar_t__ sd_rindex_uptodate; struct inode* sd_statfs_inode; } ;
struct gfs2_inode {int i_gh; TYPE_2__* i_res; int i_gl; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
struct TYPE_6__ {struct gfs2_trans* journal_info; } ;
struct TYPE_5__ {scalar_t__ rs_qa_qd_num; } ;
struct TYPE_4__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct buffer_head*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gfs2_inode*) ;
 scalar_t__ FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*) ;
 int FUNC_13 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_14 (struct gfs2_inode*,struct page*,unsigned int,unsigned int) ;
 int FUNC_15 (struct gfs2_inode*) ;
 int FUNC_16 (struct inode*,struct buffer_head*,int,unsigned int,unsigned int,struct page*) ;
 int FUNC_17 (int ,struct buffer_head*) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_3, struct address_space *VAR_4,
     loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
     struct page *VAR_8, void *VAR_9)
{
 struct inode *VAR_10 = VAR_8->mapping->host;
 struct gfs2_inode *VAR_11 = FUNC_1(VAR_10);
 struct gfs2_sbd *VAR_12 = FUNC_2(VAR_10);
 struct gfs2_inode *VAR_13 = FUNC_1(VAR_12->sd_statfs_inode);
 struct buffer_head *VAR_14;
 unsigned int VAR_15 = VAR_5 & (VAR_1 - 1);
 unsigned int VAR_16 = VAR_15 + VAR_6;
 int VAR_17;
 struct gfs2_trans *VAR_18 = VAR_2->journal_info;
 FUNC_0(!VAR_18);

 FUNC_0(FUNC_8(VAR_11->i_gl) == ((void*)0));

 VAR_17 = FUNC_13(VAR_11, &VAR_14);
 if (FUNC_20(VAR_17)) {
  FUNC_21(VAR_8);
  FUNC_19(VAR_8);
  goto failed;
 }

 if (FUNC_11(VAR_11))
  return FUNC_16(VAR_10, VAR_14, VAR_5, VAR_6, VAR_7, VAR_8);

 if (!FUNC_12(VAR_11))
  FUNC_14(VAR_11, VAR_8, VAR_15, VAR_16);

 VAR_17 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_18->tr_num_buf_new)
  FUNC_3(VAR_10, VAR_0);
 else
  FUNC_17(VAR_11->i_gl, VAR_14);


 if (VAR_10 == VAR_12->sd_rindex) {
  FUNC_4(VAR_10);
  VAR_12->sd_rindex_uptodate = 0;
 }

 FUNC_5(VAR_14);
failed:
 FUNC_18(VAR_12);
 FUNC_10(VAR_11);
 if (VAR_11->i_res->rs_qa_qd_num)
  FUNC_15(VAR_11);
 if (VAR_10 == VAR_12->sd_rindex) {
  FUNC_7(&VAR_13->i_gh);
  FUNC_9(&VAR_13->i_gh);
 }
 FUNC_7(&VAR_11->i_gh);
 FUNC_9(&VAR_11->i_gh);
 return VAR_17;
}
