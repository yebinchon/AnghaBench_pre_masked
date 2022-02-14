
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {struct dentry* dentry; } ;
struct file {int f_mapping; TYPE_2__ f_path; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_1__ d_name; TYPE_4__* d_parent; struct inode* d_inode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_3__ d_name; } ;


 int FUNC_0 (char*,int ,int ,unsigned long,unsigned long long) ;
 scalar_t__ FUNC_1 (struct file*,scalar_t__*,struct pipe_inode_info*,size_t,unsigned int) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct file *VAR_0, loff_t *VAR_1,
       struct pipe_inode_info *VAR_2, size_t VAR_3,
       unsigned int VAR_4)
{
 struct dentry *VAR_5 = VAR_0->f_path.dentry;
 struct inode *VAR_6 = VAR_5->d_inode;
 ssize_t VAR_7;

 FUNC_0("NFS: splice_read(%s/%s, %lu@%Lu)\n",
  VAR_5->d_parent->d_name.name, VAR_5->d_name.name,
  (unsigned long) VAR_3, (unsigned long long) *VAR_1);

 VAR_7 = FUNC_2(VAR_6, VAR_0->f_mapping);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_7;
}
