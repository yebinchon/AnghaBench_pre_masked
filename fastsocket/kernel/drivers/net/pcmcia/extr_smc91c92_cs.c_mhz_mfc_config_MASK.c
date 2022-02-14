
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int Attributes; scalar_t__ Size; scalar_t__ Base; scalar_t__ AccessSpeed; } ;
typedef TYPE_4__ win_req_t ;
struct smc_private {scalar_t__ manfid; scalar_t__ cardid; int base; } ;
struct smc_cfg_mem {int dummy; } ;
struct TYPE_10__ {scalar_t__ ConfigBase; int Status; int Attributes; } ;
struct TYPE_9__ {int IOAddrLines; int NumPorts2; int BasePort1; int Attributes2; } ;
struct TYPE_8__ {int Attributes; } ;
struct pcmcia_device {int win; TYPE_3__ conf; TYPE_2__ io; TYPE_1__ irq; struct net_device* priv; } ;
struct net_device {int base_addr; } ;
struct TYPE_12__ {scalar_t__ CardOffset; scalar_t__ Page; } ;
typedef TYPE_5__ memreq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct smc_cfg_mem*) ;
 struct smc_cfg_mem* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int VAR_15 ;
 struct smc_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct pcmcia_device*,int ,int *) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 (struct pcmcia_device**,TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_device *VAR_16)
{
    struct net_device *VAR_17 = VAR_16->priv;
    struct smc_private *VAR_18 = FUNC_4(VAR_17);
    struct smc_cfg_mem *VAR_19;
    win_req_t VAR_20;
    memreq_t VAR_21;
    int VAR_22;

    VAR_19 = FUNC_2(sizeof(struct smc_cfg_mem), VAR_4);
    if (!VAR_19)
     return -VAR_3;

    VAR_16->conf.Attributes |= VAR_1;
    VAR_16->conf.Status = VAR_0;
    VAR_16->irq.Attributes =
 VAR_8|VAR_6|VAR_7;
    VAR_16->io.IOAddrLines = 16;
    VAR_16->io.Attributes2 = VAR_5;
    VAR_16->io.NumPorts2 = 8;



    if (FUNC_5(VAR_16, VAR_15, ((void*)0)))
 goto free_cfg_mem;
    VAR_17->base_addr = VAR_16->io.BasePort1;


    VAR_20.Attributes = VAR_12|VAR_14|VAR_13;
    VAR_20.Base = VAR_20.Size = 0;
    VAR_20.AccessSpeed = 0;
    VAR_22 = FUNC_7(&VAR_16, &VAR_20, &VAR_16->win);
    if (VAR_22 != 0)
 goto free_cfg_mem;
    VAR_18->base = FUNC_0(VAR_20.Base, VAR_20.Size);
    VAR_21.CardOffset = VAR_21.Page = 0;
    if (VAR_18->manfid == VAR_10)
 VAR_21.CardOffset = VAR_16->conf.ConfigBase;
    VAR_22 = FUNC_6(VAR_16->win, &VAR_21);

    if ((VAR_22 == 0)
 && (VAR_18->manfid == VAR_9)
 && (VAR_18->cardid == VAR_11))
 FUNC_3(VAR_16);

free_cfg_mem:
    FUNC_1(VAR_19);
    return -VAR_2;
}
