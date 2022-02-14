
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_private {int list; int wait; int mode; int lock; } ;
struct inode {int dummy; } ;
struct file {struct smu_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct smu_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 struct smu_private *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1(sizeof(struct smu_private), VAR_1);
 if (VAR_7 == 0)
  return -VAR_0;
 FUNC_4(&VAR_7->lock);
 VAR_7->mode = VAR_4;
 FUNC_0(&VAR_7->wait);

 FUNC_3();
 FUNC_5(&VAR_3, VAR_8);
 FUNC_2(&VAR_7->list, &VAR_2);
 FUNC_6(&VAR_3, VAR_8);
 VAR_6->private_data = VAR_7;
 FUNC_7();

 return 0;
}
