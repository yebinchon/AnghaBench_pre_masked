
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gpio_private {scalar_t__ minor; int lowalarm; unsigned long highalarm; struct gpio_private* next; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct gpio_private* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct gpio_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_7, struct file *VAR_8)
{
 struct gpio_private *VAR_9;
 struct gpio_private *VAR_10;

 unsigned long VAR_11, VAR_12;
 unsigned long VAR_13;



 FUNC_1(&VAR_2);
 VAR_9 = VAR_3;
 VAR_10 = (struct gpio_private *)VAR_8->private_data;

 if (VAR_9 == VAR_10) {
  VAR_3 = VAR_10->next;
 } else {
  while (VAR_9->next != VAR_10)
   VAR_9 = VAR_9->next;
  VAR_9->next = VAR_10->next;
 }

 FUNC_0(VAR_10);

 VAR_9 = VAR_3;
 VAR_13 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 while (VAR_9) {
  if (VAR_9->minor == VAR_1) {



   VAR_11 |= VAR_9->highalarm;
   VAR_12 |= VAR_9->lowalarm;
  }

  if (VAR_9->highalarm | VAR_9->lowalarm)
   VAR_13 = 1;
  VAR_9 = VAR_9->next;
 }
 VAR_6 = VAR_13;
 VAR_4 = VAR_11;
 VAR_5 = VAR_12;
 FUNC_2(&VAR_2);

 return 0;
}
