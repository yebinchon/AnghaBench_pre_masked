
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ priv; } ;
struct TYPE_2__ {int stop; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 FUNC_0(0, "sedlbauer_detach(0x%p)\n", VAR_0);

 ((local_info_t *)VAR_0->priv)->stop = 1;
 FUNC_2(VAR_0);


 FUNC_1(VAR_0->priv);
}
