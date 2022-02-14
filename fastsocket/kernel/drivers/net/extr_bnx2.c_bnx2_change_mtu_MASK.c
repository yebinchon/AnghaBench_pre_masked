
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct bnx2 {int tx_ring_size; int rx_ring_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnx2*,int ,int ) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct bnx2 *VAR_6 = FUNC_1(VAR_4);

 if (((VAR_5 + VAR_1) > VAR_2) ||
  ((VAR_5 + VAR_1) < VAR_3))
  return -VAR_0;

 VAR_4->mtu = VAR_5;
 return (FUNC_0(VAR_6, VAR_6->rx_ring_size, VAR_6->tx_ring_size));
}
