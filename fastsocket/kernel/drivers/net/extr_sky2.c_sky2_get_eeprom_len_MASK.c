
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sky2_hw*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 struct sky2_port *VAR_3 = FUNC_0(VAR_2);
 struct sky2_hw *VAR_4 = VAR_3->hw;
 u16 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 return 1 << ( ((VAR_5 & VAR_1) >> 14) + 8);
}
