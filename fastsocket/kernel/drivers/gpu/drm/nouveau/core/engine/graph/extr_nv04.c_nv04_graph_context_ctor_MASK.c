
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_graph_priv {int lock; struct nv04_graph_chan** chan; } ;
struct nv04_graph_chan {size_t chid; int base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int refcount; } ;
struct nouveau_fifo_chan {size_t chid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int* FUNC_1 (struct nv04_graph_chan*,int ) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nv04_graph_chan**) ;
 int FUNC_3 (int *) ;
 struct nouveau_object* FUNC_4 (struct nv04_graph_chan*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_1,
   struct nouveau_object *VAR_2,
   struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
   struct nouveau_object **VAR_6)
{
 struct nouveau_fifo_chan *VAR_7 = (void *)VAR_1;
 struct nv04_graph_priv *VAR_8 = (void *)VAR_2;
 struct nv04_graph_chan *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_1, VAR_2, VAR_3, 0, &VAR_9);
 *VAR_6 = FUNC_4(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_8->lock, VAR_10);
 if (VAR_8->chan[VAR_7->chid]) {
  *VAR_6 = FUNC_4(VAR_8->chan[VAR_7->chid]);
  FUNC_0(&(*VAR_6)->refcount);
  FUNC_6(&VAR_8->lock, VAR_10);
  FUNC_3(&VAR_9->base);
  return 1;
 }

 *FUNC_1(VAR_9, VAR_0) = 0xfad4ff31;

 VAR_8->chan[VAR_7->chid] = VAR_9;
 VAR_9->chid = VAR_7->chid;
 FUNC_6(&VAR_8->lock, VAR_10);
 return 0;
}
