
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ win; struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int ramBase; } ;
typedef TYPE_1__ netwave_private ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->priv;
 netwave_private *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(0, "netwave_release(0x%p)\n", VAR_0);

 FUNC_3(VAR_0);
 if (VAR_0->win)
  FUNC_1(VAR_2->ramBase);
}
