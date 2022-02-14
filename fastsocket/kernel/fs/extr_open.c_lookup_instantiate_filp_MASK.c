
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct file* file; } ;
struct TYPE_5__ {TYPE_3__ open; } ;
struct TYPE_4__ {int mnt; } ;
struct nameidata {TYPE_2__ intent; TYPE_1__ path; } ;
struct file {int dummy; } ;
typedef struct file dentry ;
struct cred {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 struct file* FUNC_1 (int ,int ,struct file*,int (*) (struct inode*,struct file*),struct cred const*) ;
 struct cred* FUNC_2 () ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nameidata*) ;

struct file *FUNC_6(struct nameidata *VAR_0, struct dentry *VAR_1,
  int (*VAR_2)(struct inode *, struct file *))
{
 const struct cred *VAR_3 = FUNC_2();

 if (FUNC_0(VAR_0->intent.open.file))
  goto out;
 if (FUNC_0(VAR_1))
  goto out_err;
 VAR_0->intent.open.file = FUNC_1(FUNC_3(VAR_1), FUNC_4(VAR_0->path.mnt),
          VAR_0->intent.open.file,
          VAR_2, VAR_3);
out:
 return VAR_0->intent.open.file;
out_err:
 FUNC_5(VAR_0);
 VAR_0->intent.open.file = (struct file *)VAR_1;
 goto out;
}
