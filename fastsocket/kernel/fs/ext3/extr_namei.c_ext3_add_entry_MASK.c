
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {unsigned int s_blocksize; int s_blocksize_bits; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct ext3_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
struct TYPE_5__ {int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_6__ {int i_flags; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (int *,struct dentry*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (int *,struct inode*,int*,int*) ;
 struct buffer_head* FUNC_5 (int *,struct inode*,int,int ,int*) ;
 int FUNC_6 (int *,struct dentry*,struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,struct dentry*,struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_11 (handle_t *VAR_5, struct dentry *VAR_6,
 struct inode *VAR_7)
{
 struct inode *VAR_8 = VAR_6->d_parent->d_inode;
 unsigned long VAR_9;
 struct buffer_head * VAR_10;
 struct ext3_dir_entry_2 *VAR_11;
 struct super_block * VAR_12;
 int VAR_13;
 int VAR_14=0;
 unsigned VAR_15;
 u32 VAR_16, VAR_17;

 VAR_12 = VAR_8->i_sb;
 VAR_15 = VAR_12->s_blocksize;
 if (!VAR_6->d_name.len)
  return -VAR_0;
 if (FUNC_9(VAR_8)) {
  VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7);
  if (!VAR_13 || (VAR_13 != VAR_2))
   return VAR_13;
  FUNC_1(VAR_8)->i_flags &= ~VAR_4;
  VAR_14++;
  FUNC_7(VAR_5, VAR_8);
 }
 VAR_17 = VAR_8->i_size >> VAR_12->s_blocksize_bits;
 for (VAR_16 = 0, VAR_9 = 0; VAR_16 < VAR_17; VAR_16++) {
  VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_16, 0, &VAR_13);
  if(!VAR_10)
   return VAR_13;
  VAR_13 = FUNC_2(VAR_5, VAR_6, VAR_7, ((void*)0), VAR_10);
  if (VAR_13 != -VAR_1)
   return VAR_13;

  if (VAR_17 == 1 && !VAR_14 &&
      FUNC_0(VAR_12, VAR_3))
   return FUNC_10(VAR_5, VAR_6, VAR_7, VAR_10);
  FUNC_3(VAR_10);
 }
 VAR_10 = FUNC_4(VAR_5, VAR_8, &VAR_16, &VAR_13);
 if (!VAR_10)
  return VAR_13;
 VAR_11 = (struct ext3_dir_entry_2 *) VAR_10->b_data;
 VAR_11->inode = 0;
 VAR_11->rec_len = FUNC_8(VAR_15);
 return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_11, VAR_10);
}
