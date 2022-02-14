
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {scalar_t__ last; int first; scalar_t__ directory; scalar_t__ down; } ;
struct dnode {int up; scalar_t__ root_dnode; } ;
typedef int dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct quad_buffer_head*) ;
 int FUNC_5 (struct super_block*,char*,int,int,int) ;
 struct dnode* FUNC_6 (struct super_block*,int,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*,int,int*,int*,char*) ;

void FUNC_9(struct super_block *VAR_0, dnode_secno VAR_1, int *VAR_2,
         int *VAR_3, int *VAR_4)
{
 struct dnode *VAR_5;
 struct quad_buffer_head VAR_6;
 struct hpfs_dirent *VAR_7;
 dnode_secno VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11 = 0;
 int VAR_12, VAR_13 = 0;
 go_down:
 if (VAR_2) (*VAR_2)++;
 if (FUNC_7(VAR_0)->sb_chk)
  if (FUNC_8(VAR_0, VAR_1, &VAR_10, &VAR_11, "hpfs_count_dnodes #1")) return;
 VAR_8 = 0;
 go_up:
 if (!(VAR_5 = FUNC_6(VAR_0, VAR_1, &VAR_6))) return;
 if (FUNC_7(VAR_0)->sb_chk) if (VAR_9 && VAR_9 != -1 && VAR_5->up != VAR_9)
  FUNC_5(VAR_0, "hpfs_count_dnodes: bad up pointer; dnode %08x, down %08x points to %08x", VAR_9, VAR_1, VAR_5->up);
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_8) while(1) {
  if (VAR_7->down) if (FUNC_0(VAR_7) == VAR_8) goto process_de;
  if (VAR_7->last) {
   FUNC_4(&VAR_6);
   FUNC_5(VAR_0, "hpfs_count_dnodes: pointer to dnode %08x not found in dnode %08x, got here from %08x",
    VAR_8, VAR_1, VAR_9);
   return;
  }
  VAR_7 = FUNC_1(VAR_7);
 }
 next_de:
 if (VAR_7->down) {
  VAR_9 = VAR_1;
  VAR_1 = FUNC_0(VAR_7);
  FUNC_4(&VAR_6);
  goto go_down;
 }
 process_de:
 if (!VAR_7->first && !VAR_7->last && VAR_7->directory && VAR_3) (*VAR_3)++;
 if (!VAR_7->first && !VAR_7->last && VAR_4) (*VAR_4)++;
 if ((VAR_7 = FUNC_1(VAR_7)) < FUNC_2(VAR_5)) goto next_de;
 VAR_8 = VAR_1;
 VAR_1 = VAR_5->up;
 if (VAR_5->root_dnode) {
  FUNC_4(&VAR_6);
  return;
 }
 FUNC_4(&VAR_6);
 if (FUNC_7(VAR_0)->sb_chk)
  if (FUNC_8(VAR_0, VAR_8, &VAR_12, &VAR_13, "hpfs_count_dnodes #2")) return;
 VAR_9 = -1;
 goto go_up;
}
