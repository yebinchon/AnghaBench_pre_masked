
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_subdev {int (* intr ) (struct nouveau_subdev*) ;} ;
struct nouveau_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_bus* FUNC_0 (struct nouveau_subdev*) ;
 struct nouveau_subdev* FUNC_1 (struct nouveau_bus*,int ) ;
 int FUNC_2 (struct nouveau_bus*,char*,...) ;
 int FUNC_3 (struct nouveau_bus*,int,int,int) ;
 int FUNC_4 (struct nouveau_bus*,int) ;
 int FUNC_5 (struct nouveau_bus*,int,int) ;
 int FUNC_6 (struct nouveau_subdev*) ;
 int FUNC_7 (struct nouveau_subdev*) ;

__attribute__((used)) static void
FUNC_8(struct nouveau_subdev *VAR_2)
{
 struct nouveau_bus *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = FUNC_4(VAR_3, 0x001100) & FUNC_4(VAR_3, 0x001140);
 u32 VAR_5 = FUNC_4(VAR_3, 0x001104) & FUNC_4(VAR_3, 0x001144);

 if (VAR_5) {
  VAR_2 = FUNC_1(VAR_3, VAR_0);
  if (VAR_2 && VAR_2->intr)
   VAR_2->intr(VAR_2);
 }

 if (VAR_4 & 0x00000008) {
  u32 VAR_6 = FUNC_4(VAR_3, 0x009084);
  u32 VAR_7 = FUNC_4(VAR_3, 0x009088);

  FUNC_2(VAR_3, "MMIO %s of 0x%08x FAULT at 0x%06x\n",
    (VAR_6 & 0x00000002) ? "write" : "read", VAR_7,
    (VAR_6 & 0x00fffffc));

  VAR_4 &= ~0x00000008;
  FUNC_5(VAR_3, 0x001100, 0x00000008);
 }

 if (VAR_4 & 0x00070000) {
  VAR_2 = FUNC_1(VAR_3, VAR_1);
  if (VAR_2 && VAR_2->intr)
   VAR_2->intr(VAR_2);
  VAR_4 &= ~0x00070000;
  FUNC_5(VAR_3, 0x001100, 0x00070000);
 }

 if (VAR_4) {
  FUNC_2(VAR_3, "unknown intr 0x%08x\n", VAR_4);
  FUNC_3(VAR_3, 0x001140, VAR_4, 0x00000000);
 }
}
