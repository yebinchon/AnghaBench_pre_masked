
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8169_private {int dummy; } ;


 int FUNC_0 (struct rtl8169_private*,int,int ) ;
 int FUNC_1 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_2(struct rtl8169_private *VAR_0)
{
 u16 VAR_1 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_0, 0x0f, VAR_1) & 0x00008000) ? 1 : 0;
}
