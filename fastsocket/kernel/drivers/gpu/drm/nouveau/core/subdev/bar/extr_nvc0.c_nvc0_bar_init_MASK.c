
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvc0_bar_priv {TYPE_2__* bar; int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvc0_bar_priv*,int,int,int) ;
 int FUNC_2 (struct nvc0_bar_priv*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nvc0_bar_priv *VAR_1 = (void *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1, 0x000200, 0x00000100, 0x00000000);
 FUNC_1(VAR_1, 0x000200, 0x00000100, 0x00000100);
 FUNC_1(VAR_1, 0x100c80, 0x00000001, 0x00000000);

 FUNC_2(VAR_1, 0x001704, 0x80000000 | VAR_1->bar[1].mem->addr >> 12);
 FUNC_2(VAR_1, 0x001714, 0xc0000000 | VAR_1->bar[0].mem->addr >> 12);
 return 0;
}
