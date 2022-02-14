
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; } ;
struct net_device {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2)
{
 const struct sky2_port *VAR_3 = FUNC_0(VAR_2);
 const struct sky2_hw *VAR_4 = VAR_3->hw;

 return VAR_2->mtu > VAR_1 && VAR_4->chip_id == VAR_0;
}
