
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulist_node {scalar_t__ aux; } ;
struct ulist_iterator {int dummy; } ;
struct ulist {int dummy; } ;
struct extent_inode_elem {struct extent_inode_elem* next; } ;


 int FUNC_0 (struct ulist_iterator*) ;
 int FUNC_1 (struct extent_inode_elem*) ;
 int FUNC_2 (struct ulist*) ;
 struct ulist_node* FUNC_3 (struct ulist*,struct ulist_iterator*) ;

__attribute__((used)) static void FUNC_4(struct ulist *VAR_0)
{
 struct ulist_node *VAR_1 = ((void*)0);
 struct extent_inode_elem *VAR_2;
 struct extent_inode_elem *VAR_3;
 struct ulist_iterator VAR_4;

 FUNC_0(&VAR_4);
 while ((VAR_1 = FUNC_3(VAR_0, &VAR_4))) {
  if (!VAR_1->aux)
   continue;
  VAR_2 = (struct extent_inode_elem *)VAR_1->aux;
  for (; VAR_2; VAR_2 = VAR_3) {
   VAR_3 = VAR_2->next;
   FUNC_1(VAR_2);
  }
  VAR_1->aux = 0;
 }

 FUNC_2(VAR_0);
}
