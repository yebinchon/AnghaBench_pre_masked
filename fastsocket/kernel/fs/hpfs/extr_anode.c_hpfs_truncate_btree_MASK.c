
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_7__ {TYPE_2__* external; TYPE_1__* internal; } ;
struct bplus_header {int n_free_nodes; int n_used_nodes; int first_free; TYPE_3__ u; scalar_t__ internal; } ;
struct fnode {struct bplus_header btree; } ;
struct buffer_head {int dummy; } ;
struct anode {struct bplus_header btree; } ;
typedef unsigned int secno ;
typedef unsigned int anode_secno ;
struct TYPE_8__ {scalar_t__ sb_chk; } ;
struct TYPE_6__ {unsigned int file_secno; unsigned int length; unsigned int disk_secno; } ;
struct TYPE_5__ {unsigned int file_secno; unsigned int down; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct super_block*,unsigned int,int,int ) ;
 int FUNC_2 (struct super_block*,char*,unsigned int,...) ;
 int FUNC_3 (struct super_block*,unsigned int,unsigned int) ;
 struct anode* FUNC_4 (struct super_block*,unsigned int,struct buffer_head**) ;
 struct fnode* FUNC_5 (struct super_block*,unsigned int,struct buffer_head**) ;
 int FUNC_6 (struct super_block*,struct bplus_header*) ;
 TYPE_4__* FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*,unsigned int,int*,int*,char*) ;
 int FUNC_9 (struct buffer_head*) ;

void FUNC_10(struct super_block *VAR_0, secno VAR_1, int VAR_2, unsigned VAR_3)
{
 struct fnode *VAR_4;
 struct anode *VAR_5;
 struct buffer_head *VAR_6;
 struct bplus_header *VAR_7;
 anode_secno VAR_8 = VAR_1;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;
 if (VAR_2) {
  if (!(VAR_4 = FUNC_5(VAR_0, VAR_1, &VAR_6))) return;
  VAR_7 = &VAR_4->btree;
 } else {
  if (!(VAR_5 = FUNC_4(VAR_0, VAR_1, &VAR_6))) return;
  VAR_7 = &VAR_5->btree;
 }
 if (!VAR_3) {
  FUNC_6(VAR_0, VAR_7);
  if (VAR_2) {
   VAR_7->n_free_nodes = 8;
   VAR_7->n_used_nodes = 0;
   VAR_7->first_free = 8;
   VAR_7->internal = 0;
   FUNC_9(VAR_6);
  } else FUNC_3(VAR_0, VAR_1, 1);
  FUNC_0(VAR_6);
  return;
 }
 while (VAR_7->internal) {
  VAR_11 = VAR_7->n_used_nodes + VAR_7->n_free_nodes;
  for (VAR_9 = 0; VAR_9 < VAR_7->n_used_nodes; VAR_9++)
   if (VAR_7->u.internal[VAR_9].file_secno >= VAR_3) goto f;
  FUNC_0(VAR_6);
  FUNC_2(VAR_0, "internal btree %08x doesn't end with -1", VAR_8);
  return;
  f:
  for (VAR_10 = VAR_9 + 1; VAR_10 < VAR_7->n_used_nodes; VAR_10++)
   FUNC_1(VAR_0, VAR_7->u.internal[VAR_10].down, 1, 0);
  VAR_7->n_used_nodes = VAR_9 + 1;
  VAR_7->n_free_nodes = VAR_11 - VAR_7->n_used_nodes;
  VAR_7->first_free = 8 + 8 * VAR_7->n_used_nodes;
  FUNC_9(VAR_6);
  if (VAR_7->u.internal[VAR_9].file_secno == VAR_3) {
   FUNC_0(VAR_6);
   return;
  }
  VAR_8 = VAR_7->u.internal[VAR_9].down;
  FUNC_0(VAR_6);
  if (FUNC_7(VAR_0)->sb_chk)
   if (FUNC_8(VAR_0, VAR_8, &VAR_12, &VAR_13, "hpfs_truncate_btree"))
    return;
  if (!(VAR_5 = FUNC_4(VAR_0, VAR_8, &VAR_6))) return;
  VAR_7 = &VAR_5->btree;
 }
 VAR_11 = VAR_7->n_used_nodes + VAR_7->n_free_nodes;
 for (VAR_9 = 0; VAR_9 < VAR_7->n_used_nodes; VAR_9++)
  if (VAR_7->u.external[VAR_9].file_secno + VAR_7->u.external[VAR_9].length >= VAR_3) goto ff;
 FUNC_0(VAR_6);
 return;
 ff:
 if (VAR_3 <= VAR_7->u.external[VAR_9].file_secno) {
  FUNC_2(VAR_0, "there is an allocation error in file %08x, sector %08x", VAR_1, VAR_3);
  if (VAR_9) VAR_9--;
 }
 else if (VAR_7->u.external[VAR_9].file_secno + VAR_7->u.external[VAR_9].length > VAR_3) {
  FUNC_3(VAR_0, VAR_7->u.external[VAR_9].disk_secno + VAR_3 -
   VAR_7->u.external[VAR_9].file_secno, VAR_7->u.external[VAR_9].length
   - VAR_3 + VAR_7->u.external[VAR_9].file_secno);
  VAR_7->u.external[VAR_9].length = VAR_3 - VAR_7->u.external[VAR_9].file_secno;
 }
 for (VAR_10 = VAR_9 + 1; VAR_10 < VAR_7->n_used_nodes; VAR_10++)
  FUNC_3(VAR_0, VAR_7->u.external[VAR_10].disk_secno, VAR_7->u.external[VAR_10].length);
 VAR_7->n_used_nodes = VAR_9 + 1;
 VAR_7->n_free_nodes = VAR_11 - VAR_7->n_used_nodes;
 VAR_7->first_free = 8 + 12 * VAR_7->n_used_nodes;
 FUNC_9(VAR_6);
 FUNC_0(VAR_6);
}
