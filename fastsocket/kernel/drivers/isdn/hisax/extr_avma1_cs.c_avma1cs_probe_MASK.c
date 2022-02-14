
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ConfigIndex; int Present; int IntType; int Attributes; } ;
struct TYPE_5__ {int Attributes; int IRQInfo1; } ;
struct TYPE_4__ {int NumPorts1; int NumPorts2; int IOAddrLines; int Attributes2; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; int * priv; } ;
typedef int local_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct pcmcia_device*) ;
 int * FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_11)
{
    local_info_t *VAR_12;

    FUNC_0(0, "avma1cs_attach()\n");


    VAR_12 = FUNC_2(sizeof(local_info_t), VAR_2);
    if (!VAR_12)
 return -VAR_1;

    VAR_11->priv = VAR_12;


    VAR_11->io.NumPorts1 = 16;
    VAR_11->io.Attributes1 = VAR_5;
    VAR_11->io.NumPorts2 = 16;
    VAR_11->io.Attributes2 = VAR_4;
    VAR_11->io.IOAddrLines = 5;


    VAR_11->irq.Attributes = VAR_9;
    VAR_11->irq.Attributes = VAR_8|VAR_6;

    VAR_11->irq.IRQInfo1 = VAR_7;


    VAR_11->conf.Attributes = VAR_0;
    VAR_11->conf.IntType = VAR_3;
    VAR_11->conf.ConfigIndex = 1;
    VAR_11->conf.Present = VAR_10;

    return FUNC_1(VAR_11);
}
