
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nouveau_object {int dummy; } ;
struct nouveau_instmem {int dummy; } ;


 struct nouveau_instmem* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nouveau_instmem*,int) ;

__attribute__((used)) static u16
FUNC_2(struct nouveau_object *VAR_0, u32 *VAR_1, u32 VAR_2)
{
 struct nouveau_instmem *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = *(u32 *)VAR_1 << 4;
 return FUNC_1(VAR_3, VAR_4);
}
