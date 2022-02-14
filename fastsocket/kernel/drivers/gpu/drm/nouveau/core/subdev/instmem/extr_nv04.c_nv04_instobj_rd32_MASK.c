
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nv04_instobj_priv {TYPE_1__* mem; } ;
struct nouveau_object {int engine; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nv04_instobj_priv *VAR_2 = (void *)VAR_0;
 return FUNC_0(VAR_0->engine, VAR_2->mem->offset + VAR_1);
}
