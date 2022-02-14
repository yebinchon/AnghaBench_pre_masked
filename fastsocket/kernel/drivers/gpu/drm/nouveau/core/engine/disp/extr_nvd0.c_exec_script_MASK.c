
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nvbios_outp {int * script; } ;
struct nvbios_init {int crtc; int execute; struct dcb_output* outp; int offset; struct nouveau_bios* bios; int subdev; } ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct dcb_output {int dummy; } ;


 scalar_t__ FUNC_0 (struct nv50_disp_priv*,int,int,int,struct dcb_output*,int *,int *,int *,int *,struct nvbios_outp*) ;
 struct nouveau_bios* FUNC_1 (struct nv50_disp_priv*) ;
 int FUNC_2 (struct nv50_disp_priv*,int) ;
 int FUNC_3 (struct nv50_disp_priv*) ;
 scalar_t__ FUNC_4 (struct nvbios_init*) ;

__attribute__((used)) static bool
FUNC_5(struct nv50_disp_priv *VAR_0, int VAR_1, int VAR_2)
{
 struct nouveau_bios *VAR_3 = FUNC_1(VAR_0);
 struct nvbios_outp VAR_4;
 struct dcb_output VAR_5;
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = 0x00000000;
 u16 VAR_11;
 int VAR_12;

 for (VAR_12 = 0; !(VAR_10 & (1 << VAR_1)) && VAR_12 < 8; VAR_12++) {
  VAR_10 = FUNC_2(VAR_0, 0x640180 + (VAR_12 * 0x20));
  if (VAR_10 & (1 << VAR_1))
   break;
 }

 if (VAR_12 == 8)
  return 0;

 VAR_11 = FUNC_0(VAR_0, VAR_1, VAR_12, VAR_10, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_4);
 if (VAR_11) {
  struct nvbios_init VAR_13 = {
   .subdev = FUNC_3(VAR_0),
   .bios = VAR_3,
   .offset = VAR_4.script[VAR_2],
   .outp = &VAR_5,
   .crtc = VAR_1,
   .execute = 1,
  };

  return FUNC_4(&VAR_13) == 0;
 }

 return 0;
}
