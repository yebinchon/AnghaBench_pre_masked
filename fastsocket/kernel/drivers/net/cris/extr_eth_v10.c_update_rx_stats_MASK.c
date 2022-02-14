
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_length_errors; int rx_frame_errors; int rx_crc_errors; int rx_fifo_errors; } ;


 scalar_t__ FUNC_0 (unsigned long*,int ,unsigned long) ;
 unsigned long* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct net_device_stats *VAR_5)
{
 unsigned long VAR_6 = *VAR_0;

 VAR_5->rx_fifo_errors += FUNC_0(VAR_0, VAR_2, VAR_6);
 VAR_5->rx_crc_errors += FUNC_0(VAR_0, VAR_3, VAR_6);
 VAR_5->rx_frame_errors += FUNC_0(VAR_0, VAR_1, VAR_6);
 VAR_5->rx_length_errors += FUNC_0(VAR_0, VAR_4, VAR_6);
}
