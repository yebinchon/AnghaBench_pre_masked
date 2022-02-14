
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int TupleDataMax; int DesiredTuple; int * TupleData; scalar_t__ TupleOffset; scalar_t__ Attributes; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ data; } ;
struct TYPE_12__ {TYPE_1__ funce; } ;
struct smc_cfg_mem {int * buf; TYPE_4__ parse; TYPE_2__ tuple; } ;
struct pcmcia_device {int ** prod_id; struct net_device* priv; } ;
struct net_device {int * dev_addr; } ;
struct TYPE_11__ {int nb; int * id; } ;
typedef TYPE_3__ cistpl_lan_node_id_t ;
typedef TYPE_4__ cisparse_t ;
typedef int cisdata_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct pcmcia_device*,TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (struct smc_cfg_mem*) ;
 struct smc_cfg_mem* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_4)
{
    struct net_device *VAR_5 = VAR_4->priv;
    struct smc_cfg_mem *VAR_6;
    tuple_t *VAR_7;
    cisparse_t *VAR_8;
    cistpl_lan_node_id_t *VAR_9;
    u_char *VAR_10, *VAR_11;
    int VAR_12, VAR_13;

    VAR_6 = FUNC_3(sizeof(struct smc_cfg_mem), VAR_3);
    if (!VAR_6)
     return -VAR_2;

    VAR_7 = &VAR_6->tuple;
    VAR_8 = &VAR_6->parse;
    VAR_10 = VAR_6->buf;

    VAR_7->Attributes = VAR_7->TupleOffset = 0;
    VAR_7->TupleData = (cisdata_t *)VAR_10;
    VAR_7->TupleDataMax = 255;


    VAR_7->DesiredTuple = VAR_0;
    VAR_12 = FUNC_1(VAR_4, VAR_7, VAR_8);
    while (VAR_12 == 0) {
 if (VAR_8->funce.type == VAR_1)
     break;
 VAR_12 = FUNC_4(VAR_4, VAR_7, VAR_8);
    }
    if (VAR_12 == 0) {
 VAR_9 = (cistpl_lan_node_id_t *)VAR_8->funce.data;
 if (VAR_9->nb == 6) {
     for (VAR_12 = 0; VAR_12 < 6; VAR_12++)
  VAR_5->dev_addr[VAR_12] = VAR_9->id[VAR_12];
     VAR_13 = 0;
     goto free_cfg_mem;
 }
    }

    if (VAR_4->prod_id[2]) {
 VAR_11 = VAR_4->prod_id[2];
 if (FUNC_0(VAR_5, VAR_11) == 0) {
  VAR_13 = 0;
  goto free_cfg_mem;
 }
    }

    VAR_13 = -1;
free_cfg_mem:
    FUNC_2(VAR_6);
    return VAR_13;
}
