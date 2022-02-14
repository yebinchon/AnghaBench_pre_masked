
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int aen_queue; } ;
struct inode {int dummy; } ;
struct file {struct pmcraid_instance* private_data; } ;


 int FUNC_0 (int,struct file*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct pmcraid_instance *VAR_2 = VAR_1->private_data;

 VAR_1->private_data = ((void*)0);
 FUNC_0(-1, VAR_1, 0, &VAR_2->aen_queue);

 return 0;
}
