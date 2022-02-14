
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {unsigned long blocks; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {unsigned long i_reserved_data_blocks; int i_block_reservation_lock; } ;
struct TYPE_3__ {unsigned long s_blocksize_bits; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct vfsmount *VAR_0, struct dentry *VAR_1,
   struct kstat *VAR_2)
{
 struct inode *VAR_3;
 unsigned long VAR_4;

 VAR_3 = VAR_1->d_inode;
 FUNC_1(VAR_3, VAR_2);
 FUNC_2(&FUNC_0(VAR_3)->i_block_reservation_lock);
 VAR_4 = FUNC_0(VAR_3)->i_reserved_data_blocks;
 FUNC_3(&FUNC_0(VAR_3)->i_block_reservation_lock);

 VAR_2->blocks += (VAR_4 << VAR_3->i_sb->s_blocksize_bits)>>9;
 return 0;
}
