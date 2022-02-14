
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {int minor; int highalarm; int lowalarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_4(struct gpio_private *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 FUNC_2(&VAR_3, VAR_16);
 VAR_13 = FUNC_0(VAR_2, VAR_4, VAR_7);
 VAR_15 = FUNC_0(VAR_2, VAR_4, VAR_9);
 VAR_14 = FUNC_0(VAR_2, VAR_4, VAR_8) & VAR_1;

 for (VAR_12 = 0; VAR_12 < 32; VAR_12++) {
  int VAR_17 = VAR_12 % 8;
  int VAR_18 = VAR_12 / 8;
  if (VAR_11->minor < VAR_0)
   VAR_18 += VAR_11->minor * 4;
  else
   VAR_18 += (VAR_11->minor - 1) * 4;

  if (VAR_11->highalarm & (1<<VAR_12)) {
   VAR_13 |= (VAR_5 << (VAR_17 * 3));
   VAR_14 |= 1 << VAR_17;
   VAR_10 = VAR_14 & 0xff;
   VAR_15 |= VAR_18 << (VAR_17 * 4);
  } else if (VAR_11->lowalarm & (1<<VAR_12)) {
   VAR_13 |= (VAR_6 << (VAR_17 * 3));
   VAR_14 |= 1 << VAR_17;
   VAR_10 = VAR_14 & 0xff;
   VAR_15 |= VAR_18 << (VAR_17 * 4);
  }
 }

 FUNC_1(VAR_2, VAR_4, VAR_7, VAR_13);
 FUNC_1(VAR_2, VAR_4, VAR_9, VAR_15);
 FUNC_1(VAR_2, VAR_4, VAR_8, VAR_14);

 FUNC_3(&VAR_3, VAR_16);
}
