
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int flags; } ;
struct rtl8169_private {int event_slow; int mac_version; int mmio_addr; TYPE_1__ wk; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,struct rtl8169_private*,int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rtl8169_private*,int) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct rtl8169_private *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 u16 VAR_6;

 VAR_6 = FUNC_4(VAR_4) & VAR_4->event_slow;
 FUNC_3(VAR_4, VAR_6);

 if (FUNC_7(VAR_6 & VAR_2)) {
  switch (VAR_4->mac_version) {

  case 128:
   FUNC_1(VAR_5);

   FUNC_6(VAR_1, VAR_4->wk.flags);
  default:
   break;
  }
 }

 if (FUNC_7(VAR_6 & VAR_3))
  FUNC_2(VAR_5);

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_5, VAR_4, VAR_4->mmio_addr, 1);

 FUNC_5(VAR_4);
}
