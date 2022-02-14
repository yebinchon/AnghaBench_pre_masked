
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct channel_data* private_data; } ;
struct cosa_data {int lock; int usage; } ;
struct channel_data {int usage; struct cosa_data* cosa; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct channel_data *VAR_2 = VAR_1->private_data;
 struct cosa_data *VAR_3;
 unsigned long VAR_4;

 VAR_3 = VAR_2->cosa;
 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_3->usage--;
 VAR_2->usage--;
 FUNC_1(&VAR_3->lock, VAR_4);
 return 0;
}
