
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8169_private {int event_slow; int napi; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct rtl8169_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rtl8169_private*) ;
 int FUNC_4 (struct rtl8169_private*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct rtl8169_private *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;
 u16 VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 && VAR_6 != 0xffff) {
  VAR_6 &= VAR_0 | VAR_4->event_slow;
  if (VAR_6) {
   VAR_5 = 1;

   FUNC_4(VAR_4);
   FUNC_1(&VAR_4->napi);
  }
 }
 return FUNC_0(VAR_5);
}
