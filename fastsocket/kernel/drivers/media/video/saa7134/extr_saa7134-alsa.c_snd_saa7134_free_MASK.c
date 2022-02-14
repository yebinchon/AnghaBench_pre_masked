
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_card {TYPE_2__* private_data; } ;
struct TYPE_5__ {scalar_t__ irq; TYPE_1__* dev; } ;
typedef TYPE_2__ snd_card_saa7134_t ;
struct TYPE_6__ {int * priv_data; } ;
struct TYPE_4__ {TYPE_3__ dmasound; } ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct snd_card * VAR_0)
{
 snd_card_saa7134_t *VAR_1 = VAR_0->private_data;

 if (VAR_1->dev->dmasound.priv_data == ((void*)0))
  return;

 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, &VAR_1->dev->dmasound);

 VAR_1->dev->dmasound.priv_data = ((void*)0);

}
