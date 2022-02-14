
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_protocol {int number; int dev; } ;
struct pnp_id {int dummy; } ;
struct TYPE_2__ {int * release; int coherent_dma_mask; int * dma_mask; int * bus; int * parent; } ;
struct pnp_dev {int number; struct pnp_protocol* protocol; TYPE_1__ dev; int dma_mask; int options; int resources; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int) ;
 int FUNC_3 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_4 (int,int ) ;
 struct pnp_id* FUNC_5 (struct pnp_dev*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

struct pnp_dev *FUNC_6(struct pnp_protocol *VAR_3, int VAR_4, char *VAR_5)
{
 struct pnp_dev *VAR_6;
 struct pnp_id *VAR_7;

 VAR_6 = FUNC_4(sizeof(struct pnp_dev), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(&VAR_6->resources);
 FUNC_1(&VAR_6->options);
 VAR_6->protocol = VAR_3;
 VAR_6->number = VAR_4;
 VAR_6->dma_mask = FUNC_0(24);

 VAR_6->dev.parent = &VAR_6->protocol->dev;
 VAR_6->dev.bus = &VAR_1;
 VAR_6->dev.dma_mask = &VAR_6->dma_mask;
 VAR_6->dev.coherent_dma_mask = VAR_6->dma_mask;
 VAR_6->dev.release = &VAR_2;

 FUNC_2(&VAR_6->dev, "%02x:%02x", VAR_6->protocol->number, VAR_6->number);

 VAR_7 = FUNC_5(VAR_6, VAR_5);
 if (!VAR_7) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
