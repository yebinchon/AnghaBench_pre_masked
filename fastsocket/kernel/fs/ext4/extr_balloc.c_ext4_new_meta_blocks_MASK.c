
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_allocation_request {unsigned long len; unsigned int flags; int goal; struct inode* inode; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
typedef int ar ;
struct TYPE_2__ {unsigned long i_allocated_meta_blocks; int i_block_reservation_lock; scalar_t__ i_delalloc_reserved_flag; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,struct ext4_allocation_request*,int*) ;
 int FUNC_2 (struct ext4_allocation_request*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,unsigned long) ;

ext4_fsblk_t FUNC_6(handle_t *VAR_0, struct inode *VAR_1,
      ext4_fsblk_t VAR_2, unsigned int VAR_3,
      unsigned long *VAR_4, int *VAR_5)
{
 struct ext4_allocation_request VAR_6;
 ext4_fsblk_t VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.inode = VAR_1;
 VAR_6.goal = VAR_2;
 VAR_6.len = VAR_4 ? *VAR_4 : 1;
 VAR_6.flags = VAR_3;

 VAR_7 = FUNC_1(VAR_0, &VAR_6, VAR_5);
 if (VAR_4)
  *VAR_4 = VAR_6.len;




 if (!(*VAR_5) && FUNC_0(VAR_1)->i_delalloc_reserved_flag) {
  FUNC_3(&FUNC_0(VAR_1)->i_block_reservation_lock);
  FUNC_0(VAR_1)->i_allocated_meta_blocks += VAR_6.len;
  FUNC_4(&FUNC_0(VAR_1)->i_block_reservation_lock);
  FUNC_5(VAR_1, VAR_6.len);
 }
 return VAR_7;
}
