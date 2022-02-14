
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_open_dir_context {scalar_t__ duped; scalar_t__ dir_cookie; } ;
struct inode {int i_mutex; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_pos; struct nfs_open_dir_context* private_data; TYPE_1__ f_path; } ;
struct TYPE_8__ {int name; } ;
struct dentry {TYPE_4__ d_name; TYPE_3__* d_parent; struct inode* d_inode; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_2__ d_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct dentry *VAR_5 = VAR_2->f_path.dentry;
 struct inode *VAR_6 = VAR_5->d_inode;
 struct nfs_open_dir_context *VAR_7 = VAR_2->private_data;

 FUNC_0(VAR_1, "NFS: llseek dir(%s/%s, %lld, %d)\n",
   VAR_5->d_parent->d_name.name,
   VAR_5->d_name.name,
   VAR_3, VAR_4);

 FUNC_1(&VAR_6->i_mutex);
 switch (VAR_4) {
  case 1:
   VAR_3 += VAR_2->f_pos;
  case 0:
   if (VAR_3 >= 0)
    break;
  default:
   VAR_3 = -VAR_0;
   goto out;
 }
 if (VAR_3 != VAR_2->f_pos) {
  VAR_2->f_pos = VAR_3;
  VAR_7->dir_cookie = 0;
  VAR_7->duped = 0;
 }
out:
 FUNC_2(&VAR_6->i_mutex);
 return VAR_3;
}
