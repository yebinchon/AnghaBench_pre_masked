
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v9fs_session_info {int dfltgid; int dfltuid; } ;
struct super_block {struct v9fs_session_info* s_fs_info; } ;
struct p9_wstat {int length; int extension; int mode; int n_gid; int n_uid; int mtime; int atime; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_5__ {int tv_sec; } ;
struct TYPE_4__ {int tv_sec; } ;
struct inode {int i_nlink; int i_blocks; scalar_t__ i_rdev; int i_mode; int i_gid; int i_uid; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; } ;
typedef int ext ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,int ,scalar_t__) ;
 int FUNC_7 (struct v9fs_session_info*,int ) ;
 int FUNC_8 (char*,char*,char*,int*,int*) ;
 int FUNC_9 (char*,int ,int) ;
 scalar_t__ FUNC_10 (struct v9fs_session_info*) ;

void
FUNC_11(struct p9_wstat *VAR_3, struct inode *VAR_4,
 struct super_block *VAR_5)
{
 char VAR_6[32];
 struct v9fs_session_info *VAR_7 = VAR_5->s_fs_info;

 VAR_4->i_nlink = 1;

 VAR_4->i_atime.tv_sec = VAR_3->atime;
 VAR_4->i_mtime.tv_sec = VAR_3->mtime;
 VAR_4->i_ctime.tv_sec = VAR_3->mtime;

 VAR_4->i_uid = VAR_7->dfltuid;
 VAR_4->i_gid = VAR_7->dfltgid;

 if (FUNC_10(VAR_7)) {
  VAR_4->i_uid = VAR_3->n_uid;
  VAR_4->i_gid = VAR_3->n_gid;
 }

 VAR_4->i_mode = FUNC_7(VAR_7, VAR_3->mode);
 if ((FUNC_2(VAR_4->i_mode)) || (FUNC_3(VAR_4->i_mode))) {
  char VAR_8 = 0;
  int VAR_9 = -1;
  int VAR_10 = -1;

  FUNC_9(VAR_6, VAR_3->extension, sizeof(VAR_6));
  FUNC_8(VAR_6, "%c %u %u", &VAR_8, &VAR_9, &VAR_10);
  switch (VAR_8) {
  case 'c':
   VAR_4->i_mode &= ~VAR_1;
   VAR_4->i_mode |= VAR_2;
   break;
  case 'b':
   break;
  default:
   FUNC_1(VAR_0,
    "Unknown special type %c %s\n", VAR_8,
    VAR_3->extension);
  };
  VAR_4->i_rdev = FUNC_0(VAR_9, VAR_10);
  FUNC_6(VAR_4, VAR_4->i_mode, VAR_4->i_rdev);
 } else
  VAR_4->i_rdev = 0;

 FUNC_5(VAR_4, VAR_3->length);


 VAR_4->i_blocks = (FUNC_4(VAR_4) + 512 - 1) >> 9;
}
