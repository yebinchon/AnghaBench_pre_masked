
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct file_lock {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {struct cifsFileInfo* private_data; TYPE_2__ f_path; } ;
struct cifsFileInfo {int tlink; } ;
struct TYPE_8__ {scalar_t__ clientCanCacheRead; scalar_t__ clientCanCacheAll; } ;
struct TYPE_7__ {scalar_t__ local_lease; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,long,struct file_lock**) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, long VAR_5, struct file_lock **VAR_6)
{


 struct inode *VAR_7 = VAR_4->f_path.dentry->d_inode;
 struct cifsFileInfo *VAR_8 = VAR_4->private_data;

 if (!(FUNC_1(VAR_7->i_mode)))
  return -VAR_1;


 if (((VAR_5 == VAR_2) &&
  (FUNC_0(VAR_7)->clientCanCacheRead)) ||
     ((VAR_5 == VAR_3) &&
  (FUNC_0(VAR_7)->clientCanCacheAll)))
  return FUNC_2(VAR_4, VAR_5, VAR_6);
 else if (FUNC_3(VAR_8->tlink)->local_lease &&
   !FUNC_0(VAR_7)->clientCanCacheRead)







  return FUNC_2(VAR_4, VAR_5, VAR_6);
 else
  return -VAR_0;
}
