
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nouveau_object {int dummy; } ;
struct nouveau_instmem {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,int *,void*,scalar_t__,struct nouveau_object**) ;
 int VAR_0 ;
 struct nouveau_object* FUNC_1 (struct nouveau_instmem*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_instmem *VAR_1, struct nouveau_object *VAR_2,
     u32 VAR_3, u32 VAR_4, struct nouveau_object **VAR_5)
{
 struct nouveau_object *VAR_6 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2, VAR_6, &VAR_0,
       (void *)(unsigned long)VAR_4, VAR_3, VAR_5);
}
