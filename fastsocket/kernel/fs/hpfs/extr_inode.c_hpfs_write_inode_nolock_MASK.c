
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_5__ {int tv_sec; } ;
struct inode {scalar_t__ i_ino; int i_mode; int i_sb; TYPE_3__ i_ctime; TYPE_2__ i_atime; TYPE_1__ i_mtime; scalar_t__ i_size; scalar_t__ i_nlink; } ;
struct hpfs_inode_info {int i_dno; scalar_t__ i_ea_size; } ;
struct hpfs_dirent {int read_only; scalar_t__ file_size; scalar_t__ ea_size; void* creation_date; void* read_date; void* write_date; } ;
struct fnode {scalar_t__ file_size; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {scalar_t__ sb_root; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct quad_buffer_head*) ;
 int FUNC_5 (int ,char*,unsigned long) ;
 struct hpfs_inode_info* FUNC_6 (struct inode*) ;
 struct fnode* FUNC_7 (int ,scalar_t__,struct buffer_head**) ;
 int FUNC_8 (struct quad_buffer_head*) ;
 TYPE_4__* FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,struct fnode*) ;
 struct hpfs_dirent* FUNC_11 (struct inode*,int ,char*,int,int *,struct quad_buffer_head*) ;
 struct hpfs_dirent* FUNC_12 (int ,scalar_t__,struct fnode*,struct quad_buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;

void FUNC_14(struct inode *VAR_0)
{
 struct hpfs_inode_info *VAR_1 = FUNC_6(VAR_0);
 struct buffer_head *VAR_2;
 struct fnode *VAR_3;
 struct quad_buffer_head VAR_4;
 struct hpfs_dirent *VAR_5;
 if (VAR_0->i_ino == FUNC_9(VAR_0->i_sb)->sb_root) return;
 if (!(VAR_3 = FUNC_7(VAR_0->i_sb, VAR_0->i_ino, &VAR_2))) return;
 if (VAR_0->i_ino != FUNC_9(VAR_0->i_sb)->sb_root && VAR_0->i_nlink) {
  if (!(VAR_5 = FUNC_12(VAR_0->i_sb, VAR_0->i_ino, VAR_3, &VAR_4))) {
   FUNC_2(VAR_2);
   return;
  }
 } else VAR_5 = ((void*)0);
 if (FUNC_1(VAR_0->i_mode)) {
  VAR_3->file_size = VAR_0->i_size;
  if (VAR_5) VAR_5->file_size = VAR_0->i_size;
 } else if (FUNC_0(VAR_0->i_mode)) {
  VAR_3->file_size = 0;
  if (VAR_5) VAR_5->file_size = 0;
 }
 FUNC_10(VAR_0, VAR_3);
 if (VAR_5) {
  VAR_5->write_date = FUNC_3(VAR_0->i_sb, VAR_0->i_mtime.tv_sec);
  VAR_5->read_date = FUNC_3(VAR_0->i_sb, VAR_0->i_atime.tv_sec);
  VAR_5->creation_date = FUNC_3(VAR_0->i_sb, VAR_0->i_ctime.tv_sec);
  VAR_5->read_only = !(VAR_0->i_mode & 0222);
  VAR_5->ea_size = VAR_1->i_ea_size;
  FUNC_8(&VAR_4);
  FUNC_4(&VAR_4);
 }
 if (FUNC_0(VAR_0->i_mode)) {
  if ((VAR_5 = FUNC_11(VAR_0, VAR_1->i_dno, "\001\001", 2, ((void*)0), &VAR_4))) {
   VAR_5->write_date = FUNC_3(VAR_0->i_sb, VAR_0->i_mtime.tv_sec);
   VAR_5->read_date = FUNC_3(VAR_0->i_sb, VAR_0->i_atime.tv_sec);
   VAR_5->creation_date = FUNC_3(VAR_0->i_sb, VAR_0->i_ctime.tv_sec);
   VAR_5->read_only = !(VAR_0->i_mode & 0222);
   VAR_5->ea_size = 0;
   VAR_5->file_size = 0;
   FUNC_8(&VAR_4);
   FUNC_4(&VAR_4);
  } else
   FUNC_5(VAR_0->i_sb,
    "directory %08lx doesn't have '.' entry",
    (unsigned long)VAR_0->i_ino);
 }
 FUNC_13(VAR_2);
 FUNC_2(VAR_2);
}
