
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ioc3_private {int rx_ci; size_t rx_pi; struct sk_buff** rx_skbs; int * rxr; } ;
struct ioc3_erxbuf {scalar_t__ w0; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ioc3_private *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_1->rx_ci; VAR_3 & 15; VAR_3++) {
  VAR_1->rx_skbs[VAR_1->rx_pi] = VAR_1->rx_skbs[VAR_1->rx_ci];
  VAR_1->rxr[VAR_1->rx_pi++] = VAR_1->rxr[VAR_1->rx_ci++];
 }
 VAR_1->rx_pi &= 511;
 VAR_1->rx_ci &= 511;

 for (VAR_3 = VAR_1->rx_ci; VAR_3 != VAR_1->rx_pi; VAR_3 = (VAR_3+1) & 511) {
  struct ioc3_erxbuf *VAR_4;
  VAR_2 = VAR_1->rx_skbs[VAR_3];
  VAR_4 = (struct ioc3_erxbuf *) (VAR_2->data - VAR_0);
  VAR_4->w0 = 0;
 }
}
