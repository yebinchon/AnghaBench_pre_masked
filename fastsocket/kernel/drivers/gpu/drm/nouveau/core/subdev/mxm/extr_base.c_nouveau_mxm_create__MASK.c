
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_mxm {int action; } ;
struct nouveau_device {int cfgopt; } ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nouveau_mxm*,int) ;
 int FUNC_1 (struct nouveau_bios*,int*,int*) ;
 int FUNC_2 (struct nouveau_mxm*,int ,int *,int *) ;
 int FUNC_3 (struct nouveau_mxm*) ;
 struct nouveau_bios* FUNC_4 (struct nouveau_device*) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,char*,char*,int,void**) ;
 int FUNC_7 (struct nouveau_mxm*,char*) ;
 struct nouveau_device* FUNC_8 (struct nouveau_object*) ;
 int FUNC_9 (struct nouveau_mxm*,char*,...) ;
 int FUNC_10 (struct nouveau_bios*,int ) ;

int
FUNC_11(struct nouveau_object *VAR_2,
      struct nouveau_object *VAR_3,
      struct nouveau_oclass *VAR_4, int VAR_5, void **VAR_6)
{
 struct nouveau_device *VAR_7 = FUNC_8(VAR_2);
 struct nouveau_bios *VAR_8 = FUNC_4(VAR_7);
 struct nouveau_mxm *VAR_9;
 u8 VAR_10, VAR_11;
 u16 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_6(VAR_2, VAR_3, VAR_4, 0, "MXM", "mxm",
         VAR_5, VAR_6);
 VAR_9 = *VAR_6;
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_8, &VAR_10, &VAR_11);
 if (!VAR_12 || !(VAR_10 = FUNC_10(VAR_8, VAR_12))) {
  FUNC_7(VAR_9, "no VBIOS data, nothing to do\n");
  return 0;
 }

 FUNC_9(VAR_9, "BIOS version %d.%d\n", VAR_10 >> 4, VAR_10 & 0x0f);

 if (FUNC_0(VAR_9, VAR_10)) {
  FUNC_9(VAR_9, "failed to locate valid SIS\n");
  return 0;

 }

 FUNC_9(VAR_9, "MXMS Version %d.%d\n",
  FUNC_3(VAR_9) >> 8, FUNC_3(VAR_9) & 0xff);
 FUNC_2(VAR_9, 0, ((void*)0), ((void*)0));

 if (FUNC_5(VAR_7->cfgopt, "NvMXMDCB", 1))
  VAR_9->action |= VAR_1;
 return 0;
}
