
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_node {int in_tree; int refs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_delayed_ref_node*) ;

__attribute__((used)) static inline void FUNC_4(struct btrfs_delayed_ref_node *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->refs) == 0);
 if (FUNC_1(&VAR_0->refs)) {
  FUNC_0(VAR_0->in_tree);
  FUNC_3(VAR_0);
 }
}
