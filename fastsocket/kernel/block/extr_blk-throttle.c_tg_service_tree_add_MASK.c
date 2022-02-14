
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rb_node* rb_node; } ;
struct throtl_rb_root {TYPE_1__ rb; int * left; } ;
struct throtl_grp {unsigned long disptime; int rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 struct throtl_grp* FUNC_0 (struct rb_node*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,struct rb_node*,struct rb_node**) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct throtl_rb_root *VAR_0, struct throtl_grp *VAR_1)
{
 struct rb_node **VAR_2 = &VAR_0->rb.rb_node;
 struct rb_node *VAR_3 = ((void*)0);
 struct throtl_grp *VAR_4;
 unsigned long VAR_5 = VAR_1->disptime;
 int VAR_6 = 1;

 while (*VAR_2 != ((void*)0)) {
  VAR_3 = *VAR_2;
  VAR_4 = FUNC_0(VAR_3);

  if (FUNC_3(VAR_5, VAR_4->disptime))
   VAR_2 = &VAR_3->rb_left;
  else {
   VAR_2 = &VAR_3->rb_right;
   VAR_6 = 0;
  }
 }

 if (VAR_6)
  VAR_0->left = &VAR_1->rb_node;

 FUNC_2(&VAR_1->rb_node, VAR_3, VAR_2);
 FUNC_1(&VAR_1->rb_node, &VAR_0->rb);
}
