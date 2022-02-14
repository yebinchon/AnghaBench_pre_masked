
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
struct TYPE_8__ {struct dentry* dentry; } ;
struct file {TYPE_4__ f_path; } ;
struct TYPE_7__ {int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; struct inode* d_inode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,unsigned long,unsigned long long) ;
 scalar_t__ FUNC_1 (struct pipe_inode_info*,struct file*,scalar_t__*,size_t,unsigned int) ;
 int FUNC_2 (struct inode*,int ,size_t) ;
 scalar_t__ FUNC_3 (struct file*,struct inode*) ;
 int FUNC_4 (struct file*,struct dentry*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct pipe_inode_info *VAR_1,
         struct file *VAR_2, loff_t *VAR_3,
         size_t VAR_4, unsigned int VAR_5)
{
 struct dentry *VAR_6 = VAR_2->f_path.dentry;
 struct inode *VAR_7 = VAR_6->d_inode;
 ssize_t VAR_8;

 FUNC_0("NFS splice_write(%s/%s, %lu@%llu)\n",
  VAR_6->d_parent->d_name.name, VAR_6->d_name.name,
  (unsigned long) VAR_4, (unsigned long long) *VAR_3);





 FUNC_2(VAR_7, VAR_0, VAR_4);

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8 >= 0 && FUNC_3(VAR_2, VAR_7)) {
  int VAR_9 = FUNC_4(VAR_2, VAR_6, 0);
  if (VAR_9 < 0)
   VAR_8 = VAR_9;
 }
 return VAR_8;
}
