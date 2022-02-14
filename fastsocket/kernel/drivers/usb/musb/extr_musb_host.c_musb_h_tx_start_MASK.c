
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct musb_hw_ep {int regs; scalar_t__ epnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct musb_hw_ep *VAR_6)
{
 u16 VAR_7;


 if (VAR_6->epnum) {
  VAR_7 = FUNC_0(VAR_6->regs, VAR_3);
  VAR_7 |= VAR_5 | VAR_4;
  FUNC_1(VAR_6->regs, VAR_3, VAR_7);
 } else {
  VAR_7 = VAR_1 | VAR_2;
  FUNC_1(VAR_6->regs, VAR_0, VAR_7);
 }

}
