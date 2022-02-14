
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_2__ {struct rb_node* rb_node; } ;
struct cfq_rb_root {TYPE_1__ rb; int * left; } ;
struct cfq_group {int rb_node; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (struct cfq_rb_root*,struct cfq_group*) ;
 struct cfq_group* FUNC_1 (struct rb_node*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static void
FUNC_4(struct cfq_rb_root *VAR_0, struct cfq_group *VAR_1)
{
 struct rb_node **VAR_2 = &VAR_0->rb.rb_node;
 struct rb_node *VAR_3 = ((void*)0);
 struct cfq_group *VAR_4;
 s64 VAR_5 = FUNC_0(VAR_0, VAR_1);
 int VAR_6 = 1;

 while (*VAR_2 != ((void*)0)) {
  VAR_3 = *VAR_2;
  VAR_4 = FUNC_1(VAR_3);

  if (VAR_5 < FUNC_0(VAR_0, VAR_4))
   VAR_2 = &VAR_3->rb_left;
  else {
   VAR_2 = &VAR_3->rb_right;
   VAR_6 = 0;
  }
 }

 if (VAR_6)
  VAR_0->left = &VAR_1->rb_node;

 FUNC_3(&VAR_1->rb_node, VAR_3, VAR_2);
 FUNC_2(&VAR_1->rb_node, &VAR_0->rb);
}
