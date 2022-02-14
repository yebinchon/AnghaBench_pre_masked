
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv04_vmmgr_priv {int base; TYPE_2__* vm; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int addr; } ;
struct TYPE_4__ {TYPE_1__* pgt; } ;
struct TYPE_3__ {struct nouveau_gpuobj** obj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv04_vmmgr_priv*,int,int,int) ;
 int FUNC_2 (struct nv04_vmmgr_priv*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv04_vmmgr_priv *VAR_1 = (void *)VAR_0;
 struct nouveau_gpuobj *VAR_2 = VAR_1->vm->pgt[0].obj[0];
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->base);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1, 0x100800, VAR_2->addr | 0x00000002);
 FUNC_1(VAR_1, 0x10008c, 0x00000100, 0x00000100);
 FUNC_2(VAR_1, 0x100820, 0x00000000);
 return 0;
}
