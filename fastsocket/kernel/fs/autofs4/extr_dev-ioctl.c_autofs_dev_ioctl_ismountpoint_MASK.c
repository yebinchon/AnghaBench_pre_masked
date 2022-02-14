
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct path {scalar_t__ dentry; TYPE_4__* mnt; } ;
struct file {int dummy; } ;
struct autofs_sb_info {TYPE_2__* sb; } ;
struct TYPE_11__ {unsigned int devid; unsigned int magic; } ;
struct TYPE_7__ {unsigned int type; } ;
struct TYPE_12__ {TYPE_5__ out; TYPE_1__ in; } ;
struct autofs_dev_ioctl {int size; char* path; int ioctlfd; TYPE_6__ ismountpoint; } ;
typedef unsigned int dev_t ;
struct TYPE_10__ {scalar_t__ mnt_root; TYPE_3__* mnt_sb; } ;
struct TYPE_9__ {unsigned int s_dev; unsigned int s_magic; } ;
struct TYPE_8__ {unsigned int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char const*,struct path*,int ,unsigned int*) ;
 scalar_t__ FUNC_2 (struct path*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,int ,struct path*) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct path*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5,
      struct autofs_sb_info *VAR_6,
      struct autofs_dev_ioctl *VAR_7)
{
 struct path VAR_8;
 const char *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13 = -VAR_1;

 if (VAR_7->size <= sizeof(*VAR_7)) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_9 = VAR_7->path;
 VAR_10 = VAR_7->ismountpoint.in.type;

 VAR_7->ismountpoint.out.devid = VAR_11 = 0;
 VAR_7->ismountpoint.out.magic = VAR_12 = 0;

 if (!VAR_5 || VAR_7->ioctlfd == -1) {
  if (FUNC_0(VAR_10))
   VAR_13 = FUNC_4(VAR_9, VAR_2, &VAR_8);
  else
   VAR_13 = FUNC_1(VAR_9, &VAR_8, VAR_4, &VAR_10);
  if (VAR_13)
   goto out;
  VAR_11 = FUNC_5(VAR_8.mnt->mnt_sb->s_dev);
  VAR_13 = 0;
  if (VAR_8.mnt->mnt_root == VAR_8.dentry) {
   VAR_13 = 1;
   VAR_12 = VAR_8.mnt->mnt_sb->s_magic;
  }
 } else {
  dev_t VAR_14 = VAR_6->sb->s_dev;

  VAR_13 = FUNC_1(VAR_9, &VAR_8, VAR_3, &VAR_14);
  if (VAR_13)
   goto out;

  VAR_11 = FUNC_5(VAR_14);

  VAR_13 = FUNC_3(VAR_8.dentry);

  if (FUNC_2(&VAR_8))
   VAR_12 = VAR_8.mnt->mnt_sb->s_magic;
 }

 VAR_7->ismountpoint.out.devid = VAR_11;
 VAR_7->ismountpoint.out.magic = VAR_12;
 FUNC_6(&VAR_8);
out:
 return VAR_13;
}
