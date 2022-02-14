
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {TYPE_2__* priv; } ;
struct TYPE_3__ {int minor; } ;
struct TYPE_4__ {TYPE_1__ node; } ;
typedef TYPE_2__ local_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 local_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(0, "avma1cs_release(0x%p)\n", VAR_0);


 FUNC_1(VAR_1->node.minor);

 FUNC_2(VAR_0);
}
