
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ramfc_desc {scalar_t__ ctxp; scalar_t__ bits; } ;
struct nv04_fifo_priv {int ramfc; struct ramfc_desc* ramfc_desc; } ;
struct nv04_fifo_chan {int base; scalar_t__ ramfc; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int) ;

void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv04_fifo_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv04_fifo_chan *VAR_2 = (void *)VAR_0;
 struct ramfc_desc *VAR_3 = VAR_1->ramfc_desc;

 do {
  FUNC_1(VAR_1->ramfc, VAR_2->ramfc + VAR_3->ctxp, 0x00000000);
 } while ((++VAR_3)->bits);

 FUNC_0(&VAR_2->base);
}
