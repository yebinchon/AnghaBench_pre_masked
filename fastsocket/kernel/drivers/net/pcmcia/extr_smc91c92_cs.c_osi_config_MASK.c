
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int NumPorts1; int NumPorts2; int IOAddrLines; unsigned int BasePort2; scalar_t__ BasePort1; int Attributes2; } ;
struct TYPE_5__ {int ConfigIndex; int Status; int Attributes; } ;
struct TYPE_4__ {int Attributes; } ;
struct pcmcia_device {TYPE_3__ io; TYPE_2__ conf; TYPE_1__ irq; struct net_device* priv; } ;
struct net_device {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_6)
{
    struct net_device *VAR_7 = VAR_6->priv;
    static const unsigned int VAR_8[4] = { 0x3f8, 0x2f8, 0x3e8, 0x2e8 };
    int VAR_9, VAR_10;

    VAR_6->conf.Attributes |= VAR_1;
    VAR_6->conf.Status = VAR_0;
    VAR_6->irq.Attributes =
 VAR_5|VAR_3|VAR_4;
    VAR_6->io.NumPorts1 = 64;
    VAR_6->io.Attributes2 = VAR_2;
    VAR_6->io.NumPorts2 = 8;
    VAR_6->io.IOAddrLines = 16;


    VAR_6->conf.ConfigIndex = 0x23;

    for (VAR_9 = VAR_10 = 0; VAR_10 < 4; VAR_10++) {
 VAR_6->io.BasePort2 = VAR_8[VAR_10];
 VAR_9 = FUNC_0(VAR_6, &VAR_6->io);
 if (VAR_9 == 0)
  break;
    }
    if (VAR_9 != 0) {

 VAR_6->conf.ConfigIndex = 0x03;
 VAR_6->io.NumPorts2 = 0;
 VAR_9 = FUNC_0(VAR_6, &VAR_6->io);
    }
    VAR_7->base_addr = VAR_6->io.BasePort1 + 0x10;
    return VAR_9;
}
