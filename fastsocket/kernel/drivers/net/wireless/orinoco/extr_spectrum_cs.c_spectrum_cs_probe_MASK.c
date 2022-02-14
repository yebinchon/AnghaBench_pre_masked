
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
 struct orinoco_private* FUNC_0 (int,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct pcmcia_device *VAR_6)
{
 struct orinoco_private *VAR_7;
 struct orinoco_pccard *VAR_8;

 VAR_7 = FUNC_0(sizeof(*VAR_8), &VAR_6->dev,
    VAR_4,
    VAR_5);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = VAR_7->card;


 VAR_8->p_dev = VAR_6;
 VAR_6->priv = VAR_7;



 VAR_6->irq.Attributes = VAR_2;
 VAR_6->irq.Handler = VAR_3;
 VAR_6->conf.Attributes = 0;
 VAR_6->conf.IntType = VAR_1;


 return FUNC_1(VAR_6);
}
