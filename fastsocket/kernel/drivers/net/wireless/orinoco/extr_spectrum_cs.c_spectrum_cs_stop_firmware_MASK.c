
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;
struct orinoco_private {struct orinoco_pccard* card; } ;
struct orinoco_pccard {struct pcmcia_device* p_dev; } ;


 int FUNC_0 (struct pcmcia_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct orinoco_private *VAR_0, int VAR_1)
{
 struct orinoco_pccard *VAR_2 = VAR_0->card;
 struct pcmcia_device *VAR_3 = VAR_2->p_dev;

 return FUNC_0(VAR_3, VAR_1);
}
