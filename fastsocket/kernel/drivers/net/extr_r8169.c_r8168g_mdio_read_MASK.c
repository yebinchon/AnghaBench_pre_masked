
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ ocp_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rtl8169_private *VAR_1, int VAR_2)
{
 if (VAR_1->ocp_base != VAR_0)
  VAR_2 -= 0x10;

 return FUNC_0(VAR_1, VAR_1->ocp_base + VAR_2 * 2);
}
