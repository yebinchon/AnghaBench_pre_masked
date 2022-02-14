
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base; } ;
struct nmk_gpio_chip {int lock; scalar_t__ addr; TYPE_1__ chip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct nmk_gpio_chip* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(int VAR_5, int VAR_6)
{
 struct nmk_gpio_chip *VAR_7;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_1(FUNC_0(VAR_5));
 if (!VAR_7)
  return -VAR_0;

 VAR_11 = 1 << (VAR_5 - VAR_7->chip.base);

 FUNC_3(&VAR_7->lock, VAR_8);
 VAR_9 = FUNC_2(VAR_7->addr + VAR_1) & ~VAR_11;
 VAR_10 = FUNC_2(VAR_7->addr + VAR_2) & ~VAR_11;
 if (VAR_6 & VAR_3)
  VAR_9 |= VAR_11;
 if (VAR_6 & VAR_4)
  VAR_10 |= VAR_11;
 FUNC_5(VAR_9, VAR_7->addr + VAR_1);
 FUNC_5(VAR_10, VAR_7->addr + VAR_2);
 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
