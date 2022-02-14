
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_3__ {int busy; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 local_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(0, "elsa_cs_detach(0x%p)\n", VAR_0);

 VAR_1->busy = 1;
 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
