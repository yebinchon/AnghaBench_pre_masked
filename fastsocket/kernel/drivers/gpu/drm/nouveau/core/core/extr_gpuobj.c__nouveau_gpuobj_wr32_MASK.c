
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_ofuncs {int (* wr32 ) (int ,int ,int ) ;} ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int parent; TYPE_1__* node; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 struct nouveau_gpuobj* FUNC_0 (struct nouveau_object*) ;
 struct nouveau_ofuncs* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(struct nouveau_object *VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct nouveau_gpuobj *VAR_3 = FUNC_0(VAR_0);
 struct nouveau_ofuncs *VAR_4 = FUNC_1(VAR_3->parent);
 if (VAR_3->node)
  VAR_1 += VAR_3->node->offset;
 VAR_4->wr32(VAR_3->parent, VAR_1, VAR_2);
}
