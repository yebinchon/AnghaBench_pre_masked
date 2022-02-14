
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct ext3_dir_entry_2 {int dummy; } ;
struct dx_hash_info {scalar_t__ hash_version; int hash; scalar_t__ minor_hash; int seed; } ;
struct dx_frame {int at; TYPE_3__* bh; } ;
typedef int __u32 ;
struct TYPE_10__ {int i_flags; } ;
struct TYPE_9__ {scalar_t__ s_def_hash_version; scalar_t__ s_hash_unsigned; int s_hash_seed; } ;
struct TYPE_8__ {scalar_t__ b_data; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct dx_frame* FUNC_3 (int *,struct inode*,struct dx_hash_info*,struct dx_frame*,int*) ;
 int FUNC_4 (struct dx_frame*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ,struct dx_frame*,struct dx_frame*,int*) ;
 int FUNC_7 (struct file*,int,int ,struct ext3_dir_entry_2*) ;
 struct ext3_dir_entry_2* FUNC_8 (struct ext3_dir_entry_2*) ;
 int FUNC_9 (struct file*,struct inode*,int,struct dx_hash_info*,int,int) ;
 int FUNC_10 (char*,int,int) ;

int FUNC_11(struct file *VAR_3, __u32 VAR_4,
    __u32 VAR_5, __u32 *VAR_6)
{
 struct dx_hash_info VAR_7;
 struct ext3_dir_entry_2 *VAR_8;
 struct dx_frame VAR_9[2], *VAR_10;
 struct inode *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 __u32 VAR_16;

 FUNC_5(FUNC_10("In htree_fill_tree, start hash: %x:%x\n", VAR_4,
         VAR_5));
 VAR_11 = VAR_3->f_path.dentry->d_inode;
 if (!(FUNC_0(VAR_11)->i_flags & VAR_1)) {
  VAR_7.hash_version = FUNC_1(VAR_11->i_sb)->s_def_hash_version;
  if (VAR_7.hash_version <= VAR_0)
   VAR_7.hash_version +=
    FUNC_1(VAR_11->i_sb)->s_hash_unsigned;
  VAR_7.seed = FUNC_1(VAR_11->i_sb)->s_hash_seed;
  VAR_14 = FUNC_9(VAR_3, VAR_11, 0, &VAR_7,
            VAR_4, VAR_5);
  *VAR_6 = ~0;
  return VAR_14;
 }
 VAR_7.hash = VAR_4;
 VAR_7.minor_hash = 0;
 VAR_10 = FUNC_3(((void*)0), VAR_3->f_path.dentry->d_inode, &VAR_7, VAR_9, &VAR_13);
 if (!VAR_10)
  return VAR_13;


 if (!VAR_4 && !VAR_5) {
  VAR_8 = (struct ext3_dir_entry_2 *) VAR_9[0].bh->b_data;
  if ((VAR_13 = FUNC_7(VAR_3, 0, 0, VAR_8)) != 0)
   goto errout;
  VAR_14++;
 }
 if (VAR_4 < 2 || (VAR_4 ==2 && VAR_5==0)) {
  VAR_8 = (struct ext3_dir_entry_2 *) VAR_9[0].bh->b_data;
  VAR_8 = FUNC_8(VAR_8);
  if ((VAR_13 = FUNC_7(VAR_3, 2, 0, VAR_8)) != 0)
   goto errout;
  VAR_14++;
 }

 while (1) {
  VAR_12 = FUNC_2(VAR_10->at);
  VAR_15 = FUNC_9(VAR_3, VAR_11, VAR_12, &VAR_7,
          VAR_4, VAR_5);
  if (VAR_15 < 0) {
   VAR_13 = VAR_15;
   goto errout;
  }
  VAR_14 += VAR_15;
  VAR_16 = ~0;
  VAR_15 = FUNC_6(VAR_11, VAR_2,
         VAR_10, VAR_9, &VAR_16);
  *VAR_6 = VAR_16;
  if (VAR_15 < 0) {
   VAR_13 = VAR_15;
   goto errout;
  }





  if ((VAR_15 == 0) ||
      (VAR_14 && ((VAR_16 & 1) == 0)))
   break;
 }
 FUNC_4(VAR_9);
 FUNC_5(FUNC_10("Fill tree: returned %d entries, next hash: %x\n",
         VAR_14, *VAR_6));
 return VAR_14;
errout:
 FUNC_4(VAR_9);
 return (VAR_13);
}
