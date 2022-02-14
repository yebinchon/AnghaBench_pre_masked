
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {scalar_t__ autoneg; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct skge_port *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->autoneg != VAR_0 || !FUNC_1(VAR_2))
  return -VAR_1;

 FUNC_2(VAR_3);
 return 0;
}
