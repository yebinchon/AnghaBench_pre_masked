
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd_ctx {int rcu; int tmr; } ;
struct inode {int dummy; } ;
struct file {struct timerfd_ctx* private_data; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct timerfd_ctx*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct timerfd_ctx *VAR_3 = VAR_2->private_data;

 FUNC_2(VAR_3);
 FUNC_1(&VAR_3->tmr);
 FUNC_0(&VAR_3->rcu, VAR_0);
 return 0;
}
