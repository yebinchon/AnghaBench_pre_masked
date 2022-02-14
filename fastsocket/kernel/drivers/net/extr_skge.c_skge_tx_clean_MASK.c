
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skge_tx_desc {scalar_t__ control; } ;
struct TYPE_2__ {struct skge_element* to_clean; struct skge_element* to_use; } ;
struct skge_port {TYPE_1__ tx_ring; } ;
struct skge_element {struct skge_tx_desc* desc; struct skge_element* next; } ;
struct net_device {int dummy; } ;


 struct skge_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct skge_port*,struct skge_element*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct skge_port *VAR_1 = FUNC_0(VAR_0);
 struct skge_element *VAR_2;

 for (VAR_2 = VAR_1->tx_ring.to_clean; VAR_2 != VAR_1->tx_ring.to_use; VAR_2 = VAR_2->next) {
  struct skge_tx_desc *VAR_3 = VAR_2->desc;
  FUNC_1(VAR_1, VAR_2, VAR_3->control);
  VAR_3->control = 0;
 }

 VAR_1->tx_ring.to_clean = VAR_2;
}
