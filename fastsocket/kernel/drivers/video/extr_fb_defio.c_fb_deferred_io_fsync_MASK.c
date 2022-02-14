
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct fb_info* private_data; } ;
struct fb_info {int deferred_work; int fbdefio; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct fb_info *VAR_3 = VAR_0->private_data;


 if (!VAR_3->fbdefio)
  return 0;


 FUNC_0(&VAR_3->deferred_work);


 return FUNC_1(&VAR_3->deferred_work, 0);
}
