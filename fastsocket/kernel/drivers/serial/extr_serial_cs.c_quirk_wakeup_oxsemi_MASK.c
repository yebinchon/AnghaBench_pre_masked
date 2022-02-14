
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {scalar_t__ c950ctrl; } ;
struct pcmcia_device {struct serial_info* priv; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;

 FUNC_0(12, VAR_1->c950ctrl + 1);
}
