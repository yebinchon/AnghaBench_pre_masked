
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gpio_private {int minor; struct gpio_private* next; int alarm_wq; scalar_t__ data_mask; scalar_t__ clk_mask; scalar_t__ lowalarm; scalar_t__ highalarm; scalar_t__ changeable_bits; scalar_t__ changeable_dir; int * dir_shadow; int * dir; int * shadow; int * port; } ;
struct file {struct gpio_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gpio_private*) ;
 struct gpio_private* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 struct gpio_private* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int ** VAR_10 ;
 int ** VAR_11 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_12, struct file *VAR_13)
{
 struct gpio_private *VAR_14;
 int VAR_15 = FUNC_1(VAR_12);
 unsigned long VAR_16;

 if (VAR_15 > VAR_3)
  return -VAR_0;

 VAR_14 = FUNC_3(sizeof(struct gpio_private), VAR_2);

 if (!VAR_14)
  return -VAR_1;

 FUNC_4();
 VAR_14->minor = VAR_15;



 if (FUNC_0(VAR_14)) {
  VAR_14->port = VAR_10[VAR_15];
  VAR_14->shadow = VAR_11[VAR_15];
  VAR_14->dir = VAR_7[VAR_15];
  VAR_14->dir_shadow = VAR_8[VAR_15];
  VAR_14->changeable_dir = VAR_6[VAR_15];
  VAR_14->changeable_bits = VAR_5[VAR_15];
 } else {
  VAR_14->port = ((void*)0);
  VAR_14->shadow = ((void*)0);
  VAR_14->dir = ((void*)0);
  VAR_14->dir_shadow = ((void*)0);
  VAR_14->changeable_dir = 0;
  VAR_14->changeable_bits = 0;
 }

 VAR_14->highalarm = 0;
 VAR_14->lowalarm = 0;
 VAR_14->clk_mask = 0;
 VAR_14->data_mask = 0;
 FUNC_2(&VAR_14->alarm_wq);

 VAR_13->private_data = VAR_14;


 FUNC_5(&VAR_9, VAR_16);
 VAR_14->next = VAR_4;
 VAR_4 = VAR_14;
 FUNC_6(&VAR_9, VAR_16);

 FUNC_7();
 return 0;
}
