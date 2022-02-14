
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gpio_private {int highalarm; int lowalarm; struct gpio_private* next; } ;
struct file {struct gpio_private* private_data; } ;


 struct gpio_private* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_private*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 struct gpio_private *VAR_5;
 struct gpio_private *VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_1, VAR_7);

 VAR_5 = VAR_0;
 VAR_6 = VAR_4->private_data;



 if (VAR_5 == VAR_6) {
  VAR_0 = VAR_6->next;
 } else {
  while (VAR_5->next != VAR_6)
   VAR_5 = VAR_5->next;
  VAR_5->next = VAR_6->next;
 }

 FUNC_0(VAR_6);

 VAR_5 = VAR_0;
 while (VAR_5) {
  if (VAR_5->highalarm | VAR_5->lowalarm) {
   VAR_2 = 1;
   goto out;
  }
  VAR_5 = VAR_5->next;
 }
 VAR_2 = 0;
out:
 FUNC_2(&VAR_1, VAR_7);
 return 0;
}
