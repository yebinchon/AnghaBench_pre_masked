
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nmk_gpio_chip {int lock; scalar_t__ addr; int edge_falling; int edge_rising; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned int) ;
 struct nmk_gpio_chip* FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_7, unsigned int VAR_8)
{
 int VAR_9;
 struct nmk_gpio_chip *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;

 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = FUNC_1(VAR_7);
 VAR_12 = FUNC_2(VAR_9);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_8 & VAR_3)
  return -VAR_0;
 if (VAR_8 & VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_10->lock, VAR_11);

 VAR_10->edge_rising &= ~VAR_12;
 if (VAR_8 & VAR_2)
  VAR_10->edge_rising |= VAR_12;
 FUNC_6(VAR_10->edge_rising, VAR_10->addr + VAR_6);

 VAR_10->edge_falling &= ~VAR_12;
 if (VAR_8 & VAR_1)
  VAR_10->edge_falling |= VAR_12;
 FUNC_6(VAR_10->edge_falling, VAR_10->addr + VAR_5);

 FUNC_5(&VAR_10->lock, VAR_11);

 FUNC_3(VAR_7);

 return 0;
}
