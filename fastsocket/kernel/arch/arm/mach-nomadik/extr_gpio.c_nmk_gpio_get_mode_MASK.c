
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base; } ;
struct nmk_gpio_chip {scalar_t__ addr; TYPE_1__ chip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct nmk_gpio_chip* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(int VAR_5)
{
 struct nmk_gpio_chip *VAR_6;
 u32 VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_1(FUNC_0(VAR_5));
 if (!VAR_6)
  return -VAR_0;

 VAR_9 = 1 << (VAR_5 - VAR_6->chip.base);

 VAR_7 = FUNC_2(VAR_6->addr + VAR_1) & VAR_9;
 VAR_8 = FUNC_2(VAR_6->addr + VAR_2) & VAR_9;

 return (VAR_7 ? VAR_3 : 0) | (VAR_8 ? VAR_4 : 0);
}
