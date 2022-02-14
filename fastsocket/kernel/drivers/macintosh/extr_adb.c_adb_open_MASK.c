
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct adbdev_state* private_data; } ;
struct adbdev_state {int inuse; int wait_queue; int * completed; int n_pending; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 struct adbdev_state* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 struct adbdev_state *VAR_6;
 int VAR_7 = 0;

 FUNC_4();
 if (FUNC_1(VAR_4) > 0 || VAR_3 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_6 = FUNC_3(sizeof(struct adbdev_state), VAR_2);
 if (VAR_6 == 0) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_5->private_data = VAR_6;
 FUNC_5(&VAR_6->lock);
 FUNC_0(&VAR_6->n_pending, 0);
 VAR_6->completed = ((void*)0);
 FUNC_2(&VAR_6->wait_queue);
 VAR_6->inuse = 1;

out:
 FUNC_6();
 return VAR_7;
}
