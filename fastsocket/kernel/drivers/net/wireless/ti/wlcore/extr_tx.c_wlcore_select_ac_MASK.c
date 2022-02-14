
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wl1271 {scalar_t__* tx_allocated_pkts; scalar_t__* tx_queue_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_1)
{
 int VAR_2, VAR_3 = -1, VAR_4;
 u32 VAR_5 = 0xffffffff;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_1->tx_queue_count[VAR_4] &&
      VAR_1->tx_allocated_pkts[VAR_4] < VAR_5) {
   VAR_3 = VAR_4;
   VAR_5 = VAR_1->tx_allocated_pkts[VAR_3];
  }
 }

 return VAR_3;
}
