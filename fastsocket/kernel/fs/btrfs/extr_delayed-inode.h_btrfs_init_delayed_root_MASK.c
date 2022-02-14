
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_root {int prepare_list; int node_list; int wait; int lock; scalar_t__ nodes; int items; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(
    struct btrfs_delayed_root *VAR_0)
{
 FUNC_1(&VAR_0->items, 0);
 VAR_0->nodes = 0;
 FUNC_3(&VAR_0->lock);
 FUNC_2(&VAR_0->wait);
 FUNC_0(&VAR_0->node_list);
 FUNC_0(&VAR_0->prepare_list);
}
