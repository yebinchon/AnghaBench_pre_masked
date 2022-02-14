
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bt431_regs {int addr_hi; int addr_lo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct bt431_regs *VAR_0, int VAR_1)
{




 volatile u16 *VAR_2 = &(VAR_0->addr_lo);
 volatile u16 *VAR_3 = &(VAR_0->addr_hi);

 FUNC_1();
 *VAR_2 = FUNC_0(VAR_1 & 0xff);
 FUNC_2();
 *VAR_3 = FUNC_0((VAR_1 >> 8) & 0xff);
}
