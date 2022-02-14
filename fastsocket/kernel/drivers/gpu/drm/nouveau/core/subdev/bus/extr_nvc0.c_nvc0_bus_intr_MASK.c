
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_bus {int dummy; } ;


 struct nouveau_bus* FUNC_0 (struct nouveau_subdev*) ;
 int FUNC_1 (struct nouveau_bus*,char*,...) ;
 int FUNC_2 (struct nouveau_bus*,int,int,int) ;
 int FUNC_3 (struct nouveau_bus*,int) ;
 int FUNC_4 (struct nouveau_bus*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nouveau_subdev *VAR_0)
{
 struct nouveau_bus *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = FUNC_3(VAR_1, 0x001100) & FUNC_3(VAR_1, 0x001140);

 if (VAR_2 & 0x0000000e) {
  u32 VAR_3 = FUNC_3(VAR_1, 0x009084);
  u32 VAR_4 = FUNC_3(VAR_1, 0x009088);

  FUNC_1(VAR_1, "MMIO %s of 0x%08x FAULT at 0x%06x [ %s%s%s]\n",
    (VAR_3 & 0x00000002) ? "write" : "read", VAR_4,
    (VAR_3 & 0x00fffffc),
    (VAR_2 & 0x00000002) ? "!ENGINE " : "",
    (VAR_2 & 0x00000004) ? "IBUS " : "",
    (VAR_2 & 0x00000008) ? "TIMEOUT " : "");

  FUNC_4(VAR_1, 0x009084, 0x00000000);
  FUNC_4(VAR_1, 0x001100, (VAR_2 & 0x0000000e));
  VAR_2 &= ~0x0000000e;
 }

 if (VAR_2) {
  FUNC_1(VAR_1, "unknown intr 0x%08x\n", VAR_2);
  FUNC_2(VAR_1, 0x001140, VAR_2, 0x00000000);
 }
}
