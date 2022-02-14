
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
struct TYPE_7__ {int TupleDataMax; int DesiredTuple; scalar_t__ TupleOffset; int * TupleData; int Attributes; } ;
typedef TYPE_2__ tuple_t ;
struct smc_cfg_mem {int* buf; TYPE_2__ tuple; } ;
struct TYPE_6__ {scalar_t__ BasePort1; } ;
struct pcmcia_device {TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int* dev_addr; } ;
typedef int cisdata_t ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct smc_cfg_mem*) ;
 struct smc_cfg_mem* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_2__*) ;
 int FUNC_6 (struct pcmcia_device*,TYPE_2__*) ;
 int FUNC_7 (struct pcmcia_device*,TYPE_2__*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct pcmcia_device *VAR_8, u_short VAR_9, u_short VAR_10)
{
    struct net_device *VAR_11 = VAR_8->priv;
    struct smc_cfg_mem *VAR_12;
    tuple_t *VAR_13;
    u_char *VAR_14;
    int VAR_15, VAR_16;

    VAR_12 = FUNC_3(sizeof(struct smc_cfg_mem), VAR_0);
    if (!VAR_12)
        return -1;

    VAR_13 = &VAR_12->tuple;
    VAR_14 = VAR_12->buf;

    VAR_13->Attributes = VAR_7;
    VAR_13->TupleData = (cisdata_t *)VAR_14;
    VAR_13->TupleDataMax = 255;
    VAR_13->TupleOffset = 0;


    VAR_13->DesiredTuple = 0x90;
    VAR_15 = FUNC_5(VAR_8, VAR_13);
    while (VAR_15 == 0) {
 VAR_15 = FUNC_7(VAR_8, VAR_13);
 if ((VAR_15 != 0) || (VAR_14[0] == 0x04))
     break;
 VAR_15 = FUNC_6(VAR_8, VAR_13);
    }
    if (VAR_15 != 0) {
 VAR_16 = -1;
 goto free_cfg_mem;
    }
    for (VAR_15 = 0; VAR_15 < 6; VAR_15++)
 VAR_11->dev_addr[VAR_15] = VAR_14[VAR_15+2];

    if (((VAR_9 == VAR_1) &&
  (VAR_10 == VAR_5)) ||
 ((VAR_9 == VAR_2) &&
  (VAR_10 == VAR_6))) {
 VAR_16 = FUNC_4(VAR_8);
 if (VAR_16)
  goto free_cfg_mem;
    } else if (VAR_9 == VAR_1) {

 FUNC_8(0x300, VAR_8->io.BasePort1 + VAR_3);

 FUNC_8(0x300, VAR_8->io.BasePort1 + VAR_4);
 FUNC_0(2, "AUI/PWR: %4.4x RESET/ISR: %4.4x\n",
       FUNC_1(VAR_8->io.BasePort1 + VAR_3),
       FUNC_1(VAR_8->io.BasePort1 + VAR_4));
    }
    VAR_16 = 0;
free_cfg_mem:
   FUNC_2(VAR_12);
   return VAR_16;
}
