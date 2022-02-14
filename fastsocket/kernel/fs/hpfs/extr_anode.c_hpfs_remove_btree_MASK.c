
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_7__ {TYPE_2__* internal; TYPE_1__* external; } ;
struct bplus_header {int n_used_nodes; TYPE_3__ u; scalar_t__ internal; } ;
struct anode {scalar_t__ up; struct bplus_header btree; } ;
typedef scalar_t__ anode_secno ;
struct TYPE_8__ {scalar_t__ sb_chk; } ;
struct TYPE_6__ {scalar_t__ down; } ;
struct TYPE_5__ {scalar_t__ disk_secno; int length; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct super_block*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct super_block*,scalar_t__,int) ;
 struct anode* FUNC_3 (struct super_block*,scalar_t__,struct buffer_head**) ;
 TYPE_4__* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*,scalar_t__,int*,int*,char*) ;

void FUNC_6(struct super_block *VAR_0, struct bplus_header *VAR_1)
{
 struct bplus_header *VAR_2 = VAR_1;
 struct anode *VAR_3 = ((void*)0);
 anode_secno VAR_4 = 0, VAR_5;
 struct buffer_head *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12, VAR_13;
 go_down:
 VAR_13 = 0;
 while (VAR_2->internal) {
  VAR_4 = VAR_2->u.internal[VAR_8].down;
  if (VAR_7) FUNC_0(VAR_6);
  if (FUNC_4(VAR_0)->sb_chk)
   if (FUNC_5(VAR_0, VAR_4, &VAR_12, &VAR_13, "hpfs_remove_btree #1"))
    return;
  if (!(VAR_3 = FUNC_3(VAR_0, VAR_4, &VAR_6))) return;
  VAR_2 = &VAR_3->btree;
  VAR_7++;
  VAR_8 = 0;
 }
 for (VAR_9 = 0; VAR_9 < VAR_2->n_used_nodes; VAR_9++)
  FUNC_2(VAR_0, VAR_2->u.external[VAR_9].disk_secno, VAR_2->u.external[VAR_9].length);
 go_up:
 if (!VAR_7) return;
 FUNC_0(VAR_6);
 if (FUNC_4(VAR_0)->sb_chk)
  if (FUNC_5(VAR_0, VAR_4, &VAR_10, &VAR_11, "hpfs_remove_btree #2")) return;
 FUNC_2(VAR_0, VAR_4, 1);
 VAR_5 = VAR_4;
 VAR_4 = VAR_3->up;
 if (--VAR_7) {
  if (!(VAR_3 = FUNC_3(VAR_0, VAR_4, &VAR_6))) return;
  VAR_2 = &VAR_3->btree;
 } else VAR_2 = VAR_1;
 for (VAR_9 = 0; VAR_9 < VAR_2->n_used_nodes; VAR_9++) {
  if (VAR_2->u.internal[VAR_9].down == VAR_5) {
   if ((VAR_8 = VAR_9 + 1) < VAR_2->n_used_nodes)
    goto go_down;
   else
    goto go_up;
  }
 }
 FUNC_1(VAR_0,
     "reference to anode %08x not found in anode %08x "
     "(probably bad up pointer)",
     VAR_5, VAR_7 ? VAR_4 : -1);
 if (VAR_7)
  FUNC_0(VAR_6);
}
