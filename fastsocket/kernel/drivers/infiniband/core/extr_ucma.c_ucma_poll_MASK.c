
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {int event_list; int poll_wait; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct ucma_file* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct ucma_file *VAR_4 = VAR_2->private_data;
 unsigned int VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_4->poll_wait, VAR_3);

 if (!FUNC_0(&VAR_4->event_list))
  VAR_5 = VAR_0 | VAR_1;

 return VAR_5;
}
