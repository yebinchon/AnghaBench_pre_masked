
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ vblank; } ;
struct nv50_software_chan {TYPE_2__ base; } ;
struct nouveau_object {int parent; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_object *VAR_0, u32 VAR_1,
    void *VAR_2, u32 VAR_3)
{
 struct nv50_software_chan *VAR_4 = (void *)FUNC_0(VAR_0->parent);
 VAR_4->base.vblank.value = *(u32 *)VAR_2;
 return 0;
}
