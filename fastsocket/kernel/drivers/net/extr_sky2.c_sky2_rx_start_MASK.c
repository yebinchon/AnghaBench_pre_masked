
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sky2_port {size_t port; unsigned int rx_nfrags; unsigned int rx_data_size; unsigned int rx_pending; struct rx_ring_info* rx_ring; TYPE_1__* netdev; int rx_le_map; scalar_t__ rx_next; scalar_t__ rx_put; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int flags; int pdev; } ;
struct rx_ring_info {int * skb; int frag_addr; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (size_t,int ) ;
 scalar_t__ VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 unsigned int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct sky2_port*) ;
 unsigned int* VAR_19 ;
 int FUNC_8 (struct sky2_hw*,unsigned int,int ,scalar_t__) ;
 int FUNC_9 (struct sky2_hw*,unsigned int) ;
 int * FUNC_10 (struct sky2_port*) ;
 int FUNC_11 (struct sky2_port*) ;
 scalar_t__ FUNC_12 (int ,struct rx_ring_info*,unsigned int) ;
 int FUNC_13 (struct sky2_port*,struct rx_ring_info*) ;
 int FUNC_14 (struct sky2_port*,unsigned int) ;
 int FUNC_15 (struct sky2_hw*,int ,unsigned int) ;
 int FUNC_16 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct sky2_port *VAR_20)
{
 struct sky2_hw *VAR_21 = VAR_20->hw;
 struct rx_ring_info *VAR_22;
 unsigned VAR_23 = VAR_19[VAR_20->port];
 unsigned VAR_24, VAR_25, VAR_26;

 VAR_20->rx_put = VAR_20->rx_next = 0;
 FUNC_9(VAR_21, VAR_23);


 if (FUNC_5(VAR_21->pdev, VAR_8))
  FUNC_16(VAR_21, FUNC_2(VAR_23, VAR_10), VAR_0);



 if (VAR_21->chip_id == VAR_1 &&
     (VAR_21->chip_rev == VAR_2
      || VAR_21->chip_rev == VAR_3))
  FUNC_16(VAR_21, FUNC_2(VAR_23, VAR_9), VAR_6);

 FUNC_8(VAR_21, VAR_23, VAR_20->rx_le_map, VAR_13 - 1);

 if (!(VAR_21->flags & VAR_16))
  FUNC_7(VAR_20);


 VAR_25 = FUNC_6(VAR_20->netdev->mtu + VAR_5 + VAR_17, 8);


 VAR_26 = (VAR_25 - 8) / sizeof(u32);

 VAR_20->rx_nfrags = VAR_25 >> VAR_7;
 FUNC_1(VAR_20->rx_nfrags > FUNC_0(VAR_22->frag_addr));


 VAR_25 -= VAR_20->rx_nfrags << VAR_7;


 if (VAR_25 < VAR_18)
  VAR_25 = VAR_18;
 if (VAR_25 < VAR_5)
  VAR_25 = VAR_5;

 VAR_20->rx_data_size = VAR_25;


 for (VAR_24 = 0; VAR_24 < VAR_20->rx_pending; VAR_24++) {
  VAR_22 = VAR_20->rx_ring + VAR_24;

  VAR_22->skb = FUNC_10(VAR_20);
  if (!VAR_22->skb)
   goto nomem;

  if (FUNC_12(VAR_21->pdev, VAR_22, VAR_20->rx_data_size)) {
   FUNC_4(VAR_22->skb);
   VAR_22->skb = ((void*)0);
   goto nomem;
  }

  FUNC_13(VAR_20, VAR_22);
 }







 if (VAR_26 > 0x1ff)
  FUNC_16(VAR_21, FUNC_3(VAR_20->port, VAR_11), VAR_14);
 else {
  FUNC_15(VAR_21, FUNC_3(VAR_20->port, VAR_12), VAR_26);
  FUNC_16(VAR_21, FUNC_3(VAR_20->port, VAR_11), VAR_15);
 }


 FUNC_14(VAR_20, VAR_23);
 return 0;
nomem:
 FUNC_11(VAR_20);
 return -VAR_4;
}
