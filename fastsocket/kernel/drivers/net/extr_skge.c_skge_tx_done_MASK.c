
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_tx_desc {int control; } ;
struct skge_ring {struct skge_element* to_clean; struct skge_element* to_use; } ;
struct skge_port {size_t port; struct skge_ring tx_ring; int hw; } ;
struct skge_element {scalar_t__ desc; struct skge_element* next; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct skge_ring*) ;
 int FUNC_7 (struct skge_port*,struct skge_element*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 () ;
 int * VAR_4 ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_5)
{
 struct skge_port *VAR_6 = FUNC_1(VAR_5);
 struct skge_ring *VAR_7 = &VAR_6->tx_ring;
 struct skge_element *VAR_8;

 FUNC_8(VAR_6->hw, FUNC_0(VAR_4[VAR_6->port], VAR_2), VAR_1);

 for (VAR_8 = VAR_7->to_clean; VAR_8 != VAR_7->to_use; VAR_8 = VAR_8->next) {
  u32 VAR_9 = ((const struct skge_tx_desc *) VAR_8->desc)->control;

  if (VAR_9 & VAR_0)
   break;

  FUNC_7(VAR_6, VAR_8, VAR_9);
 }
 VAR_6->tx_ring.to_clean = VAR_8;


 FUNC_9();

 if (FUNC_10(FUNC_2(VAR_5) &&
       FUNC_6(&VAR_6->tx_ring) > VAR_3)) {
  FUNC_3(VAR_5);
  if (FUNC_10(FUNC_2(VAR_5) &&
        FUNC_6(&VAR_6->tx_ring) > VAR_3)) {
   FUNC_5(VAR_5);

  }
  FUNC_4(VAR_5);
 }
}
