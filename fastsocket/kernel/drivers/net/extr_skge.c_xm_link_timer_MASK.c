
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; int link_timer; struct skge_hw* hw; struct net_device* netdev; } ;
struct skge_hw {int phy_lock; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct skge_hw*,int,int ) ;
 int FUNC_7 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_7)
{
 struct skge_port *VAR_8 = (struct skge_port *) VAR_7;
 struct net_device *VAR_9 = VAR_8->netdev;
  struct skge_hw *VAR_10 = VAR_8->hw;
 int VAR_11 = VAR_8->port;
 int VAR_12;
 unsigned long VAR_13;

 if (!FUNC_1(VAR_9))
  return;

 FUNC_3(&VAR_10->phy_lock, VAR_13);





 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  if (FUNC_6(VAR_10, VAR_11, VAR_2) & VAR_1)
   goto link_down;
 }


 if (FUNC_5(VAR_9)) {
  u16 VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_3);
  VAR_14 &= ~VAR_5;
  FUNC_7(VAR_10, VAR_11, VAR_3, VAR_14);
  FUNC_6(VAR_10, VAR_11, VAR_4);
 } else {
link_down:
  FUNC_0(&VAR_8->link_timer,
     FUNC_2(VAR_6 + VAR_0));
 }
 FUNC_4(&VAR_10->phy_lock, VAR_13);
}
