
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_fifo_base {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int,int ,struct nv04_fifo_base**) ;
 struct nouveau_object* FUNC_1 (struct nv04_fifo_base*) ;

int
FUNC_2(struct nouveau_object *VAR_1,
         struct nouveau_object *VAR_2,
         struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
         struct nouveau_object **VAR_6)
{
 struct nv04_fifo_base *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0), 0x1000,
              0x1000, VAR_0, &VAR_7);
 *VAR_6 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 return 0;
}
