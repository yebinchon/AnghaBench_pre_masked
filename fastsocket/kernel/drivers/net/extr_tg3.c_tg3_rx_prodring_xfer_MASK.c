
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tg3_rx_prodring_set {int rx_std_prod_idx; int rx_std_cons_idx; int rx_jmb_prod_idx; int rx_jmb_cons_idx; TYPE_1__* rx_jmb; TYPE_2__* rx_jmb_buffers; struct tg3_rx_buffer_desc* rx_std; TYPE_2__* rx_std_buffers; } ;
struct tg3_rx_buffer_desc {int addr_lo; int addr_hi; } ;
struct tg3 {int rx_std_ring_mask; int rx_jmb_ring_mask; } ;
struct ring_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {struct tg3_rx_buffer_desc std; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct tg3 *VAR_1,
    struct tg3_rx_prodring_set *VAR_2,
    struct tg3_rx_prodring_set *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;

 while (1) {
  VAR_7 = VAR_3->rx_std_prod_idx;




  FUNC_2();

  if (VAR_3->rx_std_cons_idx == VAR_7)
   break;

  if (VAR_3->rx_std_cons_idx < VAR_7)
   VAR_6 = VAR_7 - VAR_3->rx_std_cons_idx;
  else
   VAR_6 = VAR_1->rx_std_ring_mask + 1 -
     VAR_3->rx_std_cons_idx;

  VAR_6 = FUNC_1(VAR_6,
        VAR_1->rx_std_ring_mask + 1 - VAR_2->rx_std_prod_idx);

  VAR_4 = VAR_3->rx_std_cons_idx;
  VAR_5 = VAR_2->rx_std_prod_idx;

  for (VAR_8 = VAR_5; VAR_8 < VAR_5 + VAR_6; VAR_8++) {
   if (VAR_2->rx_std_buffers[VAR_8].data) {
    VAR_6 = VAR_8 - VAR_5;
    VAR_9 = -VAR_0;
    break;
   }
  }

  if (!VAR_6)
   break;





  FUNC_2();

  FUNC_0(&VAR_2->rx_std_buffers[VAR_5],
         &VAR_3->rx_std_buffers[VAR_4],
         VAR_6 * sizeof(struct ring_info));

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++, VAR_5++, VAR_4++) {
   struct tg3_rx_buffer_desc *VAR_10, *VAR_11;
   VAR_10 = &VAR_3->rx_std[VAR_4];
   VAR_11 = &VAR_2->rx_std[VAR_5];
   VAR_11->addr_hi = VAR_10->addr_hi;
   VAR_11->addr_lo = VAR_10->addr_lo;
  }

  VAR_3->rx_std_cons_idx = (VAR_3->rx_std_cons_idx + VAR_6) &
           VAR_1->rx_std_ring_mask;
  VAR_2->rx_std_prod_idx = (VAR_2->rx_std_prod_idx + VAR_6) &
           VAR_1->rx_std_ring_mask;
 }

 while (1) {
  VAR_7 = VAR_3->rx_jmb_prod_idx;




  FUNC_2();

  if (VAR_3->rx_jmb_cons_idx == VAR_7)
   break;

  if (VAR_3->rx_jmb_cons_idx < VAR_7)
   VAR_6 = VAR_7 - VAR_3->rx_jmb_cons_idx;
  else
   VAR_6 = VAR_1->rx_jmb_ring_mask + 1 -
     VAR_3->rx_jmb_cons_idx;

  VAR_6 = FUNC_1(VAR_6,
        VAR_1->rx_jmb_ring_mask + 1 - VAR_2->rx_jmb_prod_idx);

  VAR_4 = VAR_3->rx_jmb_cons_idx;
  VAR_5 = VAR_2->rx_jmb_prod_idx;

  for (VAR_8 = VAR_5; VAR_8 < VAR_5 + VAR_6; VAR_8++) {
   if (VAR_2->rx_jmb_buffers[VAR_8].data) {
    VAR_6 = VAR_8 - VAR_5;
    VAR_9 = -VAR_0;
    break;
   }
  }

  if (!VAR_6)
   break;





  FUNC_2();

  FUNC_0(&VAR_2->rx_jmb_buffers[VAR_5],
         &VAR_3->rx_jmb_buffers[VAR_4],
         VAR_6 * sizeof(struct ring_info));

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++, VAR_5++, VAR_4++) {
   struct tg3_rx_buffer_desc *VAR_12, *VAR_13;
   VAR_12 = &VAR_3->rx_jmb[VAR_4].std;
   VAR_13 = &VAR_2->rx_jmb[VAR_5].std;
   VAR_13->addr_hi = VAR_12->addr_hi;
   VAR_13->addr_lo = VAR_12->addr_lo;
  }

  VAR_3->rx_jmb_cons_idx = (VAR_3->rx_jmb_cons_idx + VAR_6) &
           VAR_1->rx_jmb_ring_mask;
  VAR_2->rx_jmb_prod_idx = (VAR_2->rx_jmb_prod_idx + VAR_6) &
           VAR_1->rx_jmb_ring_mask;
 }

 return VAR_9;
}
