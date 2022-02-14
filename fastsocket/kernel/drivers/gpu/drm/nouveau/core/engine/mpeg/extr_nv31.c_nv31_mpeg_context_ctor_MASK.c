
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv31_mpeg_priv {int refcount; } ;
struct nv31_mpeg_chan {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nv31_mpeg_chan**) ;
 struct nouveau_object* FUNC_2 (struct nv31_mpeg_chan*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1,
         struct nouveau_object *VAR_2,
         struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
         struct nouveau_object **VAR_6)
{
 struct nv31_mpeg_priv *VAR_7 = (void *)VAR_2;
 struct nv31_mpeg_chan *VAR_8;
 int VAR_9;

 if (!FUNC_0(&VAR_7->refcount, 1, 1))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, 0, &VAR_8);
 *VAR_6 = FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;

 return 0;
}
