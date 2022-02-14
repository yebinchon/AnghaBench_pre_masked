
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct orinoco_private* priv; } ;
struct orinoco_private {int dummy; } ;


 int FUNC_0 (struct orinoco_private*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct orinoco_private*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct orinoco_private *VAR_1 = VAR_0->priv;

 FUNC_2(VAR_1);

 FUNC_1(VAR_0);

 FUNC_0(VAR_1);
}
