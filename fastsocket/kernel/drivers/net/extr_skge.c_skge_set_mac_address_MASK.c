
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sockaddr {int sa_data; } ;
struct skge_port {unsigned int port; struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ chip_id; int phy_lock; scalar_t__ regs; } ;
struct net_device {int dev_addr; } ;


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
 int FUNC_0 (struct skge_hw*,unsigned int,int ) ;
 int FUNC_1 (struct skge_hw*,unsigned int,int ,int ) ;
 int FUNC_2 (struct skge_hw*,unsigned int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 struct skge_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct skge_hw*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_10, void *VAR_11)
{
 struct skge_port *VAR_12 = FUNC_6(VAR_10);
 struct skge_hw *VAR_13 = VAR_12->hw;
 unsigned VAR_14 = VAR_12->port;
 const struct sockaddr *VAR_15 = VAR_11;
 u16 VAR_16;

 if (!FUNC_3(VAR_15->sa_data))
  return -VAR_3;

 FUNC_4(VAR_10->dev_addr, VAR_15->sa_data, VAR_4);

 if (!FUNC_7(VAR_10)) {
  FUNC_5(VAR_13->regs + VAR_0 + VAR_14*8, VAR_10->dev_addr, VAR_4);
  FUNC_5(VAR_13->regs + VAR_1 + VAR_14*8, VAR_10->dev_addr, VAR_4);
 } else {

  FUNC_8(&VAR_13->phy_lock);
  VAR_16 = FUNC_0(VAR_13, VAR_14, VAR_6);
  FUNC_2(VAR_13, VAR_14, VAR_6, VAR_16 & ~VAR_5);

  FUNC_5(VAR_13->regs + VAR_0 + VAR_14*8, VAR_10->dev_addr, VAR_4);
  FUNC_5(VAR_13->regs + VAR_1 + VAR_14*8, VAR_10->dev_addr, VAR_4);

  if (VAR_13->chip_id == VAR_2)
   FUNC_10(VAR_13, VAR_14, VAR_9, VAR_10->dev_addr);
  else {
   FUNC_1(VAR_13, VAR_14, VAR_7, VAR_10->dev_addr);
   FUNC_1(VAR_13, VAR_14, VAR_8, VAR_10->dev_addr);
  }

  FUNC_2(VAR_13, VAR_14, VAR_6, VAR_16);
  FUNC_9(&VAR_13->phy_lock);
 }

 return 0;
}
