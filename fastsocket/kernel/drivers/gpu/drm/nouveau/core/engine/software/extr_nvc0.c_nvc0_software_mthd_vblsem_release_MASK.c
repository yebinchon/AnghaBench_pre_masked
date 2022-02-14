
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {TYPE_1__ vblank; } ;
struct nvc0_software_chan {TYPE_2__ base; } ;
struct nouveau_object {int parent; } ;
struct nouveau_disp {int vblank; } ;
struct TYPE_6__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_disp* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int ,int,int *) ;
 TYPE_3__* FUNC_2 (struct nouveau_object*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_2, u32 VAR_3,
      void *VAR_4, u32 VAR_5)
{
 struct nvc0_software_chan *VAR_6 = (void *)FUNC_3(VAR_2->parent);
 struct nouveau_disp *VAR_7 = FUNC_0(VAR_2);
 u32 VAR_8 = *(u32 *)VAR_4;

 if ((FUNC_2(VAR_2)->card_type < VAR_1 && VAR_8 > 1) || VAR_8 > 3)
  return -VAR_0;

 FUNC_1(VAR_7->vblank, VAR_8, &VAR_6->base.vblank.event);
 return 0;
}
