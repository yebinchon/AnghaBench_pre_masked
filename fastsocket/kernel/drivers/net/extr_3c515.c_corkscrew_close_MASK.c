
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; scalar_t__ if_port; int irq; int name; } ;
struct corkscrew_private {int ** tx_skbuff; scalar_t__ full_bus_master_tx; int ** rx_skbuff; scalar_t__ full_bus_master_rx; int timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct corkscrew_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (char*,int ,int ,int ,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int,struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_17)
{
 struct corkscrew_private *VAR_18 = FUNC_5(VAR_17);
 int VAR_19 = VAR_17->base_addr;
 int VAR_20;

 FUNC_6(VAR_17);

 if (VAR_13 > 1) {
  FUNC_9("%s: corkscrew_close() status %4.4x, Tx status %2.2x.\n",
       VAR_17->name, FUNC_4(VAR_19 + VAR_2),
       FUNC_3(VAR_19 + VAR_10));
  FUNC_9("%s: corkscrew close stats: rx_nocopy %d rx_copy %d tx_queued %d.\n",
   VAR_17->name, VAR_16, VAR_15, VAR_14);
 }

 FUNC_0(&VAR_18->timer);


 FUNC_8(VAR_6, VAR_19 + VAR_1);


 FUNC_8(VAR_4, VAR_19 + VAR_1);
 FUNC_8(VAR_9, VAR_19 + VAR_1);

 if (VAR_17->if_port == VAR_12)

  FUNC_8(VAR_7, VAR_19 + VAR_1);

 FUNC_2(VAR_17->irq, VAR_17);

 FUNC_8(VAR_5 | 0x0000, VAR_19 + VAR_1);

 FUNC_10(VAR_19, VAR_17);
 if (VAR_18->full_bus_master_rx) {
  FUNC_7(0, VAR_19 + VAR_11);
  for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
   if (VAR_18->rx_skbuff[VAR_20]) {
    FUNC_1(VAR_18->rx_skbuff[VAR_20]);
    VAR_18->rx_skbuff[VAR_20] = ((void*)0);
   }
 }
 if (VAR_18->full_bus_master_tx) {
  FUNC_7(0, VAR_19 + VAR_0);
  for (VAR_20 = 0; VAR_20 < VAR_8; VAR_20++)
   if (VAR_18->tx_skbuff[VAR_20]) {
    FUNC_1(VAR_18->tx_skbuff[VAR_20]);
    VAR_18->tx_skbuff[VAR_20] = ((void*)0);
   }
 }

 return 0;
}
