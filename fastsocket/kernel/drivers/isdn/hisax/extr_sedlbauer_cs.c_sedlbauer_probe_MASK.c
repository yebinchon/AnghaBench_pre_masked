
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int IntType; scalar_t__ Attributes; } ;
struct TYPE_7__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct TYPE_6__ {int Attributes; int * Handler; int IRQInfo1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ io; TYPE_1__ irq; TYPE_4__* priv; } ;
struct TYPE_9__ {int cardnr; struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ local_info_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_7)
{
    local_info_t *VAR_8;

    FUNC_0(0, "sedlbauer_attach()\n");


    VAR_8 = FUNC_1(sizeof(local_info_t), VAR_1);
    if (!VAR_8) return -VAR_0;
    VAR_8->cardnr = -1;

    VAR_8->p_dev = VAR_7;
    VAR_7->priv = VAR_8;


    VAR_7->irq.Attributes = VAR_6|VAR_4;
    VAR_7->irq.IRQInfo1 = VAR_5;
    VAR_7->irq.Handler = ((void*)0);
    VAR_7->io.NumPorts1 = 8;
    VAR_7->io.Attributes1 = VAR_3;
    VAR_7->io.IOAddrLines = 3;

    VAR_7->conf.Attributes = 0;
    VAR_7->conf.IntType = VAR_2;

    return FUNC_2(VAR_7);
}
