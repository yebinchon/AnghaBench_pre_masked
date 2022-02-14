
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_missed_errors; } ;
struct de_private {TYPE_1__ net_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct de_private *VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_3 & VAR_1))
  VAR_2->net_stats.rx_missed_errors += VAR_0;
 else
  VAR_2->net_stats.rx_missed_errors += (VAR_3 & VAR_0);
}
