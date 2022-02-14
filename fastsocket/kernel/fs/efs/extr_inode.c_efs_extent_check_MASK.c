
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct efs_sb_info {scalar_t__ fs_start; } ;
struct TYPE_4__ {scalar_t__ ex_bn; scalar_t__ ex_length; scalar_t__ ex_offset; } ;
struct TYPE_5__ {TYPE_1__ cooked; } ;
typedef TYPE_2__ efs_extent ;
typedef scalar_t__ efs_block_t ;



__attribute__((used)) static inline efs_block_t
FUNC_0(efs_extent *VAR_0, efs_block_t VAR_1, struct efs_sb_info *VAR_2) {
 efs_block_t VAR_3;
 efs_block_t VAR_4;
 efs_block_t VAR_5;





 VAR_3 = VAR_0->cooked.ex_bn;
 VAR_4 = VAR_0->cooked.ex_length;
 VAR_5 = VAR_0->cooked.ex_offset;

 if ((VAR_1 >= VAR_5) && (VAR_1 < VAR_5+VAR_4)) {
  return(VAR_2->fs_start + VAR_3 + VAR_1 - VAR_5);
 } else {
  return 0;
 }
}
