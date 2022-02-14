
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct smu_private {unsigned int busy; int list; int lock; int wait; TYPE_1__ cmd; int mode; } ;
struct inode {int dummy; } ;
struct file {struct smu_private* private_data; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct smu_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, struct file *VAR_7)
{
 struct smu_private *VAR_8 = VAR_7->private_data;
 unsigned long VAR_9;
 unsigned int VAR_10;

 if (VAR_8 == 0)
  return 0;

 VAR_7->private_data = ((void*)0);


 FUNC_7(&VAR_8->lock, VAR_9);
 VAR_8->mode = VAR_4;
 VAR_10 = VAR_8->busy;


 if (VAR_10 && VAR_8->cmd.status == 1) {
  FUNC_0(VAR_5, VAR_2);

  FUNC_1(&VAR_8->wait, &VAR_5);
  for (;;) {
   FUNC_6(VAR_1);
   if (VAR_8->cmd.status != 1)
    break;
   FUNC_8(&VAR_8->lock, VAR_9);
   FUNC_5();
   FUNC_7(&VAR_8->lock, VAR_9);
  }
  FUNC_6(VAR_0);
  FUNC_4(&VAR_8->wait, &VAR_5);
 }
 FUNC_8(&VAR_8->lock, VAR_9);

 FUNC_7(&VAR_3, VAR_9);
 FUNC_3(&VAR_8->list);
 FUNC_8(&VAR_3, VAR_9);
 FUNC_2(VAR_8);

 return 0;
}
