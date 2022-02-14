
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvbios_dpout {int dummy; } ;
struct nvbios_dpcfg {int drv; int pre; int unk; } ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_disp {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct dcb_output {int hashm; int hasht; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_bios* FUNC_0 (struct nouveau_disp*) ;
 int FUNC_1 (struct nv50_disp_priv*,int) ;
 int FUNC_2 (struct dcb_output*) ;
 int FUNC_3 (struct nv50_disp_priv*,int const,int,int) ;
 int FUNC_4 (struct nouveau_bios*,int,int ,int,int,int *,int *,int *,int *,struct nvbios_dpcfg*) ;
 int FUNC_5 (struct nouveau_bios*,int ,int ,int *,int *,int *,int *,struct nvbios_dpout*) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_disp *VAR_2, struct dcb_output *VAR_3,
      int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct nouveau_bios *VAR_8 = FUNC_0(VAR_2);
 struct nv50_disp_priv *VAR_9 = (void *)VAR_2;
 const u32 VAR_10 = FUNC_2(VAR_3);
 u32 VAR_11, VAR_12 = FUNC_1(VAR_9, VAR_5);
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 struct nvbios_dpout VAR_17;
 struct nvbios_dpcfg VAR_18;

 VAR_11 = FUNC_5(VAR_8, VAR_3->hasht, VAR_3->hashm,
     &VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
 if (!VAR_11)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_8, VAR_11, 0, VAR_6, VAR_7,
     &VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_18);
 if (!VAR_11)
  return -VAR_0;

 FUNC_3(VAR_9, 0x61c118 + VAR_10, 0x000000ff << VAR_12, VAR_18.drv << VAR_12);
 FUNC_3(VAR_9, 0x61c120 + VAR_10, 0x000000ff << VAR_12, VAR_18.pre << VAR_12);
 FUNC_3(VAR_9, 0x61c130 + VAR_10, 0x0000ff00, VAR_18.unk << 8);
 return 0;
}
