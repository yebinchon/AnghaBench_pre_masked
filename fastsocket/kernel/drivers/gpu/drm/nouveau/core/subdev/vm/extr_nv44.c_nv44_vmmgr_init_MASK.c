
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv04_vmmgr_priv {int null; int base; TYPE_2__* vm; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int addr; } ;
struct TYPE_4__ {TYPE_1__* pgt; } ;
struct TYPE_3__ {struct nouveau_gpuobj** obj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv04_vmmgr_priv*,int,int,int) ;
 int FUNC_2 (struct nv04_vmmgr_priv*,int) ;
 int FUNC_3 (struct nv04_vmmgr_priv*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_1)
{
 struct nv04_vmmgr_priv *VAR_2 = (void *)VAR_1;
 struct nouveau_gpuobj *VAR_3 = VAR_2->vm->pgt[0].obj[0];
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2->base);
 if (VAR_5)
  return VAR_5;





 VAR_4 = FUNC_2(VAR_2, 0x10020c);
 VAR_4 -= ((VAR_3->addr >> 19) + 1) << 19;

 FUNC_3(VAR_2, 0x100850, 0x80000000);
 FUNC_3(VAR_2, 0x100818, VAR_2->null);
 FUNC_3(VAR_2, 0x100804, VAR_0);
 FUNC_3(VAR_2, 0x100850, 0x00008000);
 FUNC_1(VAR_2, 0x10008c, 0x00000200, 0x00000200);
 FUNC_3(VAR_2, 0x100820, 0x00000000);
 FUNC_3(VAR_2, 0x10082c, 0x00000001);
 FUNC_3(VAR_2, 0x100800, VAR_4 | 0x00000010);
 return 0;
}
