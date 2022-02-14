
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_ofuncs {int (* rd32 ) (int ,int ) ;} ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int parent; TYPE_1__* node; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 struct nouveau_gpuobj* FUNC_0 (struct nouveau_object*) ;
 struct nouveau_ofuncs* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

u32
FUNC_3(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nouveau_gpuobj *VAR_2 = FUNC_0(VAR_0);
 struct nouveau_ofuncs *VAR_3 = FUNC_1(VAR_2->parent);
 if (VAR_2->node)
  VAR_1 += VAR_2->node->offset;
 return VAR_3->rd32(VAR_2->parent, VAR_1);
}
