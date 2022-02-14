
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_subdev {int (* intr ) (struct nouveau_subdev*) ;} ;
struct nouveau_mc_intr {int stat; int unit; } ;
struct nouveau_mc {struct nouveau_mc_intr* intr_map; } ;


 struct nouveau_mc* FUNC_0 (struct nouveau_subdev*) ;
 struct nouveau_subdev* FUNC_1 (struct nouveau_subdev*,int ) ;
 int FUNC_2 (struct nouveau_mc*,char*,int) ;
 int FUNC_3 (struct nouveau_mc*,int) ;
 int FUNC_4 (struct nouveau_subdev*) ;

void
FUNC_5(struct nouveau_subdev *VAR_0)
{
 struct nouveau_mc *VAR_1 = FUNC_0(VAR_0);
 const struct nouveau_mc_intr *VAR_2 = VAR_1->intr_map;
 struct nouveau_subdev *VAR_3;
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_4 = FUNC_3(VAR_1, 0x000100);
 while (VAR_4 && VAR_2->stat) {
  if (VAR_4 & VAR_2->stat) {
   VAR_3 = FUNC_1(VAR_0, VAR_2->unit);
   if (VAR_3 && VAR_3->intr)
    VAR_3->intr(VAR_3);
   VAR_5 &= ~VAR_2->stat;
  }
  VAR_2++;
 }

 if (VAR_5) {
  FUNC_2(VAR_1, "unknown intr 0x%08x\n", VAR_4);
 }
}
