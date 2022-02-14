
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


struct inode {int i_lock; } ;
struct TYPE_12__ {TYPE_4__* dentry; } ;
struct file {TYPE_2__* f_mapping; TYPE_6__ f_path; } ;
typedef int loff_t ;
struct TYPE_9__ {int name; } ;
struct TYPE_11__ {TYPE_3__ d_name; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_10__ {TYPE_1__ d_name; TYPE_5__* d_parent; } ;
struct TYPE_8__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int) ;
 int FUNC_1 (struct file*,int ,int) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static loff_t FUNC_5(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;

 FUNC_0("NFS: llseek file(%s/%s, %lld, %d)\n",
   VAR_1->f_path.dentry->d_parent->d_name.name,
   VAR_1->f_path.dentry->d_name.name,
   VAR_2, VAR_3);


 if (VAR_3 == VAR_0) {
  struct inode *VAR_5 = VAR_1->f_mapping->host;

  int VAR_6 = FUNC_2(VAR_5, VAR_1);
  if (VAR_6 < 0)
   return (loff_t)VAR_6;

  FUNC_3(&VAR_5->i_lock);
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  FUNC_4(&VAR_5->i_lock);
 } else
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
