
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv31_mpeg_priv {int refcount; } ;
struct nv31_mpeg_chan {int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv31_mpeg_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv31_mpeg_chan *VAR_2 = (void *)VAR_0;
 FUNC_0(&VAR_1->refcount);
 FUNC_1(&VAR_2->base);
}
