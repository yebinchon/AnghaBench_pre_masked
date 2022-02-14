
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;

void FUNC_0(struct fb_info *VAR_1,
    struct inode *VAR_2,
    struct file *VAR_3)
{
 VAR_3->f_mapping->a_ops = &VAR_0;
}
