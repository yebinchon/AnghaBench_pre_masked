
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nv50_pioc {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,int ,int ,void*,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_object *VAR_0, u32 VAR_1, u8 VAR_2,
   void *VAR_3, u32 VAR_4, struct nv50_pioc *VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5->base);
}
