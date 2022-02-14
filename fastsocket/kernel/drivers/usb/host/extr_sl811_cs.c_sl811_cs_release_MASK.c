
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device * VAR_1)
{
 FUNC_0(0, "sl811_cs_release(0x%p)\n", VAR_1);

 FUNC_1(VAR_1);
 FUNC_2(&VAR_0);
}
