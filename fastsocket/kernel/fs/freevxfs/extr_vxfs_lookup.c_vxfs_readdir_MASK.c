
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct vxfs_direct {char* d_name; int d_namelen; int d_ino; int d_reclen; } ;
struct vxfs_dirblk {int dummy; } ;
struct super_block {scalar_t__ s_blocksize; scalar_t__ s_blocksize_bits; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; int i_size; int i_ino; struct super_block* i_sb; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_2__ f_path; } ;
typedef scalar_t__ loff_t ;
typedef int (* filldir_t ) (void*,char*,int,scalar_t__,int ,int ) ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int vii_dotdot; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct vxfs_dirblk*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 () ;
 struct page* FUNC_11 (int ,scalar_t__) ;
 struct vxfs_direct* FUNC_12 (struct vxfs_direct*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int
FUNC_14(struct file *VAR_4, void *VAR_5, filldir_t VAR_6)
{
 struct inode *VAR_7 = VAR_4->f_path.dentry->d_inode;
 struct super_block *VAR_8 = VAR_7->i_sb;
 u_long VAR_9 = VAR_8->s_blocksize;
 u_long VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 loff_t VAR_16;

 FUNC_8();

 switch ((long)VAR_4->f_pos) {
 case 0:
  if (VAR_6(VAR_5, ".", 1, VAR_4->f_pos, VAR_7->i_ino, VAR_0) < 0)
   goto out;
  VAR_4->f_pos++;

 case 1:
  if (VAR_6(VAR_5, "..", 2, VAR_4->f_pos, FUNC_5(VAR_7)->vii_dotdot, VAR_0) < 0)
   goto out;
  VAR_4->f_pos++;

 }

 VAR_16 = VAR_4->f_pos - 2;

 if (VAR_16 > FUNC_4(VAR_7->i_size)) {
  FUNC_10();
  return 0;
 }

 VAR_11 = FUNC_7(VAR_7);
 VAR_14 = FUNC_6(VAR_7);
 VAR_13 = FUNC_1(VAR_8);

 VAR_10 = VAR_16 >> VAR_3;
 VAR_15 = VAR_16 & ~VAR_2;
 VAR_12 = (u_long)(VAR_16 >> VAR_8->s_blocksize_bits) % VAR_13;

 for (; VAR_10 < VAR_11; VAR_10++, VAR_12 = 0) {
  caddr_t VAR_17;
  struct page *VAR_18;

  VAR_18 = FUNC_11(VAR_7->i_mapping, VAR_10);
  if (FUNC_0(VAR_18))
   continue;
  VAR_17 = (caddr_t)FUNC_9(VAR_18);

  for (; VAR_12 <= VAR_14 && VAR_12 <= VAR_13; VAR_12++) {
   caddr_t VAR_19, VAR_20;
   struct vxfs_dirblk *VAR_21;
   struct vxfs_direct *VAR_22;

   VAR_19 = VAR_17 + (VAR_12 * VAR_9);
   VAR_20 = VAR_19 + VAR_9 - FUNC_3(1);

   VAR_21 = (struct vxfs_dirblk *)VAR_19;
   VAR_22 = (struct vxfs_direct *)
    (VAR_15 ?
     (VAR_17 + VAR_15) :
     (VAR_19 + FUNC_2(VAR_21)));

   for (; (caddr_t)VAR_22 <= VAR_20; VAR_22 = FUNC_12(VAR_22)) {
    int VAR_23;

    if (!VAR_22->d_reclen)
     break;
    if (!VAR_22->d_ino)
     continue;

    VAR_15 = (caddr_t)VAR_22 - VAR_17;
    VAR_23 = VAR_6(VAR_5, VAR_22->d_name, VAR_22->d_namelen,
     ((VAR_10 << VAR_3) | VAR_15) + 2,
     VAR_22->d_ino, VAR_1);
    if (VAR_23) {
     FUNC_13(VAR_18);
     goto done;
    }
   }
   VAR_15 = 0;
  }
  FUNC_13(VAR_18);
  VAR_15 = 0;
 }

done:
 VAR_4->f_pos = ((VAR_10 << VAR_3) | VAR_15) + 2;
out:
 FUNC_10();
 return 0;
}
