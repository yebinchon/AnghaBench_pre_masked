
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nv04_instmem_priv {int created; } ;
struct nouveau_object {int refcount; } ;
struct nouveau_instmem {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int *,void*,scalar_t__,struct nouveau_object**) ;
 int VAR_0 ;
 struct nouveau_object* FUNC_2 (struct nouveau_instmem*) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct nouveau_instmem *VAR_1, struct nouveau_object *VAR_2,
     u32 VAR_3, u32 VAR_4, struct nouveau_object **VAR_5)
{
 struct nouveau_object *VAR_6 = FUNC_2(VAR_1);
 struct nv04_instmem_priv *VAR_7 = (void *)(VAR_1);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_6, &VAR_0,
      (void *)(unsigned long)VAR_4, VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;






 if (FUNC_3(!VAR_7->created))
  FUNC_0(&VAR_6->refcount);

 return 0;
}
