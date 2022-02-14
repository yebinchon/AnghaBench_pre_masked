
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_protocol {int number; int dev; } ;
struct pnp_id {int dummy; } ;
struct TYPE_2__ {int coherent_dma_mask; int * dma_mask; int * parent; } ;
struct pnp_card {int number; TYPE_1__ dev; struct pnp_protocol* protocol; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int ,int) ;
 int FUNC_2 (struct pnp_card*) ;
 struct pnp_card* FUNC_3 (int,int ) ;
 struct pnp_id* FUNC_4 (struct pnp_card*,char*) ;

struct pnp_card *FUNC_5(struct pnp_protocol *VAR_1, int VAR_2, char *VAR_3)
{
 struct pnp_card *VAR_4;
 struct pnp_id *VAR_5;

 VAR_4 = FUNC_3(sizeof(struct pnp_card), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->protocol = VAR_1;
 VAR_4->number = VAR_2;

 VAR_4->dev.parent = &VAR_4->protocol->dev;
 FUNC_1(&VAR_4->dev, "%02x:%02x", VAR_4->protocol->number, VAR_4->number);

 VAR_4->dev.coherent_dma_mask = FUNC_0(24);
 VAR_4->dev.dma_mask = &VAR_4->dev.coherent_dma_mask;

 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
