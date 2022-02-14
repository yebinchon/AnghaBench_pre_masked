
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ioc3_private {scalar_t__ tx_ci; scalar_t__ tx_pi; TYPE_1__* txr; struct sk_buff** tx_skbs; } ;
struct TYPE_2__ {scalar_t__ cmd; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct ioc3_private *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2;

 for (VAR_2=0; VAR_2 < 128; VAR_2++) {
  VAR_1 = VAR_0->tx_skbs[VAR_2];
  if (VAR_1) {
   VAR_0->tx_skbs[VAR_2] = ((void*)0);
   FUNC_0(VAR_1);
  }
  VAR_0->txr[VAR_2].cmd = 0;
 }
 VAR_0->tx_pi = 0;
 VAR_0->tx_ci = 0;
}
