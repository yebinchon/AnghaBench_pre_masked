
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pl061_gpio {unsigned int irq_base; int irq_lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 struct pl061_gpio* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_9, unsigned VAR_10)
{
 struct pl061_gpio *VAR_11 = FUNC_0(VAR_9);
 int VAR_12 = VAR_9 - VAR_11->irq_base;
 unsigned long VAR_13;
 u8 VAR_14, VAR_15, VAR_16;

 if (VAR_12 < 0 || VAR_12 > VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_11->irq_lock, VAR_13);

 VAR_16 = FUNC_1(VAR_11->base + VAR_2);

 VAR_14 = FUNC_1(VAR_11->base + VAR_3);
 if (VAR_10 & (VAR_6 | VAR_7)) {
  VAR_14 |= 1 << VAR_12;
  if (VAR_10 & VAR_6)
   VAR_16 |= 1 << VAR_12;
  else
   VAR_16 &= ~(1 << VAR_12);
 } else
  VAR_14 &= ~(1 << VAR_12);
 FUNC_4(VAR_14, VAR_11->base + VAR_3);

 VAR_15 = FUNC_1(VAR_11->base + VAR_1);
 if ((VAR_10 & VAR_4) == VAR_4)
  VAR_15 |= 1 << VAR_12;
 else {
  VAR_15 &= ~(1 << VAR_12);
  if (VAR_10 & VAR_5)
   VAR_16 |= 1 << VAR_12;
  else
   VAR_16 &= ~(1 << VAR_12);
 }
 FUNC_4(VAR_15, VAR_11->base + VAR_1);

 FUNC_4(VAR_16, VAR_11->base + VAR_2);

 FUNC_3(&VAR_11->irq_lock, VAR_13);

 return 0;
}
