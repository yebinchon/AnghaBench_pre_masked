
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gpio_private {int minor; struct gpio_private* next; int alarm_wq; scalar_t__ lowalarm; scalar_t__ highalarm; scalar_t__ data_mask; scalar_t__ clk_mask; } ;
struct file {void* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gpio_private* VAR_5 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 struct gpio_private* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gpio_private*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_6, struct file *VAR_7)
{
 struct gpio_private *VAR_8;
 int VAR_9 = FUNC_0(VAR_6);

 if (VAR_9 > VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_2(sizeof(struct gpio_private), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_3();
 FUNC_4(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->minor = VAR_9;



 VAR_8->clk_mask = 0;
 VAR_8->data_mask = 0;
 VAR_8->highalarm = 0;
 VAR_8->lowalarm = 0;
 FUNC_1(&VAR_8->alarm_wq);

 VAR_7->private_data = (void *)VAR_8;


 FUNC_5(&VAR_4);
 VAR_8->next = VAR_5;
 VAR_5 = VAR_8;
 FUNC_6(&VAR_4);

 FUNC_7();
 return 0;
}
