
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int priv; } ;
struct TYPE_3__ {int flags; int base; } ;
typedef TYPE_1__ pcnet_dev_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_1)
{
 pcnet_dev_t *VAR_2 = FUNC_1(VAR_1->priv);

 FUNC_0(0, "pcnet_release(0x%p)\n", VAR_1);

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2->base);

 FUNC_3(VAR_1);
}
