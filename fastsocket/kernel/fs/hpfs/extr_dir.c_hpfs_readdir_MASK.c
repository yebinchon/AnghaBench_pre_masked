
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_sb; int i_version; } ;
struct hpfs_inode_info {scalar_t__ i_dno; scalar_t__ i_parent_dir; } ;
struct hpfs_dirent {int namelen; int* name; scalar_t__ fnode; int not_8x3; scalar_t__ last; scalar_t__ first; } ;
struct TYPE_9__ {TYPE_3__* external; } ;
struct fnode {TYPE_4__ u; int dirflag; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {int f_pos; int f_version; TYPE_2__ f_path; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int,long,scalar_t__,int ) ;
struct TYPE_10__ {int sb_chk; int sb_lowercase; } ;
struct TYPE_8__ {scalar_t__ disk_secno; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,int*) ;
 int FUNC_2 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,char*,long,...) ;
 struct hpfs_inode_info* FUNC_6 (struct inode*) ;
 struct fnode* FUNC_7 (int ,scalar_t__,struct buffer_head**) ;
 TYPE_5__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int,int*,int*,char*) ;
 char* FUNC_10 (int ,int*,int,int,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 struct hpfs_dirent* FUNC_13 (struct inode*,long*,struct quad_buffer_head*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct file *VAR_5, void *VAR_6, filldir_t VAR_7)
{
 struct inode *VAR_8 = VAR_5->f_path.dentry->d_inode;
 struct hpfs_inode_info *VAR_9 = FUNC_6(VAR_8);
 struct quad_buffer_head VAR_10;
 struct hpfs_dirent *VAR_11;
 int VAR_12;
 long VAR_13;
 char *VAR_14;
 int VAR_15, VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_12();

 if (FUNC_8(VAR_8->i_sb)->sb_chk) {
  if (FUNC_3(VAR_8->i_sb, VAR_8->i_ino, 1, "dir_fnode")) {
   VAR_17 = -VAR_2;
   goto out;
  }
  if (FUNC_3(VAR_8->i_sb, VAR_9->i_dno, 4, "dir_dnode")) {
   VAR_17 = -VAR_2;
   goto out;
  }
 }
 if (FUNC_8(VAR_8->i_sb)->sb_chk >= 2) {
  struct buffer_head *VAR_18;
  struct fnode *VAR_19;
  int VAR_20 = 0;
  if (!(VAR_19 = FUNC_7(VAR_8->i_sb, VAR_8->i_ino, &VAR_18))) {
   VAR_17 = -VAR_3;
   goto out;
  }
  if (!VAR_19->dirflag) {
   VAR_20 = 1;
   FUNC_5(VAR_8->i_sb, "not a directory, fnode %08lx",
     (unsigned long)VAR_8->i_ino);
  }
  if (VAR_9->i_dno != VAR_19->u.external[0].disk_secno) {
   VAR_20 = 1;
   FUNC_5(VAR_8->i_sb, "corrupted inode: i_dno == %08x, fnode -> dnode == %08x", VAR_9->i_dno, VAR_19->u.external[0].disk_secno);
  }
  FUNC_0(VAR_18);
  if (VAR_20) {
   VAR_17 = -VAR_2;
   goto out;
  }
 }
 VAR_12 = FUNC_8(VAR_8->i_sb)->sb_lowercase;
 if (VAR_5->f_pos == 12) {
  VAR_5->f_pos = 13;
  goto out;
 }
 if (VAR_5->f_pos == 13) {
  VAR_17 = -VAR_4;
  goto out;
 }

 while (1) {
  again:



  if (FUNC_8(VAR_8->i_sb)->sb_chk)
   if (FUNC_9(VAR_8->i_sb, VAR_5->f_pos, &VAR_15, &VAR_16, "hpfs_readdir")) {
    VAR_17 = -VAR_2;
    goto out;
   }
  if (VAR_5->f_pos == 12)
   goto out;
  if (VAR_5->f_pos == 3 || VAR_5->f_pos == 4 || VAR_5->f_pos == 5) {
   FUNC_14("HPFS: warning: pos==%d\n",(int)VAR_5->f_pos);
   goto out;
  }
  if (VAR_5->f_pos == 0) {
   if (VAR_7(VAR_6, ".", 1, VAR_5->f_pos, VAR_8->i_ino, VAR_0) < 0)
    goto out;
   VAR_5->f_pos = 11;
  }
  if (VAR_5->f_pos == 11) {
   if (VAR_7(VAR_6, "..", 2, VAR_5->f_pos, VAR_9->i_parent_dir, VAR_0) < 0)
    goto out;
   VAR_5->f_pos = 1;
  }
  if (VAR_5->f_pos == 1) {
   VAR_5->f_pos = ((loff_t) FUNC_4(VAR_8->i_sb, VAR_9->i_dno) << 4) + 1;
   FUNC_1(VAR_8, &VAR_5->f_pos);
   VAR_5->f_version = VAR_8->i_version;
  }
  VAR_13 = VAR_5->f_pos;
  if (!(VAR_11 = FUNC_13(VAR_8, &VAR_5->f_pos, &VAR_10))) {
   VAR_17 = -VAR_3;
   goto out;
  }
  if (VAR_11->first || VAR_11->last) {
   if (FUNC_8(VAR_8->i_sb)->sb_chk) {
    if (VAR_11->first && !VAR_11->last && (VAR_11->namelen != 2
        || VAR_11 ->name[0] != 1 || VAR_11->name[1] != 1))
     FUNC_5(VAR_8->i_sb, "hpfs_readdir: bad ^A^A entry; pos = %08lx", VAR_13);
    if (VAR_11->last && (VAR_11->namelen != 1 || VAR_11 ->name[0] != 255))
     FUNC_5(VAR_8->i_sb, "hpfs_readdir: bad \\377 entry; pos = %08lx", VAR_13);
   }
   FUNC_2(&VAR_10);
   goto again;
  }
  VAR_14 = FUNC_10(VAR_8->i_sb, VAR_11->name, VAR_11->namelen, VAR_12, VAR_11->not_8x3);
  if (VAR_7(VAR_6, VAR_14, VAR_11->namelen, VAR_13, VAR_11->fnode, VAR_1) < 0) {
   VAR_5->f_pos = VAR_13;
   if (VAR_14 != (char *)VAR_11->name) FUNC_11(VAR_14);
   FUNC_2(&VAR_10);
   goto out;
  }
  if (VAR_14 != (char *)VAR_11->name) FUNC_11(VAR_14);
  FUNC_2(&VAR_10);
 }
out:
 FUNC_15();
 return VAR_17;
}
