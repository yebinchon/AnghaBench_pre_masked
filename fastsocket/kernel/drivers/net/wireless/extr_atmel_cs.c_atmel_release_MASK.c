
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* eth_dev; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct net_device *VAR_1 = ((local_info_t*)VAR_0->priv)->eth_dev;

 FUNC_0(0, "atmel_release(0x%p)\n", VAR_0);

 if (VAR_1)
  FUNC_2(VAR_1);
 ((local_info_t*)VAR_0->priv)->eth_dev = ((void*)0);

 FUNC_1(VAR_0);
}
