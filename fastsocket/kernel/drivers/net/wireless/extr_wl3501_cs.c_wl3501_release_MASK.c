
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ dev_node; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->priv;


 if (VAR_0->dev_node)
  FUNC_1(VAR_1);

 FUNC_0(VAR_0);
}
