
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_fifo_priv {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct nv50_fifo_chan {TYPE_1__ base; } ;
struct nv50_fifo_base {struct nouveau_gpuobj* ramfc; } ;
struct nouveau_object {scalar_t__ parent; scalar_t__ engine; } ;
struct nouveau_gpuobj {int addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nv50_fifo_priv*) ;
 int FUNC_2 (struct nv50_fifo_priv*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv50_fifo_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv50_fifo_base *VAR_2 = (void *)VAR_0->parent;
 struct nv50_fifo_chan *VAR_3 = (void *)VAR_0;
 struct nouveau_gpuobj *VAR_4 = VAR_2->ramfc;
 u32 VAR_5 = VAR_3->base.chid;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_3->base);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_1, 0x002600 + (VAR_5 * 4), 0x80000000 | VAR_4->addr >> 12);
 FUNC_1(VAR_1);
 return 0;
}
