
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ chip_id; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct skge_port *VAR_2 = FUNC_1(VAR_1);
 struct skge_hw *VAR_3 = VAR_2->hw;

 if (VAR_3->chip_id == VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_2(VAR_1);

}
