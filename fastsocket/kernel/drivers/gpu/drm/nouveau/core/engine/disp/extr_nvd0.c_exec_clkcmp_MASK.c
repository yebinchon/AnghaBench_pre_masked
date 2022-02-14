
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvbios_outp {int dummy; } ;
struct nvbios_ocfg {int * clkcmp; } ;
struct nvbios_init {int offset; int crtc; int execute; struct dcb_output* outp; struct nouveau_bios* bios; int subdev; } ;
struct TYPE_2__ {int lvdsconf; } ;
struct nv50_disp_priv {TYPE_1__ sor; } ;
struct nouveau_bios {int dummy; } ;
struct dcb_output {int type; } ;






 int FUNC_0 (struct nv50_disp_priv*,int,int,int,struct dcb_output*,int *,int *,int *,int *,struct nvbios_outp*) ;
 struct nouveau_bios* FUNC_1 (struct nv50_disp_priv*) ;
 int FUNC_2 (struct nv50_disp_priv*,int) ;
 int FUNC_3 (struct nv50_disp_priv*) ;
 int FUNC_4 (struct nvbios_init*) ;
 int FUNC_5 (struct nouveau_bios*,int,int,int *,int *,int *,int *,struct nvbios_ocfg*) ;
 int FUNC_6 (struct nouveau_bios*,int ,int) ;

__attribute__((used)) static u32
FUNC_7(struct nv50_disp_priv *VAR_0, int VAR_1, int VAR_2,
     u32 VAR_3, struct dcb_output *VAR_4)
{
 struct nouveau_bios *VAR_5 = FUNC_1(VAR_0);
 struct nvbios_outp VAR_6;
 struct nvbios_ocfg VAR_7;
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = 0x00000000;
 u32 VAR_13, VAR_14 = ~0;
 int VAR_15;

 for (VAR_15 = 0; !(VAR_12 & (1 << VAR_1)) && VAR_15 < 8; VAR_15++) {
  VAR_12 = FUNC_2(VAR_0, 0x660180 + (VAR_15 * 0x20));
  if (VAR_12 & (1 << VAR_1))
   break;
 }

 if (VAR_15 == 8)
  return 0;

 VAR_13 = FUNC_0(VAR_0, VAR_1, VAR_15, VAR_12, VAR_4, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_6);
 if (VAR_13 == 0x0000)
  return VAR_14;

 switch (VAR_4->type) {
 case 128:
  VAR_14 = (VAR_12 & 0x00000f00) >> 8;
  if (VAR_3 >= 165000)
   VAR_14 |= 0x0100;
  break;
 case 129:
  VAR_14 = VAR_0->sor.lvdsconf;
  break;
 case 130:
  VAR_14 = (VAR_12 & 0x00000f00) >> 8;
  break;
 case 131:
 default:
  VAR_14 = 0x00ff;
  break;
 }

 VAR_13 = FUNC_5(VAR_5, VAR_13, VAR_14, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_7);
 if (VAR_13 && VAR_2 < 0xff) {
  VAR_13 = FUNC_6(VAR_5, VAR_7[VAR_2], VAR_3);
  if (VAR_13) {
   struct nvbios_init VAR_16 = {
    .subdev = FUNC_3(VAR_0),
    .bios = VAR_5,
    .offset = VAR_13,
    .outp = VAR_4,
    .crtc = VAR_1,
    .execute = 1,
   };

   FUNC_4(&VAR_16);
  }
 }

 return VAR_14;
}
