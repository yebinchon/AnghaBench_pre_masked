
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_reader {int list; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct logger_reader* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct logger_reader*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 if (VAR_2->f_mode & VAR_0) {
  struct logger_reader *VAR_3 = VAR_2->private_data;
  FUNC_1(&VAR_3->list);
  FUNC_0(VAR_3);
 }

 return 0;
}
