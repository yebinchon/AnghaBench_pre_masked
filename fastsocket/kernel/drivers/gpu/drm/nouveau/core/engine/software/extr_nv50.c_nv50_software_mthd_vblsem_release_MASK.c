
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int event; } ;
struct TYPE_4__ {TYPE_1__ vblank; } ;
struct nv50_software_chan {TYPE_2__ base; } ;
struct nouveau_object {int parent; } ;
struct nouveau_disp {int vblank; } ;


 int VAR_0 ;
 struct nouveau_disp* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int ,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1, u32 VAR_2,
      void *VAR_3, u32 VAR_4)
{
 struct nv50_software_chan *VAR_5 = (void *)FUNC_2(VAR_1->parent);
 struct nouveau_disp *VAR_6 = FUNC_0(VAR_1);
 u32 VAR_7 = *(u32 *)VAR_3;
 if (VAR_7 > 1)
  return -VAR_0;

 FUNC_1(VAR_6->vblank, VAR_7, &VAR_5->base.vblank.event);
 return 0;
}
