
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {int multi; } ;
struct pcmcia_device {struct serial_info* priv; } ;



__attribute__((used)) static void FUNC_0(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;

 if (VAR_1->multi > 1)
  VAR_1->multi = 1;
}
