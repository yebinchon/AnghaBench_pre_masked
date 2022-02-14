
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_vmmgr_priv {int lock; } ;
struct nouveau_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_subdev*) ;
 int FUNC_1 (struct nouveau_subdev*,char*,int) ;
 int FUNC_2 (struct nouveau_subdev*,int,int,int) ;
 int FUNC_3 (struct nouveau_subdev*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct nouveau_subdev *VAR_0, int VAR_1)
{
 struct nv50_vmmgr_priv *VAR_2 = (void *)FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_4(&VAR_2->lock, VAR_3);
 FUNC_3(VAR_0, 0x100c80, (VAR_1 << 16) | 1);
 if (!FUNC_2(VAR_0, 0x100c80, 0x00000001, 0x00000000))
  FUNC_1(VAR_0, "vm flush timeout: engine %d\n", VAR_1);
 FUNC_5(&VAR_2->lock, VAR_3);
}
