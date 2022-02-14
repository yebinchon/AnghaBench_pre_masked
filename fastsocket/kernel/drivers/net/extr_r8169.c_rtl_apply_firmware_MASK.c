
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_fw {int dummy; } ;
struct rtl8169_private {struct rtl_fw* rtl_fw; } ;


 int FUNC_0 (struct rtl_fw*) ;
 int FUNC_1 (struct rtl8169_private*,struct rtl_fw*) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_0)
{
 struct rtl_fw *VAR_1 = VAR_0->rtl_fw;


 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_0, VAR_1);
}
