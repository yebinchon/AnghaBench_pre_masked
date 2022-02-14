
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int func; } ;
struct TYPE_6__ {int channel; TYPE_1__ event; } ;
struct TYPE_7__ {TYPE_2__ vblank; } ;
struct nvc0_software_chan {TYPE_3__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int parent; } ;
struct TYPE_8__ {int addr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nvc0_software_chan**) ;
 TYPE_4__* FUNC_1 (int ) ;
 struct nouveau_object* FUNC_2 (struct nvc0_software_chan*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1,
      struct nouveau_object *VAR_2,
      struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nouveau_object **VAR_6)
{
 struct nvc0_software_chan *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7);
 *VAR_6 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->base.vblank.channel = FUNC_1(VAR_1->parent)->addr >> 12;
 VAR_7->base.vblank.event.func = VAR_0;
 return 0;
}
