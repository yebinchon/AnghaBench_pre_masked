
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ priv; } ;
struct TYPE_2__ {int * eth_dev; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 FUNC_0(0, "airo_detach(0x%p)\n", VAR_0);

 FUNC_1(VAR_0);

 if (((local_info_t *)VAR_0->priv)->eth_dev) {
  FUNC_3(((local_info_t *)VAR_0->priv)->eth_dev, 0);
 }
 ((local_info_t *)VAR_0->priv)->eth_dev = ((void*)0);

 FUNC_2(VAR_0->priv);
}
