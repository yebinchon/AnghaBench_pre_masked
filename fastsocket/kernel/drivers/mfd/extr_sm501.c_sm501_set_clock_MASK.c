
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int rev; int clock_lock; int dev; scalar_t__ regs; } ;
struct sm501_clock {int shift; int divider; int k; int n; int m; int mclk; } ;
struct device {int dummy; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long) ;
 struct sm501_devdata* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,struct sm501_clock*,int) ;
 int FUNC_6 (struct sm501_devdata*) ;
 int FUNC_7 (struct sm501_devdata*,int) ;
 int FUNC_8 (unsigned long,struct sm501_clock*,int) ;
 int FUNC_9 (struct sm501_devdata*) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

unsigned long FUNC_11(struct device *VAR_8,
         int VAR_9,
         unsigned long VAR_10)
{
 struct sm501_devdata *VAR_11 = FUNC_1(VAR_8);
 unsigned long VAR_12 = FUNC_4(VAR_11->regs + VAR_6);
 unsigned long VAR_13 = FUNC_4(VAR_11->regs + VAR_1);
 unsigned long VAR_14 = FUNC_4(VAR_11->regs + VAR_0);
 unsigned char VAR_15;
 unsigned int VAR_16 = 0;
 unsigned long VAR_17;

 struct sm501_clock VAR_18;





 switch (VAR_9) {
 case 129:




  if (VAR_11->rev >= 0xC0) {

   VAR_17 = (FUNC_5(2 * VAR_10,
           &VAR_18, 5) / 2);
   VAR_15 = VAR_18.shift & 0x07;
   if (VAR_18.divider == 3)
    VAR_15 |= 0x08;
   else if (VAR_18.divider == 5)
    VAR_15 |= 0x10;
   VAR_15 |= 0x40;
   VAR_16 = 0x20000 | (VAR_18.k << 15) | (VAR_18.n << 8) | VAR_18.m;
  } else {
   VAR_17 = (FUNC_8(2 * VAR_10,
        &VAR_18, 5) / 2);
   VAR_15 = VAR_18.shift & 0x07;
   if (VAR_18.divider == 3)
    VAR_15 |= 0x08;
   else if (VAR_18.divider == 5)
    VAR_15 |= 0x10;
   if (VAR_18.mclk != 288000000)
    VAR_15 |= 0x20;
  }
  break;

 case 128:



  VAR_17 = (FUNC_8(2 * VAR_10, &VAR_18, 3) / 2);
  VAR_15=VAR_18.shift & 0x07;
  if (VAR_18.divider == 3)
   VAR_15 |= 0x08;
  if (VAR_18.mclk != 288000000)
   VAR_15 |= 0x10;
  break;

 case 130:
 case 131:


  VAR_17 = FUNC_8( VAR_10, &VAR_18, 3);
  VAR_15=VAR_18.shift & 0x07;
  if (VAR_18.divider == 3)
   VAR_15 |= 0x08;
  if (VAR_18.mclk != 288000000)
   VAR_15 |= 0x10;
  break;

 default:
  return 0;
 }

 FUNC_2(&VAR_11->clock_lock);

 VAR_12 = FUNC_4(VAR_11->regs + VAR_6);
 VAR_13 = FUNC_4(VAR_11->regs + VAR_1);
 VAR_14 = FUNC_4(VAR_11->regs + VAR_0);

 VAR_14 = VAR_14 & ~(0xFF << VAR_9);
 VAR_14 |= VAR_15<<VAR_9;

 VAR_12 &= 3;

 switch (VAR_12) {
 case 1:
  FUNC_10(VAR_13, VAR_11->regs + VAR_3);
  FUNC_10(VAR_14, VAR_11->regs + VAR_2);
  VAR_12 = 0;
  break;
 case 2:
 case 0:
  FUNC_10(VAR_13, VAR_11->regs + VAR_5);
  FUNC_10(VAR_14, VAR_11->regs + VAR_4);
  VAR_12 = 1;
  break;

 default:
  FUNC_3(&VAR_11->clock_lock);
  return -1;
 }

 FUNC_10(VAR_12, VAR_11->regs + VAR_6);

 if (VAR_16)
  FUNC_10(VAR_16, VAR_11->regs + VAR_7);

 FUNC_9(VAR_11);

 FUNC_0(VAR_11->dev, "gate %08lx, clock %08lx, mode %08lx\n",
  VAR_13, VAR_14, VAR_12);

 FUNC_7(VAR_11, 16);
 FUNC_3(&VAR_11->clock_lock);

 FUNC_6(VAR_11);

 return VAR_17;
}
