
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_private {int base; } ;
struct pcmcia_device {struct net_device* priv; scalar_t__ win; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (int ) ;
 struct smc_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 FUNC_0(0, "smc91c92_release(0x%p)\n", VAR_0);
 if (VAR_0->win) {
  struct net_device *VAR_1 = VAR_0->priv;
  struct smc_private *VAR_2 = FUNC_2(VAR_1);
  FUNC_1(VAR_2->base);
 }
 FUNC_3(VAR_0);
}
