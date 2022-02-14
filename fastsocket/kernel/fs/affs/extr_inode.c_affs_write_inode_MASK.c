
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
struct writeback_control {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_5__ {int tv_sec; } ;
struct inode {scalar_t__ i_ino; int i_uid; int i_gid; TYPE_1__ i_mtime; int i_size; int i_nlink; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct affs_tail {void* stype; void* gid; void* uid; int change; void* size; void* protect; } ;
typedef int gid_t ;
struct TYPE_8__ {int i_protect; } ;
struct TYPE_7__ {int root_change; } ;
struct TYPE_6__ {scalar_t__ s_root_block; int s_flags; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 struct affs_tail* FUNC_3 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct buffer_head* FUNC_4 (struct super_block*,scalar_t__) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct super_block*,char*,char*,scalar_t__) ;
 int FUNC_7 (struct super_block*,struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 void* FUNC_9 (int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (struct buffer_head*,struct inode*) ;
 int FUNC_12 (char*,scalar_t__) ;
 int FUNC_13 (int ,int *) ;

int
FUNC_14(struct inode *VAR_5, struct writeback_control *VAR_6)
{
 struct super_block *VAR_7 = VAR_5->i_sb;
 struct buffer_head *VAR_8;
 struct affs_tail *VAR_9;
 uid_t VAR_10;
 gid_t VAR_11;

 FUNC_12("AFFS: write_inode(%lu)\n",VAR_5->i_ino);

 if (!VAR_5->i_nlink)

  return 0;
 VAR_8 = FUNC_4(VAR_7, VAR_5->i_ino);
 if (!VAR_8) {
  FUNC_6(VAR_7,"write_inode","Cannot read block %lu",VAR_5->i_ino);
  return -VAR_0;
 }
 VAR_9 = FUNC_3(VAR_7, VAR_8);
 if (VAR_9->stype == FUNC_10(VAR_4)) {
  FUNC_13(VAR_5->i_mtime.tv_sec,&FUNC_1(VAR_7, VAR_8)->root_change);
 } else {
  VAR_9->protect = FUNC_10(FUNC_0(VAR_5)->i_protect);
  VAR_9->size = FUNC_10(VAR_5->i_size);
  FUNC_13(VAR_5->i_mtime.tv_sec,&VAR_9->change);
  if (!(VAR_5->i_ino == FUNC_2(VAR_7)->s_root_block)) {
   VAR_10 = VAR_5->i_uid;
   VAR_11 = VAR_5->i_gid;
   if (FUNC_2(VAR_7)->s_flags & VAR_1) {
    if (VAR_5->i_uid == 0 || VAR_5->i_uid == 0xFFFF)
     VAR_10 = VAR_5->i_uid ^ ~0;
    if (VAR_5->i_gid == 0 || VAR_5->i_gid == 0xFFFF)
     VAR_11 = VAR_5->i_gid ^ ~0;
   }
   if (!(FUNC_2(VAR_7)->s_flags & VAR_3))
    VAR_9->uid = FUNC_9(VAR_10);
   if (!(FUNC_2(VAR_7)->s_flags & VAR_2))
    VAR_9->gid = FUNC_9(VAR_11);
  }
 }
 FUNC_7(VAR_7, VAR_8);
 FUNC_11(VAR_8, VAR_5);
 FUNC_5(VAR_8);
 FUNC_8(VAR_5);
 return 0;
}
