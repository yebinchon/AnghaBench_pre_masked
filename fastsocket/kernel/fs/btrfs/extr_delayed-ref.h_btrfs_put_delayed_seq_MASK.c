
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_list {int list; } ;
struct btrfs_delayed_ref_root {int lock; int seq_wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct btrfs_delayed_ref_root *VAR_0,
        struct seq_list *VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->list);
 FUNC_3(&VAR_0->seq_wait);
 FUNC_2(&VAR_0->lock);
}
