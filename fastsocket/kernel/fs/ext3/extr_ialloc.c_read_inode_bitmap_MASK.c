
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext3_group_desc {int bg_inode_bitmap; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct super_block*,char*,char*,unsigned long,int ) ;
 struct ext3_group_desc* FUNC_1 (struct super_block*,unsigned long,int *) ;
 int FUNC_2 (int ) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static struct buffer_head *
FUNC_4(struct super_block * VAR_0, unsigned long VAR_1)
{
 struct ext3_group_desc *VAR_2;
 struct buffer_head *VAR_3 = ((void*)0);

 VAR_2 = FUNC_1(VAR_0, VAR_1, ((void*)0));
 if (!VAR_2)
  goto error_out;

 VAR_3 = FUNC_3(VAR_0, FUNC_2(VAR_2->bg_inode_bitmap));
 if (!VAR_3)
  FUNC_0(VAR_0, "read_inode_bitmap",
       "Cannot read inode bitmap - "
       "block_group = %lu, inode_bitmap = %u",
       VAR_1, FUNC_2(VAR_2->bg_inode_bitmap));
error_out:
 return VAR_3;
}
