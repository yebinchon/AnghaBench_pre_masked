
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_size; int i_blocks; int i_sb; } ;
struct hpfs_dirent {int length; int namelen; int name; scalar_t__ down; } ;
struct dnode {scalar_t__ up; int first_free; scalar_t__ root_dnode; } ;
typedef scalar_t__ secno ;
typedef int loff_t ;
typedef scalar_t__ dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct dnode*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 int FUNC_3 (struct inode*,int ,int,int) ;
 int FUNC_4 (struct dnode*,struct hpfs_dirent*) ;
 int FUNC_5 (struct inode*,scalar_t__,int ,int ,struct hpfs_dirent*,scalar_t__) ;
 int FUNC_6 (struct quad_buffer_head*) ;
 int FUNC_7 (int ,struct dnode*,struct hpfs_dirent*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,scalar_t__) ;
 struct dnode* FUNC_10 (int ,scalar_t__,struct quad_buffer_head*) ;
 int FUNC_11 (struct quad_buffer_head*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int*,int*,char*) ;
 int FUNC_14 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_15 (int,int ) ;
 int FUNC_16 (struct hpfs_dirent*,struct hpfs_dirent*,int) ;
 int FUNC_17 (int ,struct dnode*,scalar_t__) ;

__attribute__((used)) static secno FUNC_18(struct inode *VAR_2, dnode_secno VAR_3, dnode_secno VAR_4)
{
 dnode_secno VAR_5, VAR_6;
 dnode_secno VAR_7 = VAR_4;
 struct dnode *VAR_8;
 struct quad_buffer_head VAR_9;
 struct hpfs_dirent *VAR_10, *VAR_11;
 int VAR_12;
 loff_t VAR_13;
 int VAR_14, VAR_15 = 0;
 VAR_5 = VAR_3;
 while (1) {
  if (FUNC_12(VAR_2->i_sb)->sb_chk)
   if (FUNC_13(VAR_2->i_sb, VAR_5, &VAR_14, &VAR_15, "move_to_top"))
    return 0;
  if (!(VAR_8 = FUNC_10(VAR_2->i_sb, VAR_5, &VAR_9))) return 0;
  if (FUNC_12(VAR_2->i_sb)->sb_chk) {
   if (VAR_8->up != VAR_7) {
    FUNC_8(VAR_2->i_sb, "move_to_top: up pointer from %08x should be %08x, is %08x",
     VAR_5, VAR_7, VAR_8->up);
    FUNC_6(&VAR_9);
    return 0;
   }
   VAR_7 = VAR_5;
  }
  if (!(VAR_10 = FUNC_1(VAR_8))) {
   FUNC_8(VAR_2->i_sb, "move_to_top: dnode %08x has no last de", VAR_5);
   FUNC_6(&VAR_9);
   return 0;
  }
  if (!VAR_10->down) break;
  VAR_5 = FUNC_0(VAR_10);
  FUNC_6(&VAR_9);
 }
 while (!(VAR_10 = FUNC_2(VAR_8))) {
  dnode_secno VAR_16 = VAR_8->up;
  FUNC_6(&VAR_9);
  FUNC_9(VAR_2->i_sb, VAR_5);
  VAR_2->i_size -= 2048;
  VAR_2->i_blocks -= 4;
  FUNC_3(VAR_2, VAR_1, ((loff_t)VAR_5 << 4) | 1, 5);
  if (VAR_16 == VAR_4) return VAR_4;
  if (!(VAR_8 = FUNC_10(VAR_2->i_sb, VAR_16, &VAR_9))) return 0;
  if (VAR_8->root_dnode) {
   FUNC_8(VAR_2->i_sb, "move_to_top: got to root_dnode while moving from %08x to %08x", VAR_3, VAR_4);
   FUNC_6(&VAR_9);
   return 0;
  }
  VAR_10 = FUNC_1(VAR_8);
  if (!VAR_10 || !VAR_10->down) {
   FUNC_8(VAR_2->i_sb, "move_to_top: dnode %08x doesn't point down to %08x", VAR_16, VAR_5);
   FUNC_6(&VAR_9);
   return 0;
  }
  VAR_8->first_free -= 4;
  VAR_10->length -= 4;
  VAR_10->down = 0;
  FUNC_11(&VAR_9);
  VAR_5 = VAR_16;
 }
 VAR_13 = FUNC_4(VAR_8, VAR_10);
 FUNC_3(VAR_2, VAR_1, VAR_13, 4);
 FUNC_3(VAR_2, VAR_1, VAR_13 + 1, 5);
 if (!(VAR_11 = FUNC_15(VAR_10->length, VAR_0))) {
  FUNC_8(VAR_2->i_sb, "out of memory for dirent - directory will be corrupted");
  FUNC_6(&VAR_9);
  return 0;
 }
 FUNC_16(VAR_11, VAR_10, VAR_10->length);
 VAR_6 = VAR_10->down ? FUNC_0(VAR_10) : 0;
 FUNC_7(VAR_2->i_sb, VAR_8, VAR_10);
 FUNC_17(VAR_2->i_sb, VAR_8, VAR_6);
 FUNC_11(&VAR_9);
 FUNC_6(&VAR_9);
 VAR_12 = FUNC_5(VAR_2, VAR_4, VAR_11->name, VAR_11->namelen, VAR_11, VAR_3);
 FUNC_14(VAR_11);
 if (VAR_12) return 0;
 return VAR_5;
}
