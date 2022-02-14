
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nv50_bar_priv {TYPE_5__* bar3; TYPE_3__* bar1; TYPE_1__* mem; int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_10__ {TYPE_4__* node; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_8__ {TYPE_2__* node; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_6__ {int addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nv50_bar_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_bar_priv*) ;
 int FUNC_4 (struct nv50_bar_priv*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_0)
{
 struct nv50_bar_priv *VAR_1 = (void *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1, 0x000200, 0x00000100, 0x00000000);
 FUNC_2(VAR_1, 0x000200, 0x00000100, 0x00000100);
 FUNC_1(FUNC_3(VAR_1), 6);

 FUNC_4(VAR_1, 0x001704, 0x00000000 | VAR_1->mem->addr >> 12);
 FUNC_4(VAR_1, 0x001704, 0x40000000 | VAR_1->mem->addr >> 12);
 FUNC_4(VAR_1, 0x001708, 0x80000000 | VAR_1->bar1->node->offset >> 4);
 FUNC_4(VAR_1, 0x00170c, 0x80000000 | VAR_1->bar3->node->offset >> 4);
 return 0;
}
