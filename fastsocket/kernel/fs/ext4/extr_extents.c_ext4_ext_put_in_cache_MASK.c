
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_ext_cache {int ec_start; scalar_t__ ec_len; int ec_block; } ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int i_block_reservation_lock; struct ext4_ext_cache i_cached_extent; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct inode *VAR_0, ext4_lblk_t VAR_1,
   __u32 VAR_2, ext4_fsblk_t VAR_3)
{
 struct ext4_ext_cache *VAR_4;
 FUNC_0(VAR_2 == 0);
 FUNC_2(&FUNC_1(VAR_0)->i_block_reservation_lock);
 VAR_4 = &FUNC_1(VAR_0)->i_cached_extent;
 VAR_4->ec_block = VAR_1;
 VAR_4->ec_len = VAR_2;
 VAR_4->ec_start = VAR_3;
 FUNC_3(&FUNC_1(VAR_0)->i_block_reservation_lock);
}
