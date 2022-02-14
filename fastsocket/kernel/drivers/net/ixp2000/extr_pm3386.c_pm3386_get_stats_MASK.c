
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {void* tx_bytes; void* rx_bytes; void* tx_packets; void* rx_packets; } ;


 int FUNC_0 (struct net_device_stats*,int ,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int,int) ;

void FUNC_4(int VAR_0, struct net_device_stats *VAR_1)
{



 FUNC_3(VAR_0, 0x500, 0x100, 0x0001);
 while (FUNC_2(VAR_0, 0x500, 0x100) & 0x0001)
  ;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->rx_packets = FUNC_1(VAR_0, 0x510);
 VAR_1->tx_packets = FUNC_1(VAR_0, 0x590);
 VAR_1->rx_bytes = FUNC_1(VAR_0, 0x514);
 VAR_1->tx_bytes = FUNC_1(VAR_0, 0x594);

}
