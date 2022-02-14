
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_list {int list; int seq; } ;
struct btrfs_delayed_ref_root {int seq_head; int seq; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct btrfs_delayed_ref_root *VAR_0,
        struct seq_list *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_1->seq = VAR_0->seq;
 FUNC_1(&VAR_1->list, &VAR_0->seq_head);
}
