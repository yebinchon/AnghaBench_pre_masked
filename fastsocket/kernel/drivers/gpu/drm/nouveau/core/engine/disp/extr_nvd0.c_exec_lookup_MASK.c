
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvbios_outp {int dummy; } ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct dcb_output {TYPE_1__ sorconf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nouveau_bios*,int,int,int *,int *,struct dcb_output*) ;
 struct nouveau_bios* FUNC_1 (struct nv50_disp_priv*) ;
 int FUNC_2 (struct nv50_disp_priv*,char*,int) ;
 int FUNC_3 (struct nouveau_bios*,int,int,int *,int *,int *,int *,struct nvbios_outp*) ;

__attribute__((used)) static u16
FUNC_4(struct nv50_disp_priv *VAR_4, int VAR_5, int VAR_6, u32 VAR_7,
     struct dcb_output *VAR_8, u8 *VAR_9, u8 *VAR_10, u8 *VAR_11, u8 *VAR_12,
     struct nvbios_outp *VAR_13)
{
 struct nouveau_bios *VAR_14 = FUNC_1(VAR_4);
 u16 VAR_15, VAR_16, VAR_17;

 if (VAR_6 < 4) {
  VAR_16 = VAR_0;
  VAR_15 = 0;
 } else {
  VAR_6 -= 4;
  switch (VAR_7 & 0x00000f00) {
  case 0x00000000: VAR_16 = VAR_2; VAR_15 = 1; break;
  case 0x00000100: VAR_16 = VAR_3; VAR_15 = 1; break;
  case 0x00000200: VAR_16 = VAR_3; VAR_15 = 2; break;
  case 0x00000500: VAR_16 = VAR_3; VAR_15 = 3; break;
  case 0x00000800: VAR_16 = VAR_1; VAR_15 = 1; break;
  case 0x00000900: VAR_16 = VAR_1; VAR_15 = 2; break;
  default:
   FUNC_2(VAR_4, "unknown SOR mc 0x%08x\n", VAR_7);
   return 0x0000;
  }
  VAR_8->sorconf.link = VAR_15;
 }

 VAR_15 = 0x00c0 & (VAR_15 << 6);
 VAR_15 |= 0x0001 << VAR_6;
 VAR_15 |= 0x0100 << VAR_5;

 VAR_17 = FUNC_0(VAR_14, VAR_16, VAR_15, VAR_9, VAR_10, VAR_8);
 if (!VAR_17)
  return 0x0000;

 return FUNC_3(VAR_14, VAR_16, VAR_15, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
