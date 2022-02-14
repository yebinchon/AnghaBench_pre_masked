
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int inocache_lock; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {size_t ino; scalar_t__ state; struct jffs2_inode_cache* next; int xref; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,struct jffs2_inode_cache*,size_t) ;
 int FUNC_2 (struct jffs2_inode_cache*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct jffs2_sb_info *VAR_3, struct jffs2_inode_cache *VAR_4)
{
 struct jffs2_inode_cache **VAR_5;




 FUNC_1("del %p (ino #%u)\n", VAR_4, VAR_4->ino);
 FUNC_3(&VAR_3->inocache_lock);

 VAR_5 = &VAR_3->inocache_list[VAR_4->ino % VAR_0];

 while ((*VAR_5) && (*VAR_5)->ino < VAR_4->ino) {
  VAR_5 = &(*VAR_5)->next;
 }
 if ((*VAR_5) == VAR_4) {
  *VAR_5 = VAR_4->next;
 }






 if (VAR_4->state != VAR_2 && VAR_4->state != VAR_1)
  FUNC_2(VAR_4);

 FUNC_4(&VAR_3->inocache_lock);
}
