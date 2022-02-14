
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct cfq_rb_root {int count; int rb; struct rb_node* left; } ;


 int FUNC_0 (struct rb_node*,int *) ;

__attribute__((used)) static void FUNC_1(struct rb_node *VAR_0, struct cfq_rb_root *VAR_1)
{
 if (VAR_1->left == VAR_0)
  VAR_1->left = ((void*)0);
 FUNC_0(VAR_0, &VAR_1->rb);
 --VAR_1->count;
}
