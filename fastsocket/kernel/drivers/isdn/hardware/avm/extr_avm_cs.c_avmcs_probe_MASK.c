
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ConfigIndex; int Present; int IntType; int Attributes; } ;
struct TYPE_5__ {int Attributes; int IRQInfo1; } ;
struct TYPE_4__ {int NumPorts1; scalar_t__ NumPorts2; int Attributes1; } ;
struct pcmcia_device {int * priv; TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; } ;
typedef int local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int * FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_10)
{
    local_info_t *VAR_11;


    VAR_10->io.NumPorts1 = 16;
    VAR_10->io.Attributes1 = VAR_4;
    VAR_10->io.NumPorts2 = 0;


    VAR_10->irq.Attributes = VAR_8;
    VAR_10->irq.Attributes = VAR_7|VAR_5;

    VAR_10->irq.IRQInfo1 = VAR_6;


    VAR_10->conf.Attributes = VAR_0;
    VAR_10->conf.IntType = VAR_3;
    VAR_10->conf.ConfigIndex = 1;
    VAR_10->conf.Present = VAR_9;


    VAR_11 = FUNC_1(sizeof(local_info_t), VAR_2);
    if (!VAR_11)
        goto err;
    VAR_10->priv = VAR_11;

    return FUNC_0(VAR_10);

 err:
    return -VAR_1;
}
