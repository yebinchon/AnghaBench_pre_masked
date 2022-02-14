
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int h_sync; TYPE_1__* i_sb; int i_ino; scalar_t__ i_size; int * i_fop; int * i_op; } ;
struct ext3_dir_entry_2 {int name_len; int name; void* rec_len; void* inode; } ;
struct dentry {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef struct inode handle_t ;
struct TYPE_7__ {scalar_t__ i_disksize; } ;
struct TYPE_6__ {scalar_t__ s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (struct inode*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int VAR_4 ;
 int FUNC_8 (struct buffer_head*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct dentry*,struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct dentry*,struct inode*) ;
 struct buffer_head* FUNC_13 (struct inode*,struct inode*,int ,int,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (struct inode*,struct buffer_head*) ;
 int FUNC_15 (struct inode*,struct buffer_head*) ;
 struct inode* FUNC_16 (struct inode*,scalar_t__) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,struct inode*) ;
 struct inode* FUNC_19 (struct inode*,struct inode*,int) ;
 struct ext3_dir_entry_2* FUNC_20 (struct ext3_dir_entry_2*) ;
 void* FUNC_21 (scalar_t__) ;
 int FUNC_22 (TYPE_1__*,struct ext3_dir_entry_2*,int) ;
 scalar_t__ FUNC_23 (TYPE_1__*,int*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (int ,char*) ;
 int FUNC_28 (struct inode*) ;

__attribute__((used)) static int FUNC_29(struct inode * VAR_7, struct dentry * VAR_8, int VAR_9)
{
 handle_t *VAR_10;
 struct inode * VAR_11;
 struct buffer_head * VAR_12;
 struct ext3_dir_entry_2 * VAR_13;
 int VAR_14, VAR_15 = 0;

 if (VAR_7->i_nlink >= VAR_3)
  return -VAR_0;

retry:
 VAR_10 = FUNC_16(VAR_7, FUNC_1(VAR_7->i_sb) +
     VAR_2 + 3 +
     2*FUNC_4(VAR_7->i_sb));
 if (FUNC_6(VAR_10))
  return FUNC_7(VAR_10);

 if (FUNC_5(VAR_7))
  VAR_10->h_sync = 1;

 VAR_11 = FUNC_19 (VAR_10, VAR_7, VAR_4 | VAR_9);
 VAR_14 = FUNC_7(VAR_11);
 if (FUNC_6(VAR_11))
  goto out_stop;

 VAR_11->i_op = &VAR_5;
 VAR_11->i_fop = &VAR_6;
 VAR_11->i_size = FUNC_3(VAR_11)->i_disksize = VAR_11->i_sb->s_blocksize;
 VAR_12 = FUNC_13 (VAR_10, VAR_11, 0, 1, &VAR_14);
 if (!VAR_12) {
  FUNC_11(VAR_11);
  FUNC_28(VAR_11);
  FUNC_18(VAR_10, VAR_11);
  FUNC_26 (VAR_11);
  goto out_stop;
 }
 FUNC_0(VAR_12, "get_write_access");
 FUNC_15(VAR_10, VAR_12);
 VAR_13 = (struct ext3_dir_entry_2 *) VAR_12->b_data;
 VAR_13->inode = FUNC_9(VAR_11->i_ino);
 VAR_13->name_len = 1;
 VAR_13->rec_len = FUNC_21(FUNC_2(VAR_13->name_len));
 FUNC_27 (VAR_13->name, ".");
 FUNC_22(VAR_7->i_sb, VAR_13, VAR_4);
 VAR_13 = FUNC_20(VAR_13);
 VAR_13->inode = FUNC_9(VAR_7->i_ino);
 VAR_13->rec_len = FUNC_21(VAR_11->i_sb->s_blocksize -
     FUNC_2(1));
 VAR_13->name_len = 2;
 FUNC_27 (VAR_13->name, "..");
 FUNC_22(VAR_7->i_sb, VAR_13, VAR_4);
 VAR_11->i_nlink = 2;
 FUNC_0(VAR_12, "call ext3_journal_dirty_metadata");
 FUNC_14(VAR_10, VAR_12);
 FUNC_8 (VAR_12);
 FUNC_18(VAR_10, VAR_11);
 VAR_14 = FUNC_12 (VAR_10, VAR_8, VAR_11);
 if (VAR_14) {
  VAR_11->i_nlink = 0;
  FUNC_28(VAR_11);
  FUNC_18(VAR_10, VAR_11);
  FUNC_26 (VAR_11);
  goto out_stop;
 }
 FUNC_25(VAR_7);
 FUNC_24(VAR_7);
 FUNC_18(VAR_10, VAR_7);
 FUNC_10(VAR_8, VAR_11);
 FUNC_28(VAR_11);
out_stop:
 FUNC_17(VAR_10);
 if (VAR_14 == -VAR_1 && FUNC_23(VAR_7->i_sb, &VAR_15))
  goto retry;
 return VAR_14;
}
