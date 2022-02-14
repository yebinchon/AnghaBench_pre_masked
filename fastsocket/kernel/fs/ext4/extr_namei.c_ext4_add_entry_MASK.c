
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; int s_blocksize_bits; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct ext4_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
struct TYPE_4__ {int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,struct dentry*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (int *,struct inode*,int*,int*) ;
 struct buffer_head* FUNC_4 (int *,struct inode*,int,int ,int*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int *,struct dentry*,struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,struct dentry*,struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_5, struct dentry *VAR_6,
     struct inode *VAR_7)
{
 struct inode *VAR_8 = VAR_6->d_parent->d_inode;
 struct buffer_head *VAR_9;
 struct ext4_dir_entry_2 *VAR_10;
 struct super_block *VAR_11;
 int VAR_12;
 int VAR_13=0;
 unsigned VAR_14;
 ext4_lblk_t VAR_15, VAR_16;

 VAR_11 = VAR_8->i_sb;
 VAR_14 = VAR_11->s_blocksize;
 if (!VAR_6->d_name.len)
  return -VAR_0;
 if (FUNC_9(VAR_8)) {
  VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_7);
  if (!VAR_12 || (VAR_12 != VAR_2))
   return VAR_12;
  FUNC_5(VAR_8, VAR_4);
  VAR_13++;
  FUNC_7(VAR_5, VAR_8);
 }
 VAR_16 = VAR_8->i_size >> VAR_11->s_blocksize_bits;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_15, 0, &VAR_12);
  if(!VAR_9)
   return VAR_12;
  VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, ((void*)0), VAR_9);
  if (VAR_12 != -VAR_1) {
   FUNC_2(VAR_9);
   return VAR_12;
  }

  if (VAR_16 == 1 && !VAR_13 &&
      FUNC_0(VAR_11, VAR_3))
   return FUNC_10(VAR_5, VAR_6, VAR_7, VAR_9);
  FUNC_2(VAR_9);
 }
 VAR_9 = FUNC_3(VAR_5, VAR_8, &VAR_15, &VAR_12);
 if (!VAR_9)
  return VAR_12;
 VAR_10 = (struct ext4_dir_entry_2 *) VAR_9->b_data;
 VAR_10->inode = 0;
 VAR_10->rec_len = FUNC_8(VAR_14, VAR_14);
 VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_10, VAR_9);
 FUNC_2(VAR_9);
 return VAR_12;
}
