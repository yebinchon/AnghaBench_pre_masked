
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mdp_img {int memory_id; } ;
struct file {TYPE_1__* f_dentry; } ;
struct TYPE_5__ {unsigned long smem_start; unsigned long smem_len; } ;
struct fb_info {TYPE_2__ fix; } ;
struct TYPE_6__ {int i_rdev; } ;
struct TYPE_4__ {TYPE_3__* d_inode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct file* FUNC_1 (int ,int*) ;
 int FUNC_2 (struct file*,int) ;

int FUNC_3(struct mdp_img *VAR_1, struct fb_info *VAR_2,
     unsigned long *VAR_3, unsigned long *VAR_4,
     struct file **VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct file *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_1(VAR_1->memory_id, &VAR_6);
 if (VAR_8 == ((void*)0))
  return -1;

 if (FUNC_0(VAR_8->f_dentry->d_inode->i_rdev) == VAR_0) {
  *VAR_3 = VAR_2->fix.smem_start;
  *VAR_4 = VAR_2->fix.smem_len;
 } else
  VAR_7 = -1;
 FUNC_2(VAR_8, VAR_6);

 return VAR_7;
}
