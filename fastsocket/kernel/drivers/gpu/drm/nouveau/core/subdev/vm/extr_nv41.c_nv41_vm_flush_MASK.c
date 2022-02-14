
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_vmmgr_priv {int dummy; } ;
struct nouveau_vm {scalar_t__ vmm; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nv04_vmmgr_priv*,int) ;
 TYPE_1__* FUNC_3 (struct nv04_vmmgr_priv*) ;
 int FUNC_4 (struct nv04_vmmgr_priv*,int,int,int) ;
 int FUNC_5 (struct nv04_vmmgr_priv*,char*,int ) ;
 int FUNC_6 (struct nv04_vmmgr_priv*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct nouveau_vm *VAR_0)
{
 struct nv04_vmmgr_priv *VAR_1 = (void *)VAR_0->vmm;

 FUNC_0(&FUNC_3(VAR_1)->mutex);
 FUNC_6(VAR_1, 0x100810, 0x00000022);
 if (!FUNC_4(VAR_1, 0x100810, 0x00000020, 0x00000020)) {
  FUNC_5(VAR_1, "flush timeout, 0x%08x\n",
   FUNC_2(VAR_1, 0x100810));
 }
 FUNC_6(VAR_1, 0x100810, 0x00000000);
 FUNC_1(&FUNC_3(VAR_1)->mutex);
}
