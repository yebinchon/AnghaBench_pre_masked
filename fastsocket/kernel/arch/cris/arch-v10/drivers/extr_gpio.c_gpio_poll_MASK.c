
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {scalar_t__ minor; unsigned long highalarm; unsigned long lowalarm; int alarm_wq; } ;
struct file {struct gpio_private* private_data; } ;
typedef int poll_table ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long* VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long* VAR_7 ;
 unsigned long* VAR_8 ;
 unsigned long* VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_12, poll_table *VAR_13)
{
 unsigned int VAR_14 = 0;
 struct gpio_private *VAR_15 = VAR_12->private_data;
 unsigned long VAR_16;
 unsigned long VAR_17;

 FUNC_3(&VAR_10, VAR_17);

 FUNC_1(VAR_12, &VAR_15->alarm_wq, VAR_13);
 if (VAR_15->minor == VAR_0) {
  unsigned long VAR_18;
  VAR_16 = *VAR_8;



  VAR_18 = ~VAR_16 & VAR_15->highalarm & 0xFF;
  VAR_18 = (VAR_18 << VAR_6);

  VAR_11 |= VAR_18;
  *VAR_5 = VAR_18;
 } else if (VAR_15->minor == VAR_1)
  VAR_16 = *VAR_9;
 else if (VAR_15->minor == VAR_2)
  VAR_16 = *VAR_7;
 else {
  VAR_14 = 0;
  goto out;
 }

 if ((VAR_16 & VAR_15->highalarm) ||
     (~VAR_16 & VAR_15->lowalarm)) {
  VAR_14 = VAR_3|VAR_4;
 }

out:
 FUNC_4(&VAR_10, VAR_17);
 FUNC_0(FUNC_2("gpio_poll ready: mask 0x%08X\n", VAR_14));

 return VAR_14;
}
