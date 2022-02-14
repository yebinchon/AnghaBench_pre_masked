
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rb_node; } ;
struct TYPE_4__ {int seq_head; TYPE_1__ root; } ;
struct btrfs_transaction {TYPE_2__ delayed_refs; int list; int use_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct btrfs_transaction*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btrfs_transaction*,int ,int) ;

void FUNC_7(struct btrfs_transaction *VAR_1)
{
 FUNC_1(FUNC_3(&VAR_1->use_count) == 0);
 if (FUNC_2(&VAR_1->use_count)) {
  FUNC_0(!FUNC_5(&VAR_1->list));
  FUNC_1(VAR_1->delayed_refs.root.rb_node);
  FUNC_1(!FUNC_5(&VAR_1->delayed_refs.seq_head));
  FUNC_6(VAR_1, 0, sizeof(*VAR_1));
  FUNC_4(VAR_0, VAR_1);
 }
}
