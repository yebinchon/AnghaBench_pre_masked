
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct adbdev_state* private_data; } ;
struct adbdev_state {int lock; scalar_t__ inuse; int * completed; int n_pending; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct adbdev_state*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct adbdev_state *VAR_2 = VAR_1->private_data;
 unsigned long VAR_3;

 FUNC_2();
 if (VAR_2) {
  VAR_1->private_data = ((void*)0);
  FUNC_3(&VAR_2->lock, VAR_3);
  if (FUNC_0(&VAR_2->n_pending) == 0
      && VAR_2->completed == ((void*)0)) {
   FUNC_4(&VAR_2->lock, VAR_3);
   FUNC_1(VAR_2);
  } else {
   VAR_2->inuse = 0;
   FUNC_4(&VAR_2->lock, VAR_3);
  }
 }
 FUNC_5();
 return 0;
}
