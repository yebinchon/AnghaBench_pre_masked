
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {unsigned long tx_packets; unsigned long tx_bytes; } ;
struct ioc3_private {int tx_ci; unsigned long txqlen; int ioc3_lock; TYPE_1__ stats; struct sk_buff** tx_skbs; struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ioc3_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct ioc3_private *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 struct ioc3 *VAR_3 = VAR_0->regs;
 int VAR_4, VAR_5;
 struct sk_buff *VAR_6;
 u32 VAR_7;

 FUNC_4(&VAR_0->ioc3_lock);
 VAR_7 = FUNC_1();

 VAR_4 = (VAR_7 >> 7) & 127;
 VAR_5 = VAR_0->tx_ci;
 VAR_1 = 0;
 VAR_2 = 0;

 while (VAR_5 != VAR_4) {
  VAR_1++;
  VAR_6 = VAR_0->tx_skbs[VAR_5];
  VAR_2 += VAR_6->len;
  FUNC_0(VAR_6);
  VAR_0->tx_skbs[VAR_5] = ((void*)0);

  VAR_5 = (VAR_5 + 1) & 127;

  VAR_7 = FUNC_1();
  VAR_4 = (VAR_7 >> 7) & 127;
 }

 VAR_0->stats.tx_packets += VAR_1;
 VAR_0->stats.tx_bytes += VAR_2;
 VAR_0->txqlen -= VAR_1;

 if (VAR_0->txqlen < 128)
  FUNC_2(FUNC_3(VAR_0));

 VAR_0->tx_ci = VAR_5;
 FUNC_5(&VAR_0->ioc3_lock);
}
