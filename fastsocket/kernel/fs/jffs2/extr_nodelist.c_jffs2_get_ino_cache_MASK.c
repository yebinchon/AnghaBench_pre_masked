
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_sb_info {struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {size_t ino; struct jffs2_inode_cache* next; } ;


 size_t VAR_0 ;

struct jffs2_inode_cache *FUNC_0(struct jffs2_sb_info *VAR_1, uint32_t VAR_2)
{
 struct jffs2_inode_cache *VAR_3;

 VAR_3 = VAR_1->inocache_list[VAR_2 % VAR_0];
 while (VAR_3 && VAR_3->ino < VAR_2) {
  VAR_3 = VAR_3->next;
 }

 if (VAR_3 && VAR_3->ino != VAR_2)
  VAR_3 = ((void*)0);

 return VAR_3;
}
