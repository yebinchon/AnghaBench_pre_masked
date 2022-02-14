
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct inode {int dummy; } ;
struct gpio_private {scalar_t__ minor; unsigned long highalarm; unsigned long lowalarm; unsigned long clk_mask; unsigned long data_mask; unsigned long write_msb; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_7 ;
 unsigned long* VAR_8 ;
 int FUNC_2 (unsigned long*,unsigned long*,int) ;
 int FUNC_3 (unsigned long*,unsigned long*,int) ;
 int** VAR_9 ;
 unsigned long** VAR_10 ;
 int** VAR_11 ;
 int FUNC_4 (unsigned int,unsigned long) ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct gpio_private*,unsigned long) ;
 int FUNC_8 (struct gpio_private*,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_15, struct file *VAR_16,
    unsigned int VAR_17, unsigned long VAR_18)
{
 unsigned long VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21;
 struct gpio_private *VAR_22 = (struct gpio_private *)VAR_16->private_data;
 if (FUNC_1(VAR_17) != VAR_3)
  return -VAR_1;






 switch (FUNC_0(VAR_17)) {
 case 136:

  return *VAR_9[VAR_22->minor];
  break;
 case 132:
  FUNC_6(VAR_19);

  VAR_21 = *VAR_10[VAR_22->minor];
  VAR_21 |= (VAR_18 & VAR_8[VAR_22->minor]);
  *VAR_10[VAR_22->minor] = VAR_21;
  FUNC_5(VAR_19);
  break;
 case 139:
  FUNC_6(VAR_19);

  VAR_21 = *VAR_10[VAR_22->minor];
  VAR_21 &= ~(VAR_18 & VAR_8[VAR_22->minor]);
  *VAR_10[VAR_22->minor] = VAR_21;
  FUNC_5(VAR_19);
  break;
 case 138:

  VAR_22->highalarm |= VAR_18;
  FUNC_9(&VAR_7, VAR_19);
  VAR_14 = 1;
  if (VAR_22->minor == VAR_4)
   VAR_12 |= VAR_18;
  FUNC_10(&VAR_7, VAR_19);
  break;
 case 137:

  VAR_22->lowalarm |= VAR_18;
  FUNC_9(&VAR_7, VAR_19);
  VAR_14 = 1;
  if (VAR_22->minor == VAR_4)
   VAR_13 |= VAR_18;
  FUNC_10(&VAR_7, VAR_19);
  break;
 case 140:

  VAR_22->highalarm &= ~VAR_18;
  VAR_22->lowalarm &= ~VAR_18;
  FUNC_9(&VAR_7, VAR_19);
  if (VAR_22->minor == VAR_4) {
   if (VAR_12 & VAR_18 ||
       VAR_13 & VAR_18)

    ;
  }
  FUNC_10(&VAR_7, VAR_19);
  break;
 case 135:

  return *VAR_11[VAR_22->minor];
 case 129:



  return FUNC_7(VAR_22, VAR_18);
  break;
 case 128:



  return FUNC_8(VAR_22, VAR_18);

 case 141:
 {
  unsigned long VAR_23;
  VAR_23 = *VAR_11[VAR_22->minor];

  VAR_22->clk_mask = VAR_18 & 0xFF;
  VAR_22->data_mask = (VAR_18 >> 8) & 0xFF;
  VAR_22->write_msb = (VAR_18 >> 16) & 0x01;



  if (!((VAR_22->clk_mask & VAR_8[VAR_22->minor]) &&
        (VAR_22->data_mask & VAR_8[VAR_22->minor]) &&
        (VAR_22->clk_mask & VAR_23) &&
        (VAR_22->data_mask & VAR_23))) {
   VAR_22->clk_mask = 0;
   VAR_22->data_mask = 0;
   return -VAR_2;
  }
  break;
 }
 case 134:

  VAR_20 = *VAR_9[VAR_22->minor];
  if (FUNC_3((unsigned long *)VAR_18, &VAR_20, sizeof(VAR_20)))
   return -VAR_0;
  return 0;
  break;
 case 133:

  VAR_20 = *VAR_10[VAR_22->minor];
  if (FUNC_3((unsigned long *)VAR_18, &VAR_20, sizeof(VAR_20)))
   return -VAR_0;
  break;
 case 131:



  if (FUNC_2(&VAR_20, (unsigned long *)VAR_18, sizeof(VAR_20)))
   return -VAR_0;
  VAR_20 = FUNC_7(VAR_22, VAR_20);
  if (FUNC_3((unsigned long *)VAR_18, &VAR_20, sizeof(VAR_20)))
   return -VAR_0;
  break;
 case 130:



  if (FUNC_2(&VAR_20, (unsigned long *)VAR_18, sizeof(VAR_20)))
   return -VAR_0;
  VAR_20 = FUNC_8(VAR_22, VAR_20);
  if (FUNC_3((unsigned long *)VAR_18, &VAR_20, sizeof(VAR_20)))
   return -VAR_0;
  break;
 default:
  if (VAR_22->minor == VAR_5)
   return FUNC_4(VAR_17, VAR_18);
  else
   return -VAR_1;
 }

 return 0;
}
