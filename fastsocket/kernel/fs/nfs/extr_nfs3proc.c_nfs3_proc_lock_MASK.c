
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {int nlm_host; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int,struct file_lock*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, int VAR_1, struct file_lock *VAR_2)
{
 struct inode *VAR_3 = VAR_0->f_path.dentry->d_inode;

 return FUNC_1(FUNC_0(VAR_3)->nlm_host, VAR_1, VAR_2);
}
