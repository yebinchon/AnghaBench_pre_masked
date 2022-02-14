
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_xattr_ref {void* node; struct jffs2_xattr_ref* next; } ;
struct jffs2_sb_info {struct jffs2_xattr_ref* xref_dead_list; } ;


 int FUNC_0 (struct jffs2_xattr_ref*) ;

void FUNC_1(struct jffs2_sb_info *VAR_0, struct jffs2_xattr_ref *VAR_1)
{

 struct jffs2_xattr_ref *VAR_2, **VAR_3;

 if (VAR_1->node != (void *)VAR_1)
  return;

 for (VAR_2=VAR_0->xref_dead_list, VAR_3=&VAR_0->xref_dead_list; VAR_2; VAR_3=&VAR_2->next, VAR_2=VAR_2->next) {
  if (VAR_1 == VAR_2) {
   *VAR_3 = VAR_2->next;
   break;
  }
 }
 FUNC_0(VAR_1);
}
