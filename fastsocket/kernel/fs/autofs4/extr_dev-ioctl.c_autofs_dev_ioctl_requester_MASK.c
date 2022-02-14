
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dentry; } ;
struct file {int dummy; } ;
struct autofs_sb_info {int fs_lock; TYPE_1__* sb; } ;
struct autofs_info {int uid; int gid; } ;
struct TYPE_4__ {int uid; int gid; } ;
struct autofs_dev_ioctl {int size; TYPE_2__ requester; int path; } ;
typedef int dev_t ;
struct TYPE_3__ {int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct autofs_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct path*,int ,int *) ;
 int FUNC_3 (struct path*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3,
          struct autofs_sb_info *VAR_4,
          struct autofs_dev_ioctl *VAR_5)
{
 struct autofs_info *VAR_6;
 struct path VAR_7;
 dev_t VAR_8;
 int VAR_9 = -VAR_1;

 if (VAR_5->size <= sizeof(*VAR_5)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_8 = VAR_4->sb->s_dev;

 VAR_5->requester.uid = VAR_5->requester.gid = -1;

 VAR_9 = FUNC_2(VAR_5->path, &VAR_7, VAR_2, &VAR_8);
 if (VAR_9)
  goto out;

 VAR_6 = FUNC_0(VAR_7.dentry);
 if (VAR_6) {
  VAR_9 = 0;
  FUNC_1(VAR_7.dentry);
  FUNC_4(&VAR_4->fs_lock);
  VAR_5->requester.uid = VAR_6->uid;
  VAR_5->requester.gid = VAR_6->gid;
  FUNC_5(&VAR_4->fs_lock);
 }
 FUNC_3(&VAR_7);
out:
 return VAR_9;
}
