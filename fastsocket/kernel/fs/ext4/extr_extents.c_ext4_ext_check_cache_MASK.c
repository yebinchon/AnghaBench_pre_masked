
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_ext_cache {scalar_t__ ec_len; int ec_start; int ec_block; } ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_block_reservation_lock; struct ext4_ext_cache i_cached_extent; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct ext4_ext_cache*,struct ext4_ext_cache*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, ext4_lblk_t VAR_1,
 struct ext4_ext_cache *VAR_2){
 struct ext4_ext_cache *VAR_3;
 int VAR_4 = 0;




 FUNC_4(&FUNC_0(VAR_0)->i_block_reservation_lock);
 VAR_3 = &FUNC_0(VAR_0)->i_cached_extent;


 if (VAR_3->ec_len == 0)
  goto errout;

 if (FUNC_2(VAR_1, VAR_3->ec_block, VAR_3->ec_len)) {
  FUNC_3(VAR_2, VAR_3, sizeof(struct ext4_ext_cache));
  FUNC_1("%u cached by %u:%u:%llu\n",
    VAR_1,
    VAR_3->ec_block, VAR_3->ec_len, VAR_3->ec_start);
  VAR_4 = 1;
 }
errout:
 FUNC_5(&FUNC_0(VAR_0)->i_block_reservation_lock);
 return VAR_4;
}
