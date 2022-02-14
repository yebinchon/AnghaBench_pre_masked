
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gpio_private {scalar_t__ minor; int lowalarm; unsigned long highalarm; struct gpio_private* next; } ;
struct file {struct gpio_private* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gpio_private* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gpio_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_5, struct file *VAR_6)
{
 struct gpio_private *VAR_7;
 struct gpio_private *VAR_8;

 unsigned long VAR_9, VAR_10;


 VAR_8 = VAR_6->private_data;


 if (VAR_8->minor <= VAR_2) {
  FUNC_1(&VAR_4);
  VAR_7 = VAR_3;

  if (VAR_7 == VAR_8)
   VAR_3 = VAR_8->next;
   else {
   while (VAR_7->next != VAR_8)
    VAR_7 = VAR_7->next;
   VAR_7->next = VAR_8->next;
  }


  VAR_7 = VAR_3;
  VAR_9 = 0;
  VAR_10 = 0;
  while (VAR_7) {
   if (VAR_7->minor == VAR_1) {



    VAR_9 |= VAR_7->highalarm;
    VAR_10 |= VAR_7->lowalarm;
   }

   VAR_7 = VAR_7->next;
  }
  FUNC_2(&VAR_4);
 }
 FUNC_0(VAR_8);

 return 0;
}
