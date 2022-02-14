
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv20_graph_priv {int dummy; } ;
struct nouveau_fifo {int (* start ) (struct nouveau_fifo*,unsigned long*) ;int (* pause ) (struct nouveau_fifo*,unsigned long*) ;} ;
struct nouveau_fb_tile {int limit; int pitch; int addr; int zcomp; } ;
struct nouveau_engine {int dummy; } ;
struct TYPE_4__ {struct nouveau_fb_tile* region; } ;
struct TYPE_6__ {TYPE_1__ tile; } ;
struct TYPE_5__ {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (struct nouveau_engine*) ;
 struct nouveau_fifo* FUNC_5 (struct nouveau_engine*) ;
 int FUNC_6 (struct nv20_graph_priv*) ;
 TYPE_2__* FUNC_7 (struct nouveau_engine*) ;
 int FUNC_8 (struct nv20_graph_priv*,int ,int) ;
 int FUNC_9 (struct nouveau_fifo*,unsigned long*) ;
 int FUNC_10 (struct nouveau_fifo*,unsigned long*) ;

void
FUNC_11(struct nouveau_engine *VAR_2, int VAR_3)
{
 struct nouveau_fb_tile *VAR_4 = &FUNC_4(VAR_2)->tile.region[VAR_3];
 struct nouveau_fifo *VAR_5 = FUNC_5(VAR_2);
 struct nv20_graph_priv *VAR_6 = (void *)VAR_2;
 unsigned long VAR_7;

 VAR_5->pause(VAR_5, &VAR_7);
 FUNC_6(VAR_6);

 FUNC_8(VAR_6, FUNC_1(VAR_3), VAR_4->limit);
 FUNC_8(VAR_6, FUNC_2(VAR_3), VAR_4->pitch);
 FUNC_8(VAR_6, FUNC_0(VAR_3), VAR_4->addr);

 FUNC_8(VAR_6, VAR_1, 0x00EA0030 + 4 * VAR_3);
 FUNC_8(VAR_6, VAR_0, VAR_4->limit);
 FUNC_8(VAR_6, VAR_1, 0x00EA0050 + 4 * VAR_3);
 FUNC_8(VAR_6, VAR_0, VAR_4->pitch);
 FUNC_8(VAR_6, VAR_1, 0x00EA0010 + 4 * VAR_3);
 FUNC_8(VAR_6, VAR_0, VAR_4->addr);

 if (FUNC_7(VAR_2)->chipset != 0x34) {
  FUNC_8(VAR_6, FUNC_3(VAR_3), VAR_4->zcomp);
  FUNC_8(VAR_6, VAR_1, 0x00ea0090 + 4 * VAR_3);
  FUNC_8(VAR_6, VAR_0, VAR_4->zcomp);
 }

 VAR_5->start(VAR_5, &VAR_7);
}
