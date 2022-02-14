
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_size; int i_blocks; void* i_ino; int i_sb; } ;
struct hpfs_inode_info {void* i_dno; } ;
struct hpfs_dirent {int down; int length; int namelen; int name; int last; } ;
struct TYPE_5__ {TYPE_1__* external; } ;
struct fnode {TYPE_2__ u; } ;
struct dnode {int first_free; int root_dnode; void* up; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
typedef void* dnode_secno ;
struct TYPE_6__ {int sb_chk; } ;
struct TYPE_4__ {void* disk_secno; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 struct hpfs_dirent* FUNC_4 (struct dnode*) ;
 struct hpfs_dirent* FUNC_5 (struct dnode*) ;
 struct hpfs_dirent* FUNC_6 (struct dnode*) ;
 int FUNC_7 (struct inode*,int ,int,int) ;
 int FUNC_8 (struct inode*,void*,int ,int ,struct hpfs_dirent*,void*) ;
 int FUNC_9 (struct quad_buffer_head*) ;
 int FUNC_10 (int ,struct dnode*,struct hpfs_dirent*) ;
 int FUNC_11 (int ,char*,void*,...) ;
 int FUNC_12 (int ,void*) ;
 struct hpfs_inode_info* FUNC_13 (struct inode*) ;
 struct dnode* FUNC_14 (int ,void*,struct quad_buffer_head*) ;
 struct fnode* FUNC_15 (int ,void*,struct buffer_head**) ;
 int FUNC_16 (struct quad_buffer_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,void*,int*,int*,char*) ;
 int FUNC_19 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_20 (int,int ) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct hpfs_dirent*,struct hpfs_dirent*,int) ;
 int FUNC_23 (struct hpfs_dirent*,char*,int) ;
 int FUNC_24 (char*) ;

__attribute__((used)) static void FUNC_25(struct inode *VAR_3, dnode_secno VAR_4)
{
 struct hpfs_inode_info *VAR_5 = FUNC_13(VAR_3);
 struct quad_buffer_head VAR_6;
 struct dnode *VAR_7;
 dnode_secno VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct hpfs_dirent *VAR_12;
 int VAR_13, VAR_14 = 0;
 try_it_again:
 if (FUNC_18(VAR_3->i_sb, VAR_4, &VAR_13, &VAR_14, "delete_empty_dnode")) return;
 if (!(VAR_7 = FUNC_14(VAR_3->i_sb, VAR_4, &VAR_6))) return;
 if (VAR_7->first_free > 56) goto end;
 if (VAR_7->first_free == 52 || VAR_7->first_free == 56) {
  struct hpfs_dirent *VAR_15;
  int VAR_16 = VAR_7->root_dnode;
  VAR_9 = VAR_7->up;
  VAR_12 = FUNC_4(VAR_7);
  VAR_8 = VAR_12->down ? FUNC_1(VAR_12) : 0;
  if (FUNC_17(VAR_3->i_sb)->sb_chk) if (VAR_16 && !VAR_8) {
   FUNC_11(VAR_3->i_sb, "delete_empty_dnode: root dnode %08x is empty", VAR_4);
   goto end;
  }
  FUNC_9(&VAR_6);
  FUNC_12(VAR_3->i_sb, VAR_4);
  VAR_3->i_size -= 2048;
  VAR_3->i_blocks -= 4;
  if (VAR_16) {
   struct fnode *VAR_17;
   struct buffer_head *VAR_18;
   struct dnode *VAR_19;
   struct quad_buffer_head VAR_20;
   if (FUNC_17(VAR_3->i_sb)->sb_chk)
       if (VAR_9 != VAR_3->i_ino) {
    FUNC_11(VAR_3->i_sb,
     "bad pointer to fnode, dnode %08x, pointing to %08x, should be %08lx",
     VAR_4, VAR_9, (unsigned long)VAR_3->i_ino);
    return;
       }
   if ((VAR_19 = FUNC_14(VAR_3->i_sb, VAR_8, &VAR_20))) {
    VAR_19->up = VAR_9;
    VAR_19->root_dnode = 1;
    FUNC_16(&VAR_20);
    FUNC_9(&VAR_20);
   }
   if ((VAR_17 = FUNC_15(VAR_3->i_sb, VAR_9, &VAR_18))) {
    VAR_17->u.external[0].disk_secno = VAR_8;
    FUNC_21(VAR_18);
    FUNC_0(VAR_18);
   }
   VAR_5->i_dno = VAR_8;
   FUNC_7(VAR_3, VAR_2, ((loff_t)VAR_4 << 4) | 1, (loff_t) 12);
   return;
  }
  if (!(VAR_7 = FUNC_14(VAR_3->i_sb, VAR_9, &VAR_6))) return;
  VAR_11 = 1;
  VAR_15 = FUNC_3(VAR_7);
  for (VAR_12 = FUNC_4(VAR_7); VAR_12 < VAR_15; VAR_12 = FUNC_2(VAR_12), VAR_11++)
   if (VAR_12->down) if (FUNC_1(VAR_12) == VAR_4) goto fnd;
  FUNC_11(VAR_3->i_sb, "delete_empty_dnode: pointer to dnode %08x not found in dnode %08x", VAR_4, VAR_9);
  goto end;
  fnd:
  FUNC_7(VAR_3, VAR_2, ((loff_t)VAR_4 << 4) | 1, ((loff_t)VAR_9 << 4) | VAR_11);
  if (!VAR_8) {
   VAR_12->down = 0;
   VAR_12->length -= 4;
   VAR_7->first_free -= 4;
   FUNC_23(FUNC_2(VAR_12), (char *)FUNC_2(VAR_12) + 4,
    (char *)VAR_7 + VAR_7->first_free - (char *)FUNC_2(VAR_12));
  } else {
   struct dnode *VAR_21;
   struct quad_buffer_head VAR_22;
   *(dnode_secno *) ((void *) VAR_12 + VAR_12->length - 4) = VAR_8;
   if ((VAR_21 = FUNC_14(VAR_3->i_sb, VAR_8, &VAR_22))) {
    VAR_21->up = VAR_9;
    FUNC_16(&VAR_22);
    FUNC_9(&VAR_22);
   }
  }
 } else {
  FUNC_11(VAR_3->i_sb, "delete_empty_dnode: dnode %08x, first_free == %03x", VAR_4, VAR_7->first_free);
  goto end;
 }

 if (!VAR_12->last) {
  struct hpfs_dirent *VAR_23 = FUNC_2(VAR_12);
  struct hpfs_dirent *VAR_24;
  struct dnode *VAR_25;
  struct quad_buffer_head VAR_26;
  if (!VAR_23->down) goto endm;
  VAR_10 = FUNC_1(VAR_23);
  if (!(VAR_24 = FUNC_20(VAR_12->length, VAR_0))) {
   FUNC_24("HPFS: out of memory for dtree balancing\n");
   goto endm;
  }
  FUNC_22(VAR_24, VAR_12, VAR_12->length);
  FUNC_10(VAR_3->i_sb, VAR_7, VAR_12);
  FUNC_16(&VAR_6);
  FUNC_9(&VAR_6);
  FUNC_7(VAR_3, VAR_2, ((loff_t)VAR_9 << 4) | VAR_11, 4);
  FUNC_7(VAR_3, VAR_1, ((loff_t)VAR_9 << 4) | VAR_11, 1);
  if (VAR_24->down) if ((VAR_25 = FUNC_14(VAR_3->i_sb, FUNC_1(VAR_24), &VAR_26))) {
   VAR_25->up = VAR_10;
   FUNC_16(&VAR_26);
   FUNC_9(&VAR_26);
  }
  FUNC_8(VAR_3, VAR_10, VAR_24->name, VAR_24->namelen, VAR_24, VAR_24->down ? FUNC_1(VAR_24) : 0);

  VAR_4 = VAR_9;
  FUNC_19(VAR_24);
  goto try_it_again;
 } else {
  struct hpfs_dirent *VAR_27 = FUNC_6(VAR_7);
  struct hpfs_dirent *VAR_28;
  struct dnode *VAR_29;
  struct quad_buffer_head VAR_30;
  dnode_secno VAR_31;
  if (!VAR_27) {
   FUNC_11(VAR_3->i_sb, "delete_empty_dnode: empty dnode %08x", VAR_9);
   FUNC_16(&VAR_6);
   FUNC_9(&VAR_6);
   VAR_4 = VAR_9;
   goto try_it_again;
  }
  if (!VAR_27->down) goto endm;
  VAR_10 = FUNC_1(VAR_27);
  if ((VAR_29 = FUNC_14(VAR_3->i_sb, VAR_10, &VAR_30))) {
   struct hpfs_dirent *VAR_32 = FUNC_5(VAR_29);
   VAR_31 = VAR_32->down ? FUNC_1(VAR_32) : 0;
   if (!VAR_31 && VAR_8) {
    if (VAR_29->first_free > 2044) {
     if (FUNC_17(VAR_3->i_sb)->sb_chk >= 2) {
      FUNC_24("HPFS: warning: unbalanced dnode tree, see hpfs.txt 4 more info\n");
      FUNC_24("HPFS: warning: terminating balancing operation\n");
     }
     FUNC_9(&VAR_30);
     goto endm;
    }
    if (FUNC_17(VAR_3->i_sb)->sb_chk >= 2) {
     FUNC_24("HPFS: warning: unbalanced dnode tree, see hpfs.txt 4 more info\n");
     FUNC_24("HPFS: warning: goin'on\n");
    }
    VAR_32->length += 4;
    VAR_32->down = 1;
    VAR_29->first_free += 4;
   }
   if (VAR_31 && !VAR_8) {
    VAR_32->length -= 4;
    VAR_32->down = 0;
    VAR_29->first_free -= 4;
   } else if (VAR_8)
    *(dnode_secno *) ((void *) VAR_32 + VAR_32->length - 4) = VAR_8;
  } else goto endm;
  if (!(VAR_28 = FUNC_20(VAR_27->length, VAR_0))) {
   FUNC_24("HPFS: out of memory for dtree balancing\n");
   FUNC_9(&VAR_30);
   goto endm;
  }
  FUNC_16(&VAR_30);
  FUNC_9(&VAR_30);
  FUNC_22(VAR_28, VAR_27, VAR_27->length);
  FUNC_10(VAR_3->i_sb, VAR_7, VAR_27);
  if (!VAR_27->down) {
   VAR_27->length += 4;
   VAR_27->down = 1;
   VAR_7->first_free += 4;
  }
  *(dnode_secno *) ((void *) VAR_27 + VAR_27->length - 4) = VAR_10;
  FUNC_16(&VAR_6);
  FUNC_9(&VAR_6);
  FUNC_7(VAR_3, VAR_2, ((loff_t)VAR_9 << 4) | (VAR_11 - 1), 4);
  FUNC_7(VAR_3, VAR_2, ((loff_t)VAR_9 << 4) | VAR_11, ((loff_t)VAR_9 << 4) | (VAR_11 - 1));
  if (VAR_8) if ((VAR_29 = FUNC_14(VAR_3->i_sb, FUNC_1(VAR_12), &VAR_30))) {
   VAR_29->up = VAR_10;
   FUNC_16(&VAR_30);
   FUNC_9(&VAR_30);
  }
  FUNC_8(VAR_3, VAR_10, VAR_28->name, VAR_28->namelen, VAR_28, VAR_31);
  VAR_4 = VAR_9;
  FUNC_19(VAR_28);
  goto try_it_again;
 }
 endm:
 FUNC_16(&VAR_6);
 end:
 FUNC_9(&VAR_6);
}
