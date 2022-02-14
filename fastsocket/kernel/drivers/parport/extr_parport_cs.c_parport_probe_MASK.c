
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int IntType; int Attributes; } ;
struct TYPE_7__ {int IRQInfo1; int Attributes; } ;
struct TYPE_6__ {void* Attributes2; void* Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; TYPE_4__* priv; } ;
struct TYPE_9__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ parport_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_7)
{
    parport_info_t *VAR_8;

    FUNC_0(0, "parport_attach()\n");


    VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
    if (!VAR_8) return -VAR_1;
    VAR_7->priv = VAR_8;
    VAR_8->p_dev = VAR_7;

    VAR_7->io.Attributes1 = VAR_4;
    VAR_7->io.Attributes2 = VAR_4;
    VAR_7->irq.Attributes = VAR_6;
    VAR_7->irq.IRQInfo1 = VAR_5;
    VAR_7->conf.Attributes = VAR_0;
    VAR_7->conf.IntType = VAR_3;

    return FUNC_2(VAR_7);
}
