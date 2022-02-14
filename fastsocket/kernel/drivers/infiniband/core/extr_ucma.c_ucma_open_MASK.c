
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {struct file* filp; int mut; int poll_wait; int ctx_list; int event_list; } ;
struct inode {int dummy; } ;
struct file {struct ucma_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ucma_file* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct ucma_file *VAR_4;

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->event_list);
 FUNC_0(&VAR_4->ctx_list);
 FUNC_1(&VAR_4->poll_wait);
 FUNC_3(&VAR_4->mut);

 VAR_3->private_data = VAR_4;
 VAR_4->filp = VAR_3;

 return FUNC_4(VAR_2, VAR_3);
}
