
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ioc3_private {int rx_ci; int rx_pi; int * rxr; struct sk_buff** rx_skbs; int * txr; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct ioc3_private*) ;

__attribute__((used)) static void FUNC_4(struct ioc3_private *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2, VAR_3;

 if (VAR_0->txr) {
  FUNC_3(VAR_0);
  FUNC_2((unsigned long)VAR_0->txr, 2);
  VAR_0->txr = ((void*)0);
 }

 if (VAR_0->rxr) {
  VAR_3 = VAR_0->rx_ci;
  VAR_2 = VAR_0->rx_pi;

  while (VAR_3 != VAR_2) {
   VAR_1 = VAR_0->rx_skbs[VAR_3];
   if (VAR_1)
    FUNC_0(VAR_1);

   VAR_3 = (VAR_3 + 1) & 511;
  }
  FUNC_1((unsigned long)VAR_0->rxr);
  VAR_0->rxr = ((void*)0);
 }
}
