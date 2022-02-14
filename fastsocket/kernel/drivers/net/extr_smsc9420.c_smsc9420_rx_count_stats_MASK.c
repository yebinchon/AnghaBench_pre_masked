
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int multicast; int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_over_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_10, u32 VAR_11)
{
 if (FUNC_0(VAR_11 & VAR_3)) {
  VAR_10->stats.rx_errors++;
  if (VAR_11 & VAR_2)
   VAR_10->stats.rx_over_errors++;
  else if (VAR_11 & (VAR_5 |
   VAR_9 | VAR_0))
   VAR_10->stats.rx_frame_errors++;
  else if (VAR_11 & VAR_1)
   VAR_10->stats.rx_crc_errors++;
 }

 if (FUNC_0(VAR_11 & VAR_7))
  VAR_10->stats.rx_length_errors++;

 if (FUNC_0(!((VAR_11 & VAR_6) &&
  (VAR_11 & VAR_4))))
  VAR_10->stats.rx_length_errors++;

 if (VAR_11 & VAR_8)
  VAR_10->stats.multicast++;
}
