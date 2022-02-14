
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rb_parent_color; } ;
struct netfs_trans_dst {TYPE_1__ state_entry; } ;
struct netfs_state {int trans_root; } ;


 int FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(struct netfs_trans_dst *VAR_0, struct netfs_state *VAR_1)
{
 if (VAR_0 && VAR_0->state_entry.rb_parent_color) {
  FUNC_0(&VAR_0->state_entry, &VAR_1->trans_root);
  VAR_0->state_entry.rb_parent_color = 0;
  return 1;
 }
 return 0;
}
