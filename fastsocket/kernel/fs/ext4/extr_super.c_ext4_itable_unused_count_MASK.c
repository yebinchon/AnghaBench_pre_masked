
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {int bg_itable_unused_hi; int bg_itable_unused_lo; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__u32 FUNC_2(struct super_block *VAR_1,
         struct ext4_group_desc *VAR_2)
{
 return FUNC_1(VAR_2->bg_itable_unused_lo) |
  (FUNC_0(VAR_1) >= VAR_0 ?
   (__u32)FUNC_1(VAR_2->bg_itable_unused_hi) << 16 : 0);
}
