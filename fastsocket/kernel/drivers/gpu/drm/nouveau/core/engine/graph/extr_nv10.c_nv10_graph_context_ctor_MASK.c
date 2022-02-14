
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv10_graph_priv {int lock; struct nv10_graph_chan** chan; } ;
struct nv10_graph_chan {int chid; int base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int refcount; } ;
struct nouveau_fifo_chan {size_t chid; } ;
struct TYPE_2__ {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nv10_graph_chan**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nv10_graph_chan*) ;
 TYPE_1__* FUNC_6 (struct nv10_graph_priv*) ;
 struct nouveau_object* FUNC_7 (struct nv10_graph_chan*) ;
 int FUNC_8 (struct nv10_graph_priv*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_object *VAR_3,
   struct nouveau_object *VAR_4,
   struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
   struct nouveau_object **VAR_8)
{
 struct nouveau_fifo_chan *VAR_9 = (void *)VAR_3;
 struct nv10_graph_priv *VAR_10 = (void *)VAR_4;
 struct nv10_graph_chan *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_5, 0, &VAR_11);
 *VAR_8 = FUNC_7(VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_9(&VAR_10->lock, VAR_12);
 if (VAR_10->chan[VAR_9->chid]) {
  *VAR_8 = FUNC_7(VAR_10->chan[VAR_9->chid]);
  FUNC_2(&(*VAR_8)->refcount);
  FUNC_10(&VAR_10->lock, VAR_12);
  FUNC_4(&VAR_11->base);
  return 1;
 }

 FUNC_1(0x00400e88, 0x08000000);
 FUNC_1(0x00400e9c, 0x4b7fffff);
 FUNC_1(VAR_0, 0x0001ffff);
 FUNC_1(0x00400e10, 0x00001000);
 FUNC_1(0x00400e14, 0x00001000);
 FUNC_1(0x00400e30, 0x00080008);
 FUNC_1(0x00400e34, 0x00080008);
 if (FUNC_6(VAR_10)->chipset >= 0x17) {

  FUNC_0(VAR_2,
     FUNC_8(VAR_10, VAR_2));
  FUNC_0(0x004006b0, FUNC_8(VAR_10, 0x004006b0));
  FUNC_0(0x00400eac, 0x0fff0000);
  FUNC_0(0x00400eb0, 0x0fff0000);
  FUNC_0(0x00400ec0, 0x00000080);
  FUNC_0(0x00400ed0, 0x00000080);
 }
 FUNC_1(VAR_1, VAR_11->chid << 24);

 FUNC_5(VAR_11);

 VAR_10->chan[VAR_9->chid] = VAR_11;
 VAR_11->chid = VAR_9->chid;
 FUNC_10(&VAR_10->lock, VAR_12);
 return 0;
}
