
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_eth_private {int lock; struct sh_eth_cpu_data* cd; } ;
struct sh_eth_cpu_data {int tx_check; int eesr_err_check; } ;
struct net_device {int base_addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct net_device *VAR_12 = VAR_11;
 struct sh_eth_private *VAR_13 = FUNC_2(VAR_12);
 struct sh_eth_cpu_data *VAR_14 = VAR_13->cd;
 irqreturn_t VAR_15 = VAR_9;
 u32 VAR_16, VAR_17 = 0;

 VAR_16 = VAR_12->base_addr;
 FUNC_7(&VAR_13->lock);


 VAR_17 = FUNC_0(VAR_16 + VAR_0);

 if (VAR_17 & (VAR_2 | VAR_4 | VAR_5 |
   VAR_6 | VAR_7 | VAR_3 | VAR_1 |
   VAR_14->tx_check | VAR_14->eesr_err_check)) {
  FUNC_1(VAR_17, VAR_16 + VAR_0);
  VAR_15 = VAR_8;
 } else
  goto other_irq;

 if (VAR_17 & (VAR_2 |
   VAR_4 |
   VAR_5 |
   VAR_6 |
   VAR_7 |
   VAR_3 |
   VAR_1)){
  FUNC_5(VAR_12);
 }


 if (VAR_17 & VAR_14->tx_check) {
  FUNC_6(VAR_12);
  FUNC_3(VAR_12);
 }

 if (VAR_17 & VAR_14->eesr_err_check)
  FUNC_4(VAR_12, VAR_17);

other_irq:
 FUNC_8(&VAR_13->lock);

 return VAR_15;
}
