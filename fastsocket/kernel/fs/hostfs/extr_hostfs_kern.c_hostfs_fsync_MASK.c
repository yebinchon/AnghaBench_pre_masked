
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {int fd; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 return FUNC_1(FUNC_0(VAR_1->d_inode)->fd, VAR_2);
}
