
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; int is_open; int data_buffer; int data_pending; int user_read_timer; } ;
struct inode {int dummy; } ;
struct file {struct tpm_chip* private_data; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct tpm_chip *VAR_2 = VAR_1->private_data;

 FUNC_2(&VAR_2->user_read_timer);
 FUNC_3();
 VAR_1->private_data = ((void*)0);
 FUNC_0(&VAR_2->data_pending, 0);
 FUNC_4(VAR_2->data_buffer);
 FUNC_1(0, &VAR_2->is_open);
 FUNC_5(VAR_2->dev);
 return 0;
}
