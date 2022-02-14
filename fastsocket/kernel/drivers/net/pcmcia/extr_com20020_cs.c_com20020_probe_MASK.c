
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct net_device* Instance; int IRQInfo1; int Attributes; } ;
struct TYPE_10__ {int IntType; int Attributes; } ;
struct TYPE_9__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_5__* priv; TYPE_4__ irq; TYPE_3__ conf; TYPE_2__ io; } ;
struct net_device {int * dev_addr; } ;
struct com20020_dev_t {int dummy; } ;
struct TYPE_8__ {int owner; } ;
struct arcnet_local {int clockm; TYPE_1__ hw; int clockp; int backplane; int timeout; } ;
struct TYPE_12__ {struct net_device* dev; } ;
typedef TYPE_5__ com20020_dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (int,int ) ;
 struct arcnet_local* FUNC_5 (struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_13)
{
    com20020_dev_t *VAR_14;
    struct net_device *VAR_15;
    struct arcnet_local *VAR_16;

    FUNC_0(0, "com20020_attach()\n");


    VAR_14 = FUNC_4(sizeof(struct com20020_dev_t), VAR_2);
    if (!VAR_14)
 goto fail_alloc_info;

    VAR_15 = FUNC_1("");
    if (!VAR_15)
 goto fail_alloc_dev;

    VAR_16 = FUNC_5(VAR_15);
    VAR_16->timeout = VAR_12;
    VAR_16->backplane = VAR_8;
    VAR_16->clockp = VAR_10;
    VAR_16->clockm = VAR_9 & 3;
    VAR_16->hw.owner = VAR_7;


    VAR_15->dev_addr[0] = VAR_11;

    VAR_13->io.Attributes1 = VAR_4;
    VAR_13->io.NumPorts1 = 16;
    VAR_13->io.IOAddrLines = 16;
    VAR_13->irq.Attributes = VAR_6;
    VAR_13->irq.IRQInfo1 = VAR_5;
    VAR_13->conf.Attributes = VAR_0;
    VAR_13->conf.IntType = VAR_3;

    VAR_13->irq.Instance = VAR_14->dev = VAR_15;
    VAR_13->priv = VAR_14;

    return FUNC_2(VAR_13);

fail_alloc_dev:
    FUNC_3(VAR_14);
fail_alloc_info:
    return -VAR_1;
}
