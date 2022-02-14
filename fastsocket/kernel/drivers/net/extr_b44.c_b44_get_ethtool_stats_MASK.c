
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {scalar_t__ tx_good_octets; } ;
struct b44 {int lock; TYPE_1__ hw_stats; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct b44*) ;
 struct b44* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
      struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct b44 *VAR_4 = FUNC_2(VAR_1);
 u32 *VAR_5 = &VAR_4->hw_stats.tx_good_octets;
 u32 VAR_6;

 FUNC_3(&VAR_4->lock);

 FUNC_1(VAR_4);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
  *VAR_3++ = *VAR_5++;

 FUNC_4(&VAR_4->lock);
}
