
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ BasePort1; } ;
struct pcmcia_device {TYPE_2__* dev_node; TYPE_1__ io; int conf; TYPE_3__* priv; } ;
struct TYPE_7__ {int major; } ;
struct TYPE_8__ {int ndev; TYPE_2__ node; } ;
typedef TYPE_3__ ixj_info_t ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_4__ cistpl_cftable_entry_t ;
typedef int IXJ ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct pcmcia_device*,int *) ;
 int * FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct pcmcia_device*,int ,TYPE_4__*) ;
 scalar_t__ FUNC_5 (struct pcmcia_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device * VAR_3)
{
 IXJ *VAR_4;
 ixj_info_t *VAR_5;
 cistpl_cftable_entry_t VAR_6 = { 0 };

 VAR_5 = VAR_3->priv;
 FUNC_0(0, "ixj_config(0x%p)\n", VAR_3);

 if (FUNC_4(VAR_3, VAR_2, &VAR_6))
  goto cs_failed;

 if (FUNC_5(VAR_3, &VAR_3->conf))
  goto cs_failed;




 VAR_4 = FUNC_3(VAR_3->io.BasePort1, VAR_3->io.BasePort1 + 0x10);

 VAR_5->ndev = 1;
 VAR_5->node.major = VAR_1;
 VAR_3->dev_node = &VAR_5->node;
 FUNC_2(VAR_3, VAR_4);
 return 0;

      cs_failed:
 FUNC_1(VAR_3);
 return -VAR_0;
}
