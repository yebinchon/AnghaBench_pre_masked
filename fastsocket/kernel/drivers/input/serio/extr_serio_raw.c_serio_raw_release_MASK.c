
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw_list {struct serio_raw* serio_raw; } ;
struct serio_raw {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct serio_raw_list* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serio_raw*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct serio_raw_list *VAR_3 = VAR_2->private_data;
 struct serio_raw *VAR_4 = VAR_3->serio_raw;

 FUNC_0(&VAR_0);

 FUNC_2(VAR_4);

 FUNC_1(&VAR_0);
 return 0;
}
