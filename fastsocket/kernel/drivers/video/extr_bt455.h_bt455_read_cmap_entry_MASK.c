
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bt455_regs {int addr_cmap_data; } ;


 int FUNC_0 (struct bt455_regs*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct bt455_regs *VAR_0, int VAR_1,
      u8* VAR_2, u8* VAR_3, u8* VAR_4)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1();
 *VAR_2 = VAR_0->addr_cmap_data & 0x0f;
 FUNC_2();
 *VAR_3 = VAR_0->addr_cmap_data & 0x0f;
 FUNC_2();
 *VAR_4 = VAR_0->addr_cmap_data & 0x0f;
}
