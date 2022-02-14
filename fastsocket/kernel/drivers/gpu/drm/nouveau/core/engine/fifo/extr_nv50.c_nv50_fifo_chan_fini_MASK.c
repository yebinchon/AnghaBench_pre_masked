
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_fifo_priv {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct nv50_fifo_chan {TYPE_1__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct nv50_fifo_priv*) ;
 int FUNC_2 (struct nv50_fifo_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_fifo_priv*,int,int) ;

int
FUNC_4(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv50_fifo_priv *VAR_2 = (void *)VAR_0->engine;
 struct nv50_fifo_chan *VAR_3 = (void *)VAR_0;
 u32 VAR_4 = VAR_3->base.chid;


 FUNC_2(VAR_2, 0x002600 + (VAR_4 * 4), 0x80000000, 0x00000000);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2, 0x002600 + (VAR_4 * 4), 0x00000000);

 return FUNC_0(&VAR_3->base, VAR_1);
}
