
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8169_private {int dummy; } ;


 int FUNC_0 (struct rtl8169_private*,int) ;
 int FUNC_1 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x070c) & 0x00ffffff;
 FUNC_1(VAR_0, 0x070c, VAR_2 | VAR_1);
}
