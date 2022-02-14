
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct bt431_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bt431_regs*,int) ;
 int FUNC_1 (struct bt431_regs*,int) ;

__attribute__((used)) static inline void FUNC_2(struct bt431_regs *VAR_2, u8 VAR_3,
      u16 VAR_4, u16 VAR_5)
{
 int VAR_6;
 u16 VAR_7 = VAR_3 ? 0xffff : 0x0000;
 u16 VAR_8 = VAR_3 ? 0x0000 : 0xffff;

 FUNC_0(VAR_2, VAR_0);
 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++) {
  u16 VAR_9;

  if (VAR_5 << 6 <= VAR_6 << 3)
   VAR_9 = VAR_8;
  else if (VAR_4 <= VAR_6 % 8 << 3)
   VAR_9 = VAR_8;
  else if (((VAR_4 >> 3) & 0xffff) > VAR_6 % 8)
   VAR_9 = VAR_7;
  else
   VAR_9 = VAR_7 & ~(VAR_8 << (VAR_4 % 8 << 1));

  FUNC_1(VAR_2, VAR_9);
 }
}
