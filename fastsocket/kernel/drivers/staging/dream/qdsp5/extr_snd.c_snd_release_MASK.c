
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctxt {int lock; scalar_t__ opened; } ;
struct inode {int dummy; } ;
struct file {struct snd_ctxt* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct snd_ctxt *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->lock);
 VAR_2->opened = 0;
 FUNC_1(&VAR_2->lock);
 return 0;
}
