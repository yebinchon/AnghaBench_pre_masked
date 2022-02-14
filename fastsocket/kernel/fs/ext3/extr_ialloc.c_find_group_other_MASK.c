
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; } ;
struct ext3_group_desc {int bg_free_inodes_count; int bg_free_blocks_count; } ;
struct TYPE_4__ {int i_block_group; } ;
struct TYPE_3__ {int s_groups_count; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 struct ext3_group_desc* FUNC_2 (struct super_block*,int,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, struct inode *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1)->i_block_group;
 int VAR_3 = FUNC_1(VAR_0)->s_groups_count;
 struct ext3_group_desc *VAR_4;
 int VAR_5, VAR_6;




 VAR_5 = VAR_2;
 VAR_4 = FUNC_2 (VAR_0, VAR_5, ((void*)0));
 if (VAR_4 && FUNC_3(VAR_4->bg_free_inodes_count) &&
   FUNC_3(VAR_4->bg_free_blocks_count))
  return VAR_5;
 VAR_5 = (VAR_5 + VAR_1->i_ino) % VAR_3;





 for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6 <<= 1) {
  VAR_5 += VAR_6;
  if (VAR_5 >= VAR_3)
   VAR_5 -= VAR_3;
  VAR_4 = FUNC_2 (VAR_0, VAR_5, ((void*)0));
  if (VAR_4 && FUNC_3(VAR_4->bg_free_inodes_count) &&
    FUNC_3(VAR_4->bg_free_blocks_count))
   return VAR_5;
 }





 VAR_5 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (++VAR_5 >= VAR_3)
   VAR_5 = 0;
  VAR_4 = FUNC_2 (VAR_0, VAR_5, ((void*)0));
  if (VAR_4 && FUNC_3(VAR_4->bg_free_inodes_count))
   return VAR_5;
 }

 return -1;
}
