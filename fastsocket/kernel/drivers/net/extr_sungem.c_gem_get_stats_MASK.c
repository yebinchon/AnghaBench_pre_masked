
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int collisions; int tx_aborted_errors; int rx_length_errors; int rx_frame_errors; int rx_crc_errors; } ;
struct net_device {int dummy; } ;
struct gem {struct net_device_stats net_stats; int lock; int tx_lock; scalar_t__ regs; scalar_t__ running; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct gem* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static struct net_device_stats *FUNC_7(struct net_device *VAR_5)
{
 struct gem *VAR_6 = FUNC_0(VAR_5);
 struct net_device_stats *VAR_7 = &VAR_6->net_stats;

 FUNC_3(&VAR_6->lock);
 FUNC_2(&VAR_6->tx_lock);




 if (VAR_6->running) {
  VAR_7->rx_crc_errors += FUNC_1(VAR_6->regs + VAR_2);
  FUNC_6(0, VAR_6->regs + VAR_2);

  VAR_7->rx_frame_errors += FUNC_1(VAR_6->regs + VAR_0);
  FUNC_6(0, VAR_6->regs + VAR_0);

  VAR_7->rx_length_errors += FUNC_1(VAR_6->regs + VAR_4);
  FUNC_6(0, VAR_6->regs + VAR_4);

  VAR_7->tx_aborted_errors += FUNC_1(VAR_6->regs + VAR_1);
  VAR_7->collisions +=
   (FUNC_1(VAR_6->regs + VAR_1) +
    FUNC_1(VAR_6->regs + VAR_3));
  FUNC_6(0, VAR_6->regs + VAR_1);
  FUNC_6(0, VAR_6->regs + VAR_3);
 }

 FUNC_4(&VAR_6->tx_lock);
 FUNC_5(&VAR_6->lock);

 return &VAR_6->net_stats;
}
