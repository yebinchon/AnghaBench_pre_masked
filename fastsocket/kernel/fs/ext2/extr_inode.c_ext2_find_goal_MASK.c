
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext2_block_alloc_info {int last_alloc_logical_block; scalar_t__ last_alloc_physical_block; } ;
typedef scalar_t__ ext2_fsblk_t ;
struct TYPE_2__ {struct ext2_block_alloc_info* i_block_alloc_info; } ;
typedef int Indirect ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*,int *) ;

__attribute__((used)) static inline ext2_fsblk_t FUNC_2(struct inode *VAR_0, long VAR_1,
       Indirect *VAR_2)
{
 struct ext2_block_alloc_info *VAR_3;

 VAR_3 = FUNC_0(VAR_0)->i_block_alloc_info;





 if (VAR_3 && (VAR_1 == VAR_3->last_alloc_logical_block + 1)
  && (VAR_3->last_alloc_physical_block != 0)) {
  return VAR_3->last_alloc_physical_block + 1;
 }

 return FUNC_1(VAR_0, VAR_2);
}
