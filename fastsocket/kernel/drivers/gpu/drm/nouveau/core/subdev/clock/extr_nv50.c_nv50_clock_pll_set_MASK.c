
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_pll {int type; int bias_p; scalar_t__ reg; } ;
struct nv50_clock_priv {int dummy; } ;
struct nouveau_clock {int dummy; } ;
struct nouveau_bios {int dummy; } ;





 struct nouveau_bios* FUNC_0 (struct nv50_clock_priv*) ;
 int FUNC_1 (struct nouveau_clock*,struct nvbios_pll*,int ,int*,int*,int*,int*,int*) ;
 int FUNC_2 (struct nouveau_clock*,char*,...) ;
 int FUNC_3 (struct nv50_clock_priv*,scalar_t__,int,int) ;
 int FUNC_4 (struct nv50_clock_priv*,scalar_t__,int) ;
 int FUNC_5 (struct nouveau_bios*,int ,struct nvbios_pll*) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_clock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nv50_clock_priv *VAR_3 = (void *)VAR_0;
 struct nouveau_bios *VAR_4 = FUNC_0(VAR_3);
 struct nvbios_pll VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_4, VAR_1, &VAR_5);
 if (VAR_11) {
  FUNC_2(VAR_0, "failed to retrieve pll data, %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_0, &VAR_5, VAR_2, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (!VAR_11) {
  FUNC_2(VAR_0, "failed pll calculation\n");
  return VAR_11;
 }

 switch (VAR_5.type) {
 case 129:
 case 128:
  FUNC_4(VAR_3, VAR_5.reg + 0, 0x10000611);
  FUNC_3(VAR_3, VAR_5.reg + 4, 0x00ff00ff, (VAR_7 << 16) | VAR_6);
  FUNC_3(VAR_3, VAR_5.reg + 8, 0x7fff00ff, (VAR_10 << 28) |
       (VAR_9 << 16) | VAR_8);
  break;
 case 130:
  FUNC_3(VAR_3, VAR_5.reg + 0, 0x01ff0000, (VAR_10 << 22) |
              (VAR_5.bias_p << 19) |
       (VAR_10 << 16));
  FUNC_4(VAR_3, VAR_5.reg + 4, (VAR_6 << 8) | VAR_7);
  break;
 default:
  FUNC_3(VAR_3, VAR_5.reg + 0, 0x00070000, (VAR_10 << 16));
  FUNC_4(VAR_3, VAR_5.reg + 4, (VAR_6 << 8) | VAR_7);
  break;
 }

 return 0;
}
