
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nmk_gpio_chip {int edge_rising; int edge_falling; int lock; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct nmk_gpio_chip* FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_2)
{
 int VAR_3;
 struct nmk_gpio_chip *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_2);
 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_4)
  return;


 FUNC_4(&VAR_4->lock, VAR_5);
 if (VAR_4->edge_rising & VAR_6) {
  VAR_7 = FUNC_3(VAR_4->addr + VAR_1);
  VAR_7 &= ~VAR_6;
  FUNC_6(VAR_7, VAR_4->addr + VAR_1);
 }
 if (VAR_4->edge_falling & VAR_6) {
  VAR_7 = FUNC_3(VAR_4->addr + VAR_0);
  VAR_7 &= ~VAR_6;
  FUNC_6(VAR_7, VAR_4->addr + VAR_0);
 }
 FUNC_5(&VAR_4->lock, VAR_5);
}
