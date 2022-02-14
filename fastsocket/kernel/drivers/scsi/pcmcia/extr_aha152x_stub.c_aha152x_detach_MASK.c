
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int priv; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
    FUNC_0(0, "aha152x_detach(0x%p)\n", VAR_0);

    FUNC_1(VAR_0);


    FUNC_2(VAR_0->priv);
}
