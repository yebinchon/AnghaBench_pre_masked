
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hpfs_inode_info {unsigned int i_file_sec; unsigned int i_disk_sec; unsigned int i_n_secs; } ;
struct buffer_head {int dummy; } ;
struct TYPE_7__ {TYPE_2__* external; TYPE_1__* internal; } ;
struct bplus_header {int n_used_nodes; TYPE_3__ u; scalar_t__ internal; } ;
struct anode {struct bplus_header btree; } ;
typedef int secno ;
typedef int anode_secno ;
struct TYPE_8__ {scalar_t__ sb_chk; } ;
struct TYPE_6__ {unsigned int file_secno; unsigned int length; unsigned int disk_secno; } ;
struct TYPE_5__ {unsigned int file_secno; int down; } ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct super_block*,int,int,char*) ;
 int FUNC_2 (struct super_block*,char*,unsigned int,int) ;
 struct hpfs_inode_info* FUNC_3 (struct inode*) ;
 struct anode* FUNC_4 (struct super_block*,int,struct buffer_head**) ;
 TYPE_4__* FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*,int,int*,int*,char*) ;

secno FUNC_7(struct super_block *VAR_0, struct inode *VAR_1,
     struct bplus_header *VAR_2, unsigned VAR_3,
     struct buffer_head *VAR_4)
{
 anode_secno VAR_5 = -1;
 struct anode *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9 = 0;
 go_down:
 if (FUNC_5(VAR_0)->sb_chk) if (FUNC_6(VAR_0, VAR_5, &VAR_8, &VAR_9, "hpfs_bplus_lookup")) return -1;
 if (VAR_2->internal) {
  for (VAR_7 = 0; VAR_7 < VAR_2->n_used_nodes; VAR_7++)
   if (VAR_2->u.internal[VAR_7].file_secno > VAR_3) {
    VAR_5 = VAR_2->u.internal[VAR_7].down;
    FUNC_0(VAR_4);
    if (!(VAR_6 = FUNC_4(VAR_0, VAR_5, &VAR_4))) return -1;
    VAR_2 = &VAR_6->btree;
    goto go_down;
   }
  FUNC_2(VAR_0, "sector %08x not found in internal anode %08x", VAR_3, VAR_5);
  FUNC_0(VAR_4);
  return -1;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2->n_used_nodes; VAR_7++)
  if (VAR_2->u.external[VAR_7].file_secno <= VAR_3 &&
      VAR_2->u.external[VAR_7].file_secno + VAR_2->u.external[VAR_7].length > VAR_3) {
   VAR_5 = VAR_2->u.external[VAR_7].disk_secno + VAR_3 - VAR_2->u.external[VAR_7].file_secno;
   if (FUNC_5(VAR_0)->sb_chk) if (FUNC_1(VAR_0, VAR_5, 1, "data")) {
    FUNC_0(VAR_4);
    return -1;
   }
   if (VAR_1) {
    struct hpfs_inode_info *VAR_10 = FUNC_3(VAR_1);
    VAR_10->i_file_sec = VAR_2->u.external[VAR_7].file_secno;
    VAR_10->i_disk_sec = VAR_2->u.external[VAR_7].disk_secno;
    VAR_10->i_n_secs = VAR_2->u.external[VAR_7].length;
   }
   FUNC_0(VAR_4);
   return VAR_5;
  }
 FUNC_2(VAR_0, "sector %08x not found in external anode %08x", VAR_3, VAR_5);
 FUNC_0(VAR_4);
 return -1;
}
