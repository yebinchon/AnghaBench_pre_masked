
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmmac_extra_stats {int rx_overflow_cntr; int rx_missed_cntr; } ;
struct net_device_stats {int rx_over_errors; int rx_missed_errors; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_5, struct stmmac_extra_stats *VAR_6,
         unsigned long VAR_7)
{
 struct net_device_stats *VAR_8 = (struct net_device_stats *)VAR_5;
 u32 VAR_9 = FUNC_0(VAR_7 + VAR_0);

 if (FUNC_1(VAR_9)) {
  if (VAR_9 & VAR_2) {
   VAR_8->rx_over_errors += 0x800;
   VAR_6->rx_overflow_cntr += 0x800;
  } else {
   unsigned int VAR_10;
   VAR_10 = ((VAR_9 & VAR_3) >> 17);
   VAR_8->rx_over_errors += VAR_10;
   VAR_6->rx_overflow_cntr += VAR_10;
  }

  if (VAR_9 & VAR_4) {
   VAR_8->rx_missed_errors += 0xffff;
   VAR_6->rx_missed_cntr += 0xffff;
  } else {
   unsigned int VAR_11 = (VAR_9 & VAR_1);
   VAR_8->rx_missed_errors += VAR_11;
   VAR_6->rx_missed_cntr += VAR_11;
  }
 }
 return;
}
