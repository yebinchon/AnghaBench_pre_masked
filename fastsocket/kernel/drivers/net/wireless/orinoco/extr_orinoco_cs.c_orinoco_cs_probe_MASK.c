
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int IntType; scalar_t__ Attributes; } ;
struct TYPE_3__ {int Handler; int Attributes; } ;
struct pcmcia_device {TYPE_2__ conf; TYPE_1__ irq; struct orinoco_private* priv; int dev; } ;
struct orinoco_private {struct orinoco_pccard* card; } ;
struct orinoco_pccard {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct orinoco_private* FUNC_0 (int,int *,int ,int *) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct pcmcia_device *VAR_5)
{
 struct orinoco_private *VAR_6;
 struct orinoco_pccard *VAR_7;

 VAR_6 = FUNC_0(sizeof(*VAR_7), &VAR_5->dev,
    VAR_3, ((void*)0));
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_6->card;


 VAR_7->p_dev = VAR_5;
 VAR_5->priv = VAR_6;



 VAR_5->irq.Attributes = VAR_2;
 VAR_5->irq.Handler = VAR_4;
 VAR_5->conf.Attributes = 0;
 VAR_5->conf.IntType = VAR_1;


 return FUNC_1(VAR_5);
}
