
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_idx {int ei_leaf_hi; int ei_leaf_lo; } ;
typedef int ext4_fsblk_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline ext4_fsblk_t FUNC_2(struct ext4_extent_idx *VAR_0)
{
 ext4_fsblk_t VAR_1;

 VAR_1 = FUNC_1(VAR_0->ei_leaf_lo);
 VAR_1 |= ((ext4_fsblk_t) FUNC_0(VAR_0->ei_leaf_hi) << 31) << 1;
 return VAR_1;
}
