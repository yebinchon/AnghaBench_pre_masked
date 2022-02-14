
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {scalar_t__* rx_count; scalar_t__* tx_count; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct prism2_hostapd_param {int sta_addr; } ;
struct ap_data {int sta_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sta_info* FUNC_0 (struct ap_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ap_data *VAR_2,
       struct prism2_hostapd_param *VAR_3)
{
 struct sta_info *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->sta_table_lock);
 VAR_4 = FUNC_0(VAR_2, VAR_3->sta_addr);
 if (VAR_4) {
  VAR_4->rx_packets = VAR_4->tx_packets = 0;
  VAR_4->rx_bytes = VAR_4->tx_bytes = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_4->tx_count[VAR_5] = 0;
   VAR_4->rx_count[VAR_5] = 0;
  }
 }
 FUNC_2(&VAR_2->sta_table_lock);

 if (!VAR_4)
  return -VAR_0;

 return 0;
}
