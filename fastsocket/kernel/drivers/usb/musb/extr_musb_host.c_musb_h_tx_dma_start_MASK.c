
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct musb_hw_ep {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct musb_hw_ep *VAR_4)
{
 u16 VAR_5;


 VAR_5 = FUNC_1(VAR_4->regs, VAR_0);
 VAR_5 |= VAR_1 | VAR_3;
 if (FUNC_0())
  VAR_5 |= VAR_2;
 FUNC_2(VAR_4->regs, VAR_0, VAR_5);
}
