
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {int rb_parent_color; struct rb_node* rb_left; struct rb_node* rb_right; } ;


 int FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static void FUNC_2(struct rb_root *VAR_0, struct rb_node *VAR_1)
{
 struct rb_node *VAR_2 = FUNC_1(VAR_1);
 struct rb_node **VAR_3;


 FUNC_0(VAR_1->rb_right);

 if (!VAR_2)
  VAR_3 = &VAR_0->rb_node;
 else if (VAR_1 == VAR_2->rb_left)
  VAR_3 = &VAR_2->rb_left;
 else
  VAR_3 = &VAR_2->rb_right;

 *VAR_3 = VAR_1->rb_left;

 if (VAR_1->rb_left)
  VAR_1->rb_left->rb_parent_color = VAR_1->rb_parent_color;
}
