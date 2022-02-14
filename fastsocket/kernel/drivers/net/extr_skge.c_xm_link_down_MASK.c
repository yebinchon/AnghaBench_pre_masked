
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int dummy; } ;
struct skge_hw {struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*) ;
 int FUNC_3 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct skge_hw *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev[VAR_3];
 struct skge_port *VAR_5 = FUNC_0(VAR_4);

 FUNC_3(VAR_2, VAR_3, VAR_0, VAR_1);

 if (FUNC_1(VAR_4))
  FUNC_2(VAR_5);
}
