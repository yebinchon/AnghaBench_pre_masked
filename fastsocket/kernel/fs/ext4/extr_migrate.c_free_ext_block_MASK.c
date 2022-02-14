
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_inode_info {scalar_t__ i_data; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {scalar_t__ eh_depth; int eh_entries; } ;
typedef int handle_t ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 struct ext4_extent_idx* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (int *,struct inode*,struct ext4_extent_idx*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(handle_t *VAR_0, struct inode *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct ext4_inode_info *VAR_4 = FUNC_0(VAR_1);
 struct ext4_extent_header *VAR_5 = (struct ext4_extent_header *)VAR_4->i_data;
 struct ext4_extent_idx *VAR_6;
 if (VAR_5->eh_depth == 0)



  return 0;
 VAR_6 = FUNC_1(VAR_5);
 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_5->eh_entries); VAR_2++, VAR_6++) {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_6);
  if (VAR_3)
   return VAR_3;
 }
 return VAR_3;

}
