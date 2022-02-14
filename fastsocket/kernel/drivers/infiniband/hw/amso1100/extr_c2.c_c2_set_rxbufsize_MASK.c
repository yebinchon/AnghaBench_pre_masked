
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
struct c2_rxp_hdr {int dummy; } ;
struct c2_port {scalar_t__ rx_buf_size; struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct c2_port *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 if (VAR_4->mtu > VAR_2)
  VAR_3->rx_buf_size =
      VAR_4->mtu + VAR_0 + sizeof(struct c2_rxp_hdr) +
      VAR_1;
 else
  VAR_3->rx_buf_size = sizeof(struct c2_rxp_hdr) + VAR_2;
}
