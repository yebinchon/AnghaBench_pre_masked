
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pl061_gpio {unsigned int irq_base; int irq_lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct pl061_gpio* FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned VAR_1)
{
 struct pl061_gpio *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_1 - VAR_2->irq_base;
 unsigned long VAR_4;
 u8 VAR_5;

 FUNC_2(&VAR_2->irq_lock, VAR_4);
 VAR_5 = FUNC_1(VAR_2->base + VAR_0);
 VAR_5 |= 1 << VAR_3;
 FUNC_4(VAR_5, VAR_2->base + VAR_0);
 FUNC_3(&VAR_2->irq_lock, VAR_4);
}
