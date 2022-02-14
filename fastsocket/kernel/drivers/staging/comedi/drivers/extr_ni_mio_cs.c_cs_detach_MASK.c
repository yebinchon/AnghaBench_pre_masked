
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ dev_node; } ;


 int FUNC_0 (char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 FUNC_0("cs_detach(link=%p)\n", VAR_0);

 if (VAR_0->dev_node) {
  FUNC_1(VAR_0);
 }
}
