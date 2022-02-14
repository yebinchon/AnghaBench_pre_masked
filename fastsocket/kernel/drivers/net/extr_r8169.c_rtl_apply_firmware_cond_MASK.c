
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtl8169_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int ,int ,char*) ;
 int FUNC_1 (struct rtl8169_private*) ;
 scalar_t__ FUNC_2 (struct rtl8169_private*,int ) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_1, u8 VAR_2, u16 VAR_3)
{
 if (FUNC_2(VAR_1, VAR_2) != VAR_3)
  FUNC_0(VAR_1, VAR_0, VAR_1->dev, "chipset not ready for firmware\n");
 else
  FUNC_1(VAR_1);
}
