
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {TYPE_1__** tx_ring; int srp_host; TYPE_1__** rx_ring; int free_tx; int max_iu_len; int max_ti_iu_len; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct srp_target_port *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
  VAR_6->rx_ring[VAR_7] = FUNC_1(VAR_6->srp_host,
        VAR_6->max_ti_iu_len,
        VAR_3, VAR_0);
  if (!VAR_6->rx_ring[VAR_7])
   goto err;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  VAR_6->tx_ring[VAR_7] = FUNC_1(VAR_6->srp_host,
        VAR_6->max_iu_len,
        VAR_3, VAR_1);
  if (!VAR_6->tx_ring[VAR_7])
   goto err;

  FUNC_0(&VAR_6->tx_ring[VAR_7]->list, &VAR_6->free_tx);
 }

 return 0;

err:
 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
  FUNC_2(VAR_6->srp_host, VAR_6->rx_ring[VAR_7]);
  VAR_6->rx_ring[VAR_7] = ((void*)0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  FUNC_2(VAR_6->srp_host, VAR_6->tx_ring[VAR_7]);
  VAR_6->tx_ring[VAR_7] = ((void*)0);
 }

 return -VAR_2;
}
