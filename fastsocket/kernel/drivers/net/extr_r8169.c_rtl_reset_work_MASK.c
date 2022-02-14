
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int mmio_addr; int napi; scalar_t__ RxDescArray; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct rtl8169_private*,int ) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct rtl8169_private*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct rtl8169_private *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 int VAR_4;

 FUNC_0(&VAR_2->napi);
 FUNC_2(VAR_3);
 FUNC_10();

 FUNC_5(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_7(VAR_2->RxDescArray + VAR_4, VAR_1);

 FUNC_8(VAR_2);
 FUNC_6(VAR_2);

 FUNC_1(&VAR_2->napi);
 FUNC_9(VAR_3);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3, VAR_2, VAR_2->mmio_addr);
}
