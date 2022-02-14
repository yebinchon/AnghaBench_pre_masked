
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int HvLpIndexMap ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1,
       HvLpIndexMap VAR_2,
       struct net_device *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((VAR_2 & (1 << VAR_4)) == 0)
   continue;

  if (FUNC_0(VAR_1, VAR_4, VAR_3))
   VAR_6 = 1;
  else
   VAR_5 = 1;
 }

 if (VAR_6)
  VAR_3->stats.tx_errors++;

 if (VAR_5) {
  VAR_3->stats.tx_packets++;
  VAR_3->stats.tx_bytes += VAR_1->len;
 }
}
