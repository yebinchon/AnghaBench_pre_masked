
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct TYPE_7__ {int * a_ops; } ;
struct inode {int i_mode; int i_nlink; int i_size; int i_blocks; TYPE_3__ i_data; int * i_fop; int * i_op; struct super_block* i_sb; void* i_gid; void* i_uid; int i_ino; } ;
struct hpfs_inode_info {int i_ea_uid; int i_ea_gid; int i_ea_mode; int mmu_private; int i_dno; int i_parent_dir; } ;
struct TYPE_6__ {TYPE_1__* external; } ;
struct fnode {int file_size; TYPE_2__ u; int up; scalar_t__ dirflag; } ;
struct buffer_head {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_8__ {int sb_mode; int sb_chk; scalar_t__ sb_eas; } ;
struct TYPE_5__ {int disk_secno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_5 (struct super_block*,int ,unsigned int*,unsigned int*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* FUNC_6 (struct super_block*,struct fnode*,char*,int*) ;
 struct hpfs_inode_info* FUNC_7 (struct inode*) ;
 struct fnode* FUNC_8 (struct super_block*,int ,struct buffer_head**) ;
 TYPE_4__* FUNC_9 (struct super_block*) ;
 int VAR_8 ;
 int FUNC_10 (struct inode*,int,int ) ;
 int FUNC_11 (unsigned char*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int) ;
 int VAR_9 ;

void FUNC_16(struct inode *VAR_10)
{
 struct buffer_head *VAR_11;
 struct fnode *VAR_12;
 struct super_block *VAR_13 = VAR_10->i_sb;
 struct hpfs_inode_info *VAR_14 = FUNC_7(VAR_10);
 unsigned char *VAR_15;
 int VAR_16;

 if (!(VAR_12 = FUNC_8(VAR_13, VAR_10->i_ino, &VAR_11))) {





  FUNC_14(VAR_10);
  return;
 }
 if (FUNC_9(VAR_10->i_sb)->sb_eas) {
  if ((VAR_15 = FUNC_6(VAR_10->i_sb, VAR_12, "UID", &VAR_16))) {
   if (VAR_16 == 2) {
    VAR_10->i_uid = FUNC_12(*(__le16*)VAR_15);
    VAR_14->i_ea_uid = 1;
   }
   FUNC_11(VAR_15);
  }
  if ((VAR_15 = FUNC_6(VAR_10->i_sb, VAR_12, "GID", &VAR_16))) {
   if (VAR_16 == 2) {
    VAR_10->i_gid = FUNC_12(*(__le16*)VAR_15);
    VAR_14->i_ea_gid = 1;
   }
   FUNC_11(VAR_15);
  }
  if ((VAR_15 = FUNC_6(VAR_10->i_sb, VAR_12, "SYMLINK", &VAR_16))) {
   FUNC_11(VAR_15);
   VAR_10->i_mode = VAR_1 | 0777;
   VAR_10->i_op = &VAR_9;
   VAR_10->i_data.a_ops = &VAR_8;
   VAR_10->i_nlink = 1;
   VAR_10->i_size = VAR_16;
   VAR_10->i_blocks = 1;
   FUNC_4(VAR_11);
   return;
  }
  if ((VAR_15 = FUNC_6(VAR_10->i_sb, VAR_12, "MODE", &VAR_16))) {
   int VAR_17 = 0;
   umode_t VAR_18 = FUNC_9(VAR_13)->sb_mode;
   if (VAR_16 == 2) {
    VAR_18 = FUNC_12(*(__le16*)VAR_15);
    VAR_14->i_ea_mode = 1;
   }
   FUNC_11(VAR_15);
   VAR_10->i_mode = VAR_18;
   if (FUNC_0(VAR_18) || FUNC_1(VAR_18)) {
    if ((VAR_15 = FUNC_6(VAR_10->i_sb, VAR_12, "DEV", &VAR_16))) {
     if (VAR_16 == 4)
      VAR_17 = FUNC_13(*(__le32*)VAR_15);
     FUNC_11(VAR_15);
    }
   }
   if (FUNC_0(VAR_18) || FUNC_1(VAR_18) || FUNC_2(VAR_18) || FUNC_3(VAR_18)) {
    FUNC_4(VAR_11);
    VAR_10->i_nlink = 1;
    VAR_10->i_size = 0;
    VAR_10->i_blocks = 1;
    FUNC_10(VAR_10, VAR_18,
     FUNC_15(VAR_17));
    return;
   }
  }
 }
 if (VAR_12->dirflag) {
  unsigned VAR_19, VAR_20;
  VAR_10->i_mode |= VAR_0;
  VAR_10->i_op = &VAR_4;
  VAR_10->i_fop = &VAR_5;
  VAR_14->i_parent_dir = VAR_12->up;
  VAR_14->i_dno = VAR_12->u.external[0].disk_secno;
  if (FUNC_9(VAR_13)->sb_chk >= 2) {
   struct buffer_head *VAR_21;
   if (FUNC_8(VAR_13, VAR_14->i_parent_dir, &VAR_21)) FUNC_4(VAR_21);
  }
  VAR_19 = 0; VAR_20 = 0;
  FUNC_5(VAR_10->i_sb, VAR_14->i_dno, &VAR_19, &VAR_20, ((void*)0));
  VAR_10->i_blocks = 4 * VAR_19;
  VAR_10->i_size = 2048 * VAR_19;
  VAR_10->i_nlink = 2 + VAR_20;
 } else {
  VAR_10->i_mode |= VAR_2;
  if (!VAR_14->i_ea_mode) VAR_10->i_mode &= ~0111;
  VAR_10->i_op = &VAR_6;
  VAR_10->i_fop = &VAR_7;
  VAR_10->i_nlink = 1;
  VAR_10->i_size = VAR_12->file_size;
  VAR_10->i_blocks = ((VAR_10->i_size + 511) >> 9) + 1;
  VAR_10->i_data.a_ops = &VAR_3;
  FUNC_7(VAR_10)->mmu_private = VAR_10->i_size;
 }
 FUNC_4(VAR_11);
}
