
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gpio_private {int minor; struct gpio_private* next; int alarm_wq; scalar_t__ lowalarm; scalar_t__ highalarm; scalar_t__ data_mask; scalar_t__ clk_mask; } ;
struct file {struct gpio_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gpio_private* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 struct gpio_private* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gpio_private*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_8, struct file *VAR_9)
{
 struct gpio_private *VAR_10;
 int VAR_11 = FUNC_0(VAR_8);

 if (VAR_11 > VAR_4 ||
     (VAR_11 > VAR_3 && VAR_11 < VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_2(sizeof(struct gpio_private), VAR_2);

 if (!VAR_10)
  return -VAR_1;

 FUNC_3();
 FUNC_4(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->minor = VAR_11;
 VAR_9->private_data = VAR_10;


 if (VAR_11 <= VAR_3) {

  VAR_10->clk_mask = 0;
  VAR_10->data_mask = 0;
  VAR_10->highalarm = 0;
  VAR_10->lowalarm = 0;

  FUNC_1(&VAR_10->alarm_wq);


  FUNC_5(&VAR_7);
  VAR_10->next = VAR_6;
  VAR_6 = VAR_10;
  FUNC_6(&VAR_7);
 }

 FUNC_7();
 return 0;
}
