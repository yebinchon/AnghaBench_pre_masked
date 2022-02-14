
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bt431_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bt431_regs*,int ) ;
 int FUNC_1 (struct bt431_regs*,int) ;

__attribute__((used)) static inline void FUNC_2(struct bt431_regs *VAR_1, u16 VAR_2, u16 VAR_3)
{
 VAR_2 += 412 - 52;
 VAR_3 += 68 - 32;


 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_2 & 0xff);
 FUNC_1(VAR_1, (VAR_2 >> 8) & 0x0f);
 FUNC_1(VAR_1, VAR_3 & 0xff);
 FUNC_1(VAR_1, (VAR_3 >> 8) & 0x0f);
}
