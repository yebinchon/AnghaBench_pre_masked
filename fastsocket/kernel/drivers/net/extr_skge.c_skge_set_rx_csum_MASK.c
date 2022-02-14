
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct skge_port {scalar_t__ rx_csum; TYPE_1__* hw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, u32 VAR_3)
{
 struct skge_port *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->hw->chip_id == VAR_0 && VAR_3)
  return -VAR_1;

 VAR_4->rx_csum = VAR_3;
 return 0;
}
