
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handler {struct file_operations const* fops; } ;
struct inode {int dummy; } ;
typedef struct file_operations {int (* open ) (struct inode*,struct file*) ;} const file_operations ;
struct file {struct file_operations const* f_op; } ;


 int VAR_0 ;
 void* FUNC_0 (struct file_operations const*) ;
 int FUNC_1 (struct file_operations const*) ;
 int FUNC_2 (struct inode*) ;
 struct input_handler** VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct input_handler *VAR_4;
 const struct file_operations *VAR_5, *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_3();

 VAR_4 = VAR_1[FUNC_2(VAR_2) >> 5];
 if (!VAR_4 || !(VAR_6 = FUNC_0(VAR_4->fops))) {
  VAR_7 = -VAR_0;
  goto out;
 }





 if (!VAR_6->open) {
  FUNC_1(VAR_6);
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_5 = VAR_3->f_op;
 VAR_3->f_op = VAR_6;

 VAR_7 = VAR_6->open(VAR_2, VAR_3);

 if (VAR_7) {
  FUNC_1(VAR_3->f_op);
  VAR_3->f_op = FUNC_0(VAR_5);
 }
 FUNC_1(VAR_5);
out:
 FUNC_5();
 return VAR_7;
}
