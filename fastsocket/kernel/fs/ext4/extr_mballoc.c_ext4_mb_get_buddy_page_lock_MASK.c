
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct page {scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; } ;
struct ext4_buddy {struct page* bd_buddy_page; scalar_t__ bd_bitmap; struct page* bd_bitmap_page; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {struct inode* s_buddy_cache; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_2 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_3,
  ext4_group_t VAR_4, struct ext4_buddy *VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_3)->s_buddy_cache;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 struct page *VAR_11;

 VAR_5->bd_buddy_page = ((void*)0);
 VAR_5->bd_bitmap_page = ((void*)0);

 VAR_10 = VAR_2 / VAR_3->s_blocksize;





 VAR_7 = VAR_4 * 2;
 VAR_8 = VAR_7 / VAR_10;
 VAR_9 = VAR_7 % VAR_10;
 VAR_11 = FUNC_2(VAR_6->i_mapping, VAR_8, VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_0(VAR_11->mapping != VAR_6->i_mapping);
 VAR_5->bd_bitmap_page = VAR_11;
 VAR_5->bd_bitmap = FUNC_3(VAR_11) + (VAR_9 * VAR_3->s_blocksize);

 if (VAR_10 >= 2) {

  return 0;
 }

 VAR_7++;
 VAR_8 = VAR_7 / VAR_10;
 VAR_9 = VAR_7 % VAR_10;
 VAR_11 = FUNC_2(VAR_6->i_mapping, VAR_8, VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_0(VAR_11->mapping != VAR_6->i_mapping);
 VAR_5->bd_buddy_page = VAR_11;
 return 0;
}
