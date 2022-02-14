
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct file {int f_mapping; TYPE_1__ f_path; } ;
struct TYPE_8__ {int name; } ;
struct dentry {TYPE_4__ d_name; TYPE_3__* d_parent; struct inode* d_inode; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_2__ d_name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_3(struct file * VAR_1, struct vm_area_struct * VAR_2)
{
 struct dentry *VAR_3 = VAR_1->f_path.dentry;
 struct inode *VAR_4 = VAR_3->d_inode;
 int VAR_5;

 FUNC_0("NFS: mmap(%s/%s)\n",
  VAR_3->d_parent->d_name.name, VAR_3->d_name.name);




 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_5) {
  VAR_2->vm_ops = &VAR_0;
  VAR_5 = FUNC_2(VAR_4, VAR_1->f_mapping);
 }
 return VAR_5;
}
