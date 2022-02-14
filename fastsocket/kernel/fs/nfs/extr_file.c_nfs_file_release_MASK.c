
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct TYPE_8__ {int name; } ;
struct dentry {TYPE_4__ d_name; TYPE_3__* d_parent; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_2__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->f_path.dentry;

 FUNC_0("NFS: release(%s/%s)\n",
   VAR_3->d_parent->d_name.name,
   VAR_3->d_name.name);

 FUNC_1(VAR_1, VAR_0);
 return FUNC_2(VAR_1, VAR_2);
}
