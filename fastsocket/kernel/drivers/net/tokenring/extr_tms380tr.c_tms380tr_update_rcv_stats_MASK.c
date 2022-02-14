
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int rx_bytes; int multicast; int rx_packets; } ;
struct net_local {TYPE_1__ MacStat; } ;


 unsigned char VAR_0 ;

__attribute__((used)) static void FUNC_0(struct net_local *VAR_1, unsigned char VAR_2[],
     unsigned int VAR_3)
{
 VAR_1->MacStat.rx_packets++;
 VAR_1->MacStat.rx_bytes += VAR_3;


 if(VAR_2[2] & VAR_0)
  VAR_1->MacStat.multicast++;

 return;
}
