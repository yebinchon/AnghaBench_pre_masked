
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct skge_port {struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ chip_id; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 struct skge_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct skge_port *VAR_4 = FUNC_1(VAR_2);
 struct skge_hw *VAR_5 = VAR_4->hw;

 if (VAR_5->chip_id == VAR_0 && VAR_3)
  return -VAR_1;

 return FUNC_0(VAR_2, VAR_3);
}
