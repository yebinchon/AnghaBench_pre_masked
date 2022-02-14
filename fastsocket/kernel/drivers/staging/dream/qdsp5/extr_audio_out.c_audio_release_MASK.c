
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct audio* private_data; } ;
struct audio {int lock; scalar_t__ opened; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct audio*) ;
 int FUNC_2 (struct audio*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct audio *VAR_4 = VAR_3->private_data;

 FUNC_0(VAR_0, 0);
 FUNC_4(&VAR_4->lock);
 FUNC_1(VAR_4);
 FUNC_2(VAR_4);
 VAR_4->opened = 0;
 FUNC_5(&VAR_4->lock);
 FUNC_3(VAR_1, 0);
 return 0;
}
