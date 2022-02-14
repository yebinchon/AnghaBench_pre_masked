
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {unsigned int i_size; int i_nlink; TYPE_1__* i_sb; int i_ino; int * i_fop; int * i_op; } ;
struct ext4_dir_entry_2 {int name_len; int name; void* rec_len; void* inode; } ;
struct dentry {int d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef struct inode handle_t ;
struct TYPE_7__ {unsigned int i_disksize; } ;
struct TYPE_6__ {unsigned int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (struct inode*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int VAR_3 ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (struct dentry*,struct inode*) ;
 int FUNC_13 (struct inode*,struct dentry*,struct inode*) ;
 struct buffer_head* FUNC_14 (struct inode*,struct inode*,int ,int,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (struct inode*,struct inode*,struct buffer_head*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,struct inode*) ;
 int FUNC_18 (struct inode*,struct buffer_head*) ;
 struct inode* FUNC_19 (struct inode*,scalar_t__) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*,struct inode*) ;
 struct inode* FUNC_22 (struct inode*,struct inode*,int,int *,int ) ;
 struct ext4_dir_entry_2* FUNC_23 (struct ext4_dir_entry_2*,unsigned int) ;
 void* FUNC_24 (int ,unsigned int) ;
 int FUNC_25 (TYPE_1__*,struct ext4_dir_entry_2*,int) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (int ,char*) ;
 int FUNC_30 (struct inode*) ;

__attribute__((used)) static int FUNC_31(struct inode *VAR_6, struct dentry *VAR_7, int VAR_8)
{
 handle_t *VAR_9;
 struct inode *VAR_10;
 struct buffer_head *VAR_11;
 struct ext4_dir_entry_2 *VAR_12;
 unsigned int VAR_13 = VAR_6->i_sb->s_blocksize;
 int VAR_14, VAR_15 = 0;

 if (FUNC_2(VAR_6))
  return -VAR_0;

retry:
 VAR_9 = FUNC_19(VAR_6, FUNC_1(VAR_6->i_sb) +
     VAR_2 + 3 +
     FUNC_5(VAR_6->i_sb));
 if (FUNC_7(VAR_9))
  return FUNC_8(VAR_9);

 if (FUNC_6(VAR_6))
  FUNC_16(VAR_9);

 VAR_10 = FUNC_22(VAR_9, VAR_6, VAR_3 | VAR_8,
          &VAR_7->d_name, 0);
 VAR_14 = FUNC_8(VAR_10);
 if (FUNC_7(VAR_10))
  goto out_stop;

 VAR_10->i_op = &VAR_4;
 VAR_10->i_fop = &VAR_5;
 VAR_10->i_size = FUNC_4(VAR_10)->i_disksize = VAR_10->i_sb->s_blocksize;
 VAR_11 = FUNC_14(VAR_9, VAR_10, 0, 1, &VAR_14);
 if (!VAR_11)
  goto out_clear_inode;
 FUNC_0(VAR_11, "get_write_access");
 FUNC_18(VAR_9, VAR_11);
 VAR_12 = (struct ext4_dir_entry_2 *) VAR_11->b_data;
 VAR_12->inode = FUNC_11(VAR_10->i_ino);
 VAR_12->name_len = 1;
 VAR_12->rec_len = FUNC_24(FUNC_3(VAR_12->name_len),
        VAR_13);
 FUNC_29(VAR_12->name, ".");
 FUNC_25(VAR_6->i_sb, VAR_12, VAR_3);
 VAR_12 = FUNC_23(VAR_12, VAR_13);
 VAR_12->inode = FUNC_11(VAR_6->i_ino);
 VAR_12->rec_len = FUNC_24(VAR_13 - FUNC_3(1),
        VAR_13);
 VAR_12->name_len = 2;
 FUNC_29(VAR_12->name, "..");
 FUNC_25(VAR_6->i_sb, VAR_12, VAR_3);
 VAR_10->i_nlink = 2;
 FUNC_0(VAR_11, "call ext4_handle_dirty_metadata");
 FUNC_15(VAR_9, VAR_10, VAR_11);
 FUNC_9(VAR_11);
 FUNC_21(VAR_9, VAR_10);
 VAR_14 = FUNC_13(VAR_9, VAR_7, VAR_10);
 if (VAR_14) {
out_clear_inode:
  FUNC_10(VAR_10);
  FUNC_30(VAR_10);
  FUNC_21(VAR_9, VAR_10);
  FUNC_28(VAR_10);
  goto out_stop;
 }
 FUNC_17(VAR_9, VAR_6);
 FUNC_27(VAR_6);
 FUNC_21(VAR_9, VAR_6);
 FUNC_12(VAR_7, VAR_10);
 FUNC_30(VAR_10);
out_stop:
 FUNC_20(VAR_9);
 if (VAR_14 == -VAR_1 && FUNC_26(VAR_6->i_sb, &VAR_15))
  goto retry;
 return VAR_14;
}
