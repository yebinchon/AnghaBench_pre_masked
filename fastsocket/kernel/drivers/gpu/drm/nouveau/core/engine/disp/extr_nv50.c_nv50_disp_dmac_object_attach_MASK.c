
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_disp_chan {int chid; } ;
struct nv50_disp_base {int ramht; } ;
struct nouveau_object {scalar_t__ parent; } ;
struct TYPE_4__ {TYPE_1__* node; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (int ,int,int,int) ;
 TYPE_2__* FUNC_1 (struct nouveau_object*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_0,
        struct nouveau_object *VAR_1, u32 VAR_2)
{
 struct nv50_disp_base *VAR_3 = (void *)VAR_0->parent;
 struct nv50_disp_chan *VAR_4 = (void *)VAR_0;
 u32 VAR_5 = FUNC_1(VAR_1)->node->offset;
 u32 VAR_6 = VAR_4->chid;
 u32 VAR_7 = (VAR_6 << 28) | (VAR_5 << 10) | VAR_6;
 return FUNC_0(VAR_3->ramht, VAR_6, VAR_2, VAR_7);
}
