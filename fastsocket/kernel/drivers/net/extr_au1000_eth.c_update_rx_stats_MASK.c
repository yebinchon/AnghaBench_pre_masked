
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device_stats {int rx_bytes; int collisions; int rx_crc_errors; int rx_length_errors; int rx_missed_errors; int rx_errors; int multicast; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct au1000_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct au1000_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_9, u32 VAR_10)
{
 struct au1000_private *VAR_11 = FUNC_0(VAR_9);
 struct net_device_stats *VAR_12 = &VAR_9->stats;

 VAR_12->rx_packets++;
 if (VAR_10 & VAR_5)
  VAR_12->multicast++;

 if (VAR_10 & VAR_2) {
  VAR_12->rx_errors++;
  if (VAR_10 & VAR_6)
   VAR_12->rx_missed_errors++;
  if (VAR_10 & (VAR_7 | VAR_8 | VAR_4))
   VAR_12->rx_length_errors++;
  if (VAR_10 & VAR_1)
   VAR_12->rx_crc_errors++;
  if (VAR_10 & VAR_0)
   VAR_12->collisions++;
 }
 else
  VAR_12->rx_bytes += VAR_10 & VAR_3;

}
