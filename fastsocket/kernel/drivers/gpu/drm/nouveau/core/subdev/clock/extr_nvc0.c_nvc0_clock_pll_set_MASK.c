
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_clock_priv {int dummy; } ;
struct nvbios_pll {int type; int reg; } ;
struct nouveau_clock {int dummy; } ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;




 struct nouveau_bios* FUNC_0 (struct nvc0_clock_priv*) ;
 int FUNC_1 (struct nvc0_clock_priv*,int ,int,int) ;
 int FUNC_2 (struct nvc0_clock_priv*,char*,int ,int ) ;
 int FUNC_3 (struct nvc0_clock_priv*,int ,int) ;
 int FUNC_4 (struct nouveau_clock*,struct nvbios_pll*,int ,int*,int*,int*,int*) ;
 int FUNC_5 (struct nouveau_bios*,int ,struct nvbios_pll*) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_clock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvc0_clock_priv *VAR_4 = (void *)VAR_1;
 struct nouveau_bios *VAR_5 = FUNC_0(VAR_4);
 struct nvbios_pll VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_5, VAR_2, &VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_1, &VAR_6, VAR_3, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 switch (VAR_6.type) {
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_4, VAR_6.reg + 0x0c, 0x00000000, 0x00000100);
  FUNC_3(VAR_4, VAR_6.reg + 0x04, (VAR_10 << 16) | (VAR_7 << 8) | VAR_9);
  FUNC_3(VAR_4, VAR_6.reg + 0x10, VAR_8 << 16);
  break;
 default:
  FUNC_2(VAR_4, "0x%08x/%dKhz unimplemented\n", VAR_2, VAR_3);
  VAR_11 = -VAR_0;
  break;
 }

 return VAR_11;
}
