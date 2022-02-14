
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_missed_errors; int rx_crc_errors; int rx_frame_errors; } ;
struct net_device {unsigned long base_addr; struct net_device_stats stats; } ;
struct ei_device {int page_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_3)
{
 unsigned long VAR_4 = VAR_3->base_addr;
 struct ei_device *VAR_5 = (struct ei_device *) FUNC_1(VAR_3);
 unsigned long VAR_6;


 if (!FUNC_2(VAR_3))
  return &VAR_3->stats;

 FUNC_3(&VAR_5->page_lock,VAR_6);

 VAR_3->stats.rx_frame_errors += FUNC_0(VAR_4 + VAR_0);
 VAR_3->stats.rx_crc_errors += FUNC_0(VAR_4 + VAR_1);
 VAR_3->stats.rx_missed_errors+= FUNC_0(VAR_4 + VAR_2);
 FUNC_4(&VAR_5->page_lock, VAR_6);

 return &VAR_3->stats;
}
