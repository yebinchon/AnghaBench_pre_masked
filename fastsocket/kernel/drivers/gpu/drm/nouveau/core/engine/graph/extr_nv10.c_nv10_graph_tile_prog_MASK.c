
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv10_graph_priv {int dummy; } ;
struct nouveau_fifo {int (* start ) (struct nouveau_fifo*,unsigned long*) ;int (* pause ) (struct nouveau_fifo*,unsigned long*) ;} ;
struct nouveau_fb_tile {int addr; int pitch; int limit; } ;
struct nouveau_engine {int dummy; } ;
struct TYPE_3__ {struct nouveau_fb_tile* region; } ;
struct TYPE_4__ {TYPE_1__ tile; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (struct nouveau_engine*) ;
 struct nouveau_fifo* FUNC_4 (struct nouveau_engine*) ;
 int FUNC_5 (struct nv10_graph_priv*) ;
 int FUNC_6 (struct nv10_graph_priv*,int ,int ) ;
 int FUNC_7 (struct nouveau_fifo*,unsigned long*) ;
 int FUNC_8 (struct nouveau_fifo*,unsigned long*) ;

__attribute__((used)) static void
FUNC_9(struct nouveau_engine *VAR_0, int VAR_1)
{
 struct nouveau_fb_tile *VAR_2 = &FUNC_3(VAR_0)->tile.region[VAR_1];
 struct nouveau_fifo *VAR_3 = FUNC_4(VAR_0);
 struct nv10_graph_priv *VAR_4 = (void *)VAR_0;
 unsigned long VAR_5;

 VAR_3->pause(VAR_3, &VAR_5);
 FUNC_5(VAR_4);

 FUNC_6(VAR_4, FUNC_1(VAR_1), VAR_2->limit);
 FUNC_6(VAR_4, FUNC_2(VAR_1), VAR_2->pitch);
 FUNC_6(VAR_4, FUNC_0(VAR_1), VAR_2->addr);

 VAR_3->start(VAR_3, &VAR_5);
}
