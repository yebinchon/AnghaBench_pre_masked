
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_fifo_priv {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct nvc0_fifo_chan {TYPE_1__ base; } ;
struct nouveau_object {scalar_t__ engine; int parent; } ;
struct nouveau_gpuobj {int addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct nouveau_gpuobj* FUNC_1 (int ) ;
 int FUNC_2 (struct nvc0_fifo_priv*,int,int) ;
 int FUNC_3 (struct nvc0_fifo_priv*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_0)
{
 struct nouveau_gpuobj *VAR_1 = FUNC_1(VAR_0->parent);
 struct nvc0_fifo_priv *VAR_2 = (void *)VAR_0->engine;
 struct nvc0_fifo_chan *VAR_3 = (void *)VAR_0;
 u32 VAR_4 = VAR_3->base.chid;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3->base);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2, 0x003000 + (VAR_4 * 8), 0xc0000000 | VAR_1->addr >> 12);
 FUNC_2(VAR_2, 0x003004 + (VAR_4 * 8), 0x001f0001);
 FUNC_3(VAR_2);
 return 0;
}
