
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_1__* mnt; TYPE_2__* dentry; } ;
struct inode {int i_mode; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {struct inode* d_inode; } ;
struct TYPE_3__ {int mnt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct block_device* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct block_device* FUNC_2 (struct inode*) ;
 int FUNC_3 (char const*,int ,struct path*) ;
 int FUNC_4 (struct path*) ;

struct block_device *FUNC_5(const char *VAR_6)
{
 struct block_device *VAR_7;
 struct inode *VAR_8;
 struct path VAR_9;
 int VAR_10;

 if (!VAR_6 || !*VAR_6)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_3(VAR_6, VAR_4, &VAR_9);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_8 = VAR_9.dentry->d_inode;
 VAR_10 = -VAR_3;
 if (!FUNC_1(VAR_8->i_mode))
  goto fail;
 VAR_10 = -VAR_0;
 if (VAR_9.mnt->mnt_flags & VAR_5)
  goto fail;
 VAR_10 = -VAR_2;
 VAR_7 = FUNC_2(VAR_8);
 if (!VAR_7)
  goto fail;
out:
 FUNC_4(&VAR_9);
 return VAR_7;
fail:
 VAR_7 = FUNC_0(VAR_10);
 goto out;
}
