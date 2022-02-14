
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_11__ {int TupleDataMax; int DesiredTuple; int * TupleData; scalar_t__ TupleOffset; scalar_t__ Attributes; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_10__ {int ns; char* str; int* ofs; } ;
struct TYPE_12__ {TYPE_1__ version_1; } ;
struct smc_cfg_mem {char* buf; TYPE_3__ parse; TYPE_2__ tuple; } ;
struct pcmcia_device {struct net_device* priv; } ;
struct net_device {int dummy; } ;
typedef TYPE_3__ cisparse_t ;
typedef int cisdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,char*) ;
 scalar_t__ FUNC_1 (struct pcmcia_device*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (struct smc_cfg_mem*) ;
 struct smc_cfg_mem* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct pcmcia_device*,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (struct pcmcia_device*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct pcmcia_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_2)
{
    struct net_device *VAR_3 = VAR_2->priv;
    struct smc_cfg_mem *VAR_4;
    tuple_t *VAR_5;
    cisparse_t *VAR_6;
    u_char *VAR_7, *VAR_8;
    int VAR_9;

    VAR_4 = FUNC_3(sizeof(struct smc_cfg_mem), VAR_1);
    if (!VAR_4)
 return -1;

    VAR_5 = &VAR_4->tuple;
    VAR_6 = &VAR_4->parse;
    VAR_7 = VAR_4->buf;

    VAR_5->Attributes = VAR_5->TupleOffset = 0;
    VAR_5->TupleData = (cisdata_t *)VAR_7;
    VAR_5->TupleDataMax = 255;



    VAR_5->DesiredTuple = VAR_0;
    if (FUNC_1(VAR_2, VAR_5, VAR_6) != 0) {
 VAR_9 = -1;
 goto free_cfg_mem;
    }

    if (FUNC_4(VAR_2, VAR_5, VAR_6) != 0)
 FUNC_1(VAR_2, VAR_5, VAR_6);
    if (VAR_6->version_1.ns > 3) {
 VAR_8 = VAR_6->version_1.str + VAR_6->version_1.ofs[3];
 if (FUNC_0(VAR_3, VAR_8) == 0) {
  VAR_9 = 0;
  goto free_cfg_mem;
 }
    }


    VAR_5->DesiredTuple = 0x81;
    if (FUNC_5(VAR_2, VAR_5) != 0) {
 VAR_9 = -1;
 goto free_cfg_mem;
    }
    if (FUNC_6(VAR_2, VAR_5) != 0) {
 VAR_9 = -1;
 goto free_cfg_mem;
    }
    VAR_7[12] = '\0';
    if (FUNC_0(VAR_3, VAR_7) == 0) {
 VAR_9 = 0;
 goto free_cfg_mem;
   }
    VAR_9 = -1;
free_cfg_mem:
   FUNC_2(VAR_4);
   return VAR_9;
}
