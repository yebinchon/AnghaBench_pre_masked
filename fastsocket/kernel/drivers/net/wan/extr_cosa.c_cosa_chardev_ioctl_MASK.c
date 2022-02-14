
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct channel_data* private_data; } ;
struct cosa_data {int dummy; } ;
struct channel_data {struct cosa_data* cosa; } ;


 int FUNC_0 (struct cosa_data*,struct channel_data*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1,
 unsigned int VAR_2, unsigned long VAR_3)
{
 struct channel_data *VAR_4 = VAR_1->private_data;
 struct cosa_data *VAR_5 = VAR_4->cosa;
 return FUNC_0(VAR_5, VAR_4, VAR_2, VAR_3);
}
