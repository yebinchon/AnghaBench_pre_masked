
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_missed_errors; int rx_frame_errors; int rx_crc_errors; } ;
struct sonic_local {struct net_device_stats stats; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct sonic_local* FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_3)
{
 struct sonic_local *VAR_4 = FUNC_2(VAR_3);


 VAR_4->stats.rx_crc_errors += FUNC_0(VAR_0);
 FUNC_1(VAR_0, 0xffff);
 VAR_4->stats.rx_frame_errors += FUNC_0(VAR_1);
 FUNC_1(VAR_1, 0xffff);
 VAR_4->stats.rx_missed_errors += FUNC_0(VAR_2);
 FUNC_1(VAR_2, 0xffff);

 return &VAR_4->stats;
}
