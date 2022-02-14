
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_path; TYPE_1__* f_dentry; } ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;

void FUNC_3(struct file *VAR_0)
{
 FUNC_0(VAR_0->f_dentry->d_inode);
 FUNC_1(&VAR_0->f_path);
 FUNC_2(VAR_0);
}
