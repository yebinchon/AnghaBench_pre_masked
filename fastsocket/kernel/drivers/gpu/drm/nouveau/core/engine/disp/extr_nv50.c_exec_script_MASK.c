
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nvbios_outp {int * script; } ;
struct nvbios_init {int crtc; int execute; struct dcb_output* outp; int offset; struct nouveau_bios* bios; int subdev; } ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct dcb_output {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 scalar_t__ FUNC_0 (struct nv50_disp_priv*,int,int,int,struct dcb_output*,int *,int *,int *,int *,struct nvbios_outp*) ;
 struct nouveau_bios* FUNC_1 (struct nv50_disp_priv*) ;
 TYPE_1__* FUNC_2 (struct nv50_disp_priv*) ;
 int FUNC_3 (struct nv50_disp_priv*,int) ;
 int FUNC_4 (struct nv50_disp_priv*) ;
 scalar_t__ FUNC_5 (struct nvbios_init*) ;

__attribute__((used)) static bool
FUNC_6(struct nv50_disp_priv *VAR_0, int VAR_1, int VAR_2)
{
 struct nouveau_bios *VAR_3 = FUNC_1(VAR_0);
 struct nvbios_outp VAR_4;
 struct dcb_output VAR_5;
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 u16 VAR_10;
 u32 VAR_11 = 0x00000000;
 int VAR_12;


 for (VAR_12 = 0; !(VAR_11 & (1 << VAR_1)) && VAR_12 < 3; VAR_12++)
  VAR_11 = FUNC_3(VAR_0, 0x610b5c + (VAR_12 * 8));


 if (!(VAR_11 & (1 << VAR_1))) {
  if (FUNC_2(VAR_0)->chipset < 0x90 ||
      FUNC_2(VAR_0)->chipset == 0x92 ||
      FUNC_2(VAR_0)->chipset == 0xa0) {
   for (VAR_12 = 0; !(VAR_11 & (1 << VAR_1)) && VAR_12 < 2; VAR_12++)
    VAR_11 = FUNC_3(VAR_0, 0x610b74 + (VAR_12 * 8));
   VAR_12 += 4;
  } else {
   for (VAR_12 = 0; !(VAR_11 & (1 << VAR_1)) && VAR_12 < 4; VAR_12++)
    VAR_11 = FUNC_3(VAR_0, 0x610798 + (VAR_12 * 8));
   VAR_12 += 4;
  }
 }


 if (!(VAR_11 & (1 << VAR_1))) {
  for (VAR_12 = 0; !(VAR_11 & (1 << VAR_1)) && VAR_12 < 3; VAR_12++)
   VAR_11 = FUNC_3(VAR_0, 0x610b84 + (VAR_12 * 8));
  VAR_12 += 8;
 }

 if (!(VAR_11 & (1 << VAR_1)))
  return 0;
 VAR_12--;

 VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_12, VAR_11, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_4);
 if (VAR_10) {
  struct nvbios_init VAR_13 = {
   .subdev = FUNC_4(VAR_0),
   .bios = VAR_3,
   .offset = VAR_4.script[VAR_2],
   .outp = &VAR_5,
   .crtc = VAR_1,
   .execute = 1,
  };

  return FUNC_5(&VAR_13) == 0;
 }

 return 0;
}
