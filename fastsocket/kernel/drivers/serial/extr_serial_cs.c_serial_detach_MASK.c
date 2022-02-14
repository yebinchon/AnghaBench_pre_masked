
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {int dummy; } ;
struct pcmcia_device {struct serial_info* priv; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct serial_info*) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;

 FUNC_0(0, "serial_detach(0x%p)\n", VAR_0);




 FUNC_1();




 FUNC_3(VAR_0);


 FUNC_2(VAR_1);
}
