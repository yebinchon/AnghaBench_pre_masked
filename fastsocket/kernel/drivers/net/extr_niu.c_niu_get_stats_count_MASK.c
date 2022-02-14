
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int flags; int num_rx_rings; int num_tx_rings; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct niu* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5)
{
 struct niu *VAR_6 = FUNC_0(VAR_5);

 return ((VAR_6->flags & VAR_0 ?
   VAR_4 :
   VAR_1) +
  (VAR_6->num_rx_rings * VAR_2) +
  (VAR_6->num_tx_rings * VAR_3));
}
