
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct exgmac_reg {int val; int mask; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_1,
       const struct exgmac_reg *VAR_2, int VAR_3)
{
 while (VAR_3-- > 0) {
  FUNC_0(VAR_1, VAR_2->addr, VAR_2->mask, VAR_2->val, VAR_0);
  VAR_2++;
 }
}
