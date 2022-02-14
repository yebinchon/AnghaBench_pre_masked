
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct fb_info {int dummy; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 long FUNC_0 (struct fb_info*,unsigned int,unsigned long) ;
 int FUNC_1 (struct inode*) ;
 struct fb_info** VAR_0 ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_path.dentry->d_inode;
 int VAR_5 = FUNC_1(VAR_4);
 struct fb_info *VAR_6 = VAR_0[VAR_5];

 return FUNC_0(VAR_6, VAR_2, VAR_3);
}
