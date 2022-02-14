
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; int mc_count; } ;
struct de_private {unsigned int tx_head; struct de_desc* tx_ring; int setup_frame; int pdev; TYPE_1__* tx_skb; } ;
struct de_desc {void* opts1; void* addr1; void* opts2; } ;
struct TYPE_2__ {int mapping; int skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct de_private*) ;
 int VAR_13 ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 struct de_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11 (struct net_device *VAR_14)
{
 struct de_private *VAR_15 = FUNC_7(VAR_14);
 u32 VAR_16;
 unsigned int VAR_17;
 u32 VAR_18;
 struct de_desc *VAR_19;
 struct de_desc *VAR_20 = ((void*)0);

 VAR_16 = FUNC_5(VAR_8) & ~(VAR_0 | VAR_1);

 if (VAR_14->flags & VAR_7) {
  VAR_16 |= VAR_0 | VAR_1;
  goto out;
 }

 if ((VAR_14->mc_count > 1000) || (VAR_14->flags & VAR_6)) {

  VAR_16 |= VAR_0;
  goto out;
 }



 if (VAR_14->mc_count > 14)
  FUNC_2 (VAR_15->setup_frame, VAR_14);
 else
  FUNC_3 (VAR_15->setup_frame, VAR_14);





 VAR_17 = VAR_15->tx_head;


 if (VAR_17 != 0) {
  VAR_15->tx_skb[VAR_17].skb = VAR_2;

  VAR_20 = &VAR_15->tx_ring[VAR_17];
  VAR_20->opts2 = (VAR_17 == (VAR_4 - 1)) ?
       FUNC_4(VAR_11) : 0;
  VAR_20->addr1 = 0;



  VAR_17 = FUNC_0(VAR_17);
 }

 VAR_15->tx_skb[VAR_17].skb = VAR_3;
 VAR_15->tx_skb[VAR_17].mapping = VAR_18 =
     FUNC_9 (VAR_15->pdev, VAR_15->setup_frame,
       sizeof (VAR_15->setup_frame), VAR_10);


 VAR_19 = &VAR_15->tx_ring[VAR_17];
 if (VAR_17 == (VAR_4 - 1))
  VAR_19->opts2 = FUNC_4(VAR_12 | VAR_11 | sizeof (VAR_15->setup_frame));
 else
  VAR_19->opts2 = FUNC_4(VAR_12 | sizeof (VAR_15->setup_frame));
 VAR_19->addr1 = FUNC_4(VAR_18);
 FUNC_10();

 VAR_19->opts1 = FUNC_4(VAR_5);
 FUNC_10();

 if (VAR_20) {
  VAR_20->opts1 = FUNC_4(VAR_5);
  FUNC_10();
 }

 VAR_15->tx_head = FUNC_0(VAR_17);

 if (FUNC_1(VAR_15) == 0)
  FUNC_8(VAR_14);


 FUNC_6(VAR_13, VAR_9);

out:
 if (VAR_16 != FUNC_5(VAR_8))
  FUNC_6(VAR_8, VAR_16);
}
