
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ioc3_private {unsigned long* rxr; int rx_pi; scalar_t__ tx_ci; scalar_t__ tx_pi; struct ioc3_etxd* txr; scalar_t__ rx_ci; struct sk_buff** rx_skbs; } ;
struct ioc3_etxd {int dummy; } ;
struct ioc3_erxbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ioc3_erxbuf*,int) ;
 struct ioc3_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_5)
{
 struct ioc3_private *VAR_6 = FUNC_5(VAR_5);
 struct ioc3_erxbuf *VAR_7;
 unsigned long *VAR_8;
 int VAR_9;

 if (VAR_6->rxr == ((void*)0)) {

  VAR_6->rxr = (unsigned long *) FUNC_2(VAR_0);
  VAR_8 = (unsigned long *) VAR_6->rxr;
  if (!VAR_8)
   FUNC_6("ioc3_alloc_rings(): get_zeroed_page() failed!\n");




  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   struct sk_buff *VAR_10;

   VAR_10 = FUNC_3(VAR_3, VAR_0);
   if (!VAR_10) {
    FUNC_7();
    continue;
   }

   VAR_6->rx_skbs[VAR_9] = VAR_10;


   FUNC_8(VAR_10, (1664 + VAR_4));
   VAR_7 = (struct ioc3_erxbuf *) VAR_10->data;
   VAR_8[VAR_9] = FUNC_1(FUNC_4(VAR_7, 1));
   FUNC_9(VAR_10, VAR_4);
  }
  VAR_6->rx_ci = 0;
  VAR_6->rx_pi = VAR_2;
 }

 if (VAR_6->txr == ((void*)0)) {

  VAR_6->txr = (struct ioc3_etxd *)FUNC_0(VAR_1, 2);
  if (!VAR_6->txr)
   FUNC_6("ioc3_alloc_rings(): __get_free_pages() failed!\n");
  VAR_6->tx_pi = 0;
  VAR_6->tx_ci = 0;
 }
}
