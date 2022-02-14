
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min; int max; } ;
struct nv50_fifo_priv {size_t cur_playlist; TYPE_1__ base; struct nouveau_gpuobj** playlist; } ;
struct nouveau_gpuobj {int addr; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;


 struct nouveau_bar* FUNC_0 (struct nv50_fifo_priv*) ;
 int FUNC_1 (struct nv50_fifo_priv*,int) ;
 int FUNC_2 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_3 (struct nv50_fifo_priv*,int,int) ;
 int FUNC_4 (struct nouveau_bar*) ;

void
FUNC_5(struct nv50_fifo_priv *VAR_0)
{
 struct nouveau_bar *VAR_1 = FUNC_0(VAR_0);
 struct nouveau_gpuobj *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_0->playlist[VAR_0->cur_playlist];
 VAR_0->cur_playlist = !VAR_0->cur_playlist;

 for (VAR_3 = VAR_0->base.min, VAR_4 = 0; VAR_3 < VAR_0->base.max; VAR_3++) {
  if (FUNC_1(VAR_0, 0x002600 + (VAR_3 * 4)) & 0x80000000)
   FUNC_2(VAR_2, VAR_4++ * 4, VAR_3);
 }

 VAR_1->flush(VAR_1);

 FUNC_3(VAR_0, 0x0032f4, VAR_2->addr >> 12);
 FUNC_3(VAR_0, 0x0032ec, VAR_4);
 FUNC_3(VAR_0, 0x002500, 0x00000101);
}
