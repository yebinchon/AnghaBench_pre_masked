
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int mnt; int dentry; } ;
struct TYPE_5__ {struct file* file; } ;
struct TYPE_6__ {TYPE_1__ open; } ;
struct nameidata {TYPE_4__ path; TYPE_2__ intent; } ;
struct TYPE_7__ {int * dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct cred {int dummy; } ;


 struct file* FUNC_0 (int ,int ,struct file*,int *,struct cred const*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;

struct file *FUNC_3(struct nameidata *VAR_0)
{
 const struct cred *VAR_1 = FUNC_1();
 struct file *VAR_2;


 VAR_2 = VAR_0->intent.open.file;

 if (VAR_2->f_path.dentry == ((void*)0))
  VAR_2 = FUNC_0(VAR_0->path.dentry, VAR_0->path.mnt, VAR_2,
         ((void*)0), VAR_1);
 else
  FUNC_2(&VAR_0->path);
 return VAR_2;
}
