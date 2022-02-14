
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {struct jffs2_inode_cache* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct jffs2_inode_cache*) ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_inode_cache*) ;

void FUNC_2(struct jffs2_sb_info *VAR_1)
{
 int VAR_2;
 struct jffs2_inode_cache *VAR_3, *VAR_4;

 for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  VAR_3 = VAR_1->inocache_list[VAR_2];
  while (VAR_3) {
   VAR_4 = VAR_3->next;
   FUNC_1(VAR_1, VAR_3);
   FUNC_0(VAR_3);
   VAR_3 = VAR_4;
  }
  VAR_1->inocache_list[VAR_2] = ((void*)0);
 }
}
