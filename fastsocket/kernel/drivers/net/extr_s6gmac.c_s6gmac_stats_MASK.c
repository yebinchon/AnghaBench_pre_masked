
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {int* stats; int* carry; int lock; } ;
struct net_device_stats {scalar_t__ tx_aborted_errors; int tx_errors; scalar_t__ rx_missed_errors; scalar_t__ rx_length_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_errors; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct s6gmac*,int *) ;
 int FUNC_2 (struct s6gmac*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int ** VAR_1 ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_2)
{
 struct s6gmac *VAR_3 = FUNC_0(VAR_2);
 struct net_device_stats *VAR_4 = (struct net_device_stats *)&VAR_3->stats;
 int VAR_5;
 do {
  unsigned long VAR_6;
  FUNC_3(&VAR_3->lock, VAR_6);
  for (VAR_5 = 0; VAR_5 < sizeof(VAR_3->stats) / sizeof(unsigned long); VAR_5++)
   VAR_3->stats[VAR_5] =
    VAR_3->carry[VAR_5] << (VAR_0 - 1);
  FUNC_1(VAR_3, &VAR_1[0][0]);
  FUNC_1(VAR_3, &VAR_1[1][0]);
  VAR_5 = FUNC_2(VAR_3, 0) |
   FUNC_2(VAR_3, 1);
  FUNC_4(&VAR_3->lock, VAR_6);
 } while (VAR_5);
 VAR_4->rx_errors = VAR_4->rx_crc_errors +
   VAR_4->rx_frame_errors +
   VAR_4->rx_length_errors +
   VAR_4->rx_missed_errors;
 VAR_4->tx_errors += VAR_4->tx_aborted_errors;
 return VAR_4;
}
