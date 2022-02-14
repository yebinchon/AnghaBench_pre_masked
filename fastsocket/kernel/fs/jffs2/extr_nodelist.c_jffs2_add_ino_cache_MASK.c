
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {size_t highest_ino; int inocache_lock; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {size_t ino; struct jffs2_inode_cache* next; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,struct jffs2_inode_cache*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3 (struct jffs2_sb_info *VAR_1, struct jffs2_inode_cache *VAR_2)
{
 struct jffs2_inode_cache **VAR_3;

 FUNC_1(&VAR_1->inocache_lock);
 if (!VAR_2->ino)
  VAR_2->ino = ++VAR_1->highest_ino;

 FUNC_0("add %p (ino #%u)\n", VAR_2, VAR_2->ino);

 VAR_3 = &VAR_1->inocache_list[VAR_2->ino % VAR_0];

 while ((*VAR_3) && (*VAR_3)->ino < VAR_2->ino) {
  VAR_3 = &(*VAR_3)->next;
 }
 VAR_2->next = *VAR_3;
 *VAR_3 = VAR_2;

 FUNC_2(&VAR_1->inocache_lock);
}
