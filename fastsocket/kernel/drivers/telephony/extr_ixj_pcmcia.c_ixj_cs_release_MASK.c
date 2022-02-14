
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ ndev; } ;
typedef TYPE_1__ ixj_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 ixj_info_t *VAR_1 = VAR_0->priv;
 FUNC_0(0, "ixj_cs_release(0x%p)\n", VAR_0);
 VAR_1->ndev = 0;
 FUNC_1(VAR_0);
}
