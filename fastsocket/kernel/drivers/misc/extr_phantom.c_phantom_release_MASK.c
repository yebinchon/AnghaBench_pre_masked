
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phantom_device {int status; int open_lock; scalar_t__ opened; } ;
struct inode {int dummy; } ;
struct file {struct phantom_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phantom_device*,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct phantom_device *VAR_4 = VAR_3->private_data;

 FUNC_0(&VAR_4->open_lock);

 VAR_4->opened = 0;
 FUNC_2(VAR_4, VAR_4->status & ~VAR_1);
 VAR_4->status &= ~VAR_0;

 FUNC_1(&VAR_4->open_lock);

 return 0;
}
