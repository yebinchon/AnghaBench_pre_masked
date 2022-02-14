
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct seq_file {int dummy; } ;
struct fuse_conn {int flags; int max_read; int group_id; int user_id; } ;
struct TYPE_2__ {int s_blocksize; scalar_t__ s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fuse_conn* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_3, struct vfsmount *VAR_4)
{
 struct fuse_conn *VAR_5 = FUNC_0(VAR_4->mnt_sb);

 FUNC_1(VAR_3, ",user_id=%u", VAR_5->user_id);
 FUNC_1(VAR_3, ",group_id=%u", VAR_5->group_id);
 if (VAR_5->flags & VAR_2)
  FUNC_2(VAR_3, ",default_permissions");
 if (VAR_5->flags & VAR_0)
  FUNC_2(VAR_3, ",allow_other");
 if (VAR_5->max_read != ~0)
  FUNC_1(VAR_3, ",max_read=%u", VAR_5->max_read);
 if (VAR_4->mnt_sb->s_bdev &&
     VAR_4->mnt_sb->s_blocksize != VAR_1)
  FUNC_1(VAR_3, ",blksize=%lu", VAR_4->mnt_sb->s_blocksize);
 return 0;
}
