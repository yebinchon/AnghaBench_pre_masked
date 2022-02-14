
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct gfar_extra_stats {int rx_overrun; int rx_crcerr; int rx_nonoctet; int rx_short; int rx_large; int rx_trunc; } ;
struct gfar_private {struct gfar_extra_stats extra_stats; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_1(unsigned short VAR_6, struct net_device *VAR_7)
{
 struct gfar_private *VAR_8 = FUNC_0(VAR_7);
 struct net_device_stats *VAR_9 = &VAR_7->stats;
 struct gfar_extra_stats *VAR_10 = &VAR_8->extra_stats;



 if (VAR_6 & VAR_5) {
  VAR_9->rx_length_errors++;

  VAR_10->rx_trunc++;

  return;
 }

 if (VAR_6 & (VAR_1 | VAR_4)) {
  VAR_9->rx_length_errors++;

  if (VAR_6 & VAR_1)
   VAR_10->rx_large++;
  else
   VAR_10->rx_short++;
 }
 if (VAR_6 & VAR_2) {
  VAR_9->rx_frame_errors++;
  VAR_10->rx_nonoctet++;
 }
 if (VAR_6 & VAR_0) {
  VAR_10->rx_crcerr++;
  VAR_9->rx_crc_errors++;
 }
 if (VAR_6 & VAR_3) {
  VAR_10->rx_overrun++;
  VAR_9->rx_crc_errors++;
 }
}
