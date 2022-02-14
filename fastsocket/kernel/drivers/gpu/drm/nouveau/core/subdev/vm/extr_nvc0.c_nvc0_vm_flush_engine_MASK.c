
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvc0_vmmgr_priv {int lock; } ;
struct nouveau_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_subdev*) ;
 int FUNC_1 (struct nouveau_subdev*,char*,int ,int) ;
 int FUNC_2 (struct nouveau_subdev*,int) ;
 int FUNC_3 (struct nouveau_subdev*,int,int,int) ;
 int FUNC_4 (struct nouveau_subdev*,int,int,int) ;
 int FUNC_5 (struct nouveau_subdev*,int,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(struct nouveau_subdev *VAR_0, u64 VAR_1, int VAR_2)
{
 struct nvc0_vmmgr_priv *VAR_3 = (void *)FUNC_0(VAR_0);
 unsigned long VAR_4;




 FUNC_6(&VAR_3->lock, VAR_4);
 if (!FUNC_4(VAR_0, 0x100c80, 0x00ff0000, 0x00000000)) {
  FUNC_1(VAR_0, "vm timeout 0: 0x%08x %d\n",
    FUNC_2(VAR_0, 0x100c80), VAR_2);
 }

 FUNC_5(VAR_0, 0x100cb8, VAR_1 >> 8);
 FUNC_5(VAR_0, 0x100cbc, 0x80000000 | VAR_2);


 if (!FUNC_3(VAR_0, 0x100c80, 0x00008000, 0x00008000)) {
  FUNC_1(VAR_0, "vm timeout 1: 0x%08x %d\n",
    FUNC_2(VAR_0, 0x100c80), VAR_2);
 }
 FUNC_7(&VAR_3->lock, VAR_4);
}
