
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rb_parent_color; } ;
struct dst_trans {TYPE_1__ trans_entry; struct dst_node* n; } ;
struct dst_node {int trans_root; } ;


 int FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(struct dst_trans *VAR_0)
{
 struct dst_node *VAR_1 = VAR_0->n;

 if (VAR_0->trans_entry.rb_parent_color) {
  FUNC_0(&VAR_0->trans_entry, &VAR_1->trans_root);
  VAR_0->trans_entry.rb_parent_color = 0;
 }
 return 0;
}
