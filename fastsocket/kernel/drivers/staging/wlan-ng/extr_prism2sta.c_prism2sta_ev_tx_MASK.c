
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tx_packets; } ;
struct TYPE_5__ {TYPE_1__ linux_stats; } ;
typedef TYPE_2__ wlandevice_t ;
typedef int u16 ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(wlandevice_t *VAR_0, u16 VAR_1)
{
 FUNC_0("Tx Complete, status=0x%04x\n", VAR_1);

 VAR_0->linux_stats.tx_packets++;
 return;
}
