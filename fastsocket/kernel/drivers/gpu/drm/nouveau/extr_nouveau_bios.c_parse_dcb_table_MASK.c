
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dcb_table {int version; int entries; } ;
struct nvbios {scalar_t__ type; struct dcb_table dcb; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nvbios*) ;
 int FUNC_4 (struct drm_device*,struct nvbios*) ;
 int FUNC_5 (struct drm_device*,struct dcb_table*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int* FUNC_7 (struct drm_device*,int) ;
 int* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int *,int ) ;
 int* FUNC_10 (struct drm_device*) ;
 int VAR_3 ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static int
FUNC_12(struct drm_device *VAR_4, struct nvbios *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_6(VAR_4);
 struct dcb_table *VAR_7 = &VAR_5->dcb;
 u8 *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_10(VAR_4);
 if (!VAR_8) {

  if (VAR_5->type == VAR_2) {
   FUNC_4(VAR_4, VAR_5);
   return 0;
  }

  return -VAR_0;
 }

 FUNC_0(VAR_6, "DCB version %d.%d\n", VAR_8[0] >> 4, VAR_8[0] & 0xf);

 VAR_7->version = VAR_8[0];
 FUNC_9(VAR_4, ((void*)0), VAR_3);





 if (VAR_7->version < 0x21)
  FUNC_5(VAR_4, VAR_7);

 if (!VAR_7->entries)
  return -VAR_1;


 VAR_10 = -1;
 while ((VAR_9 = FUNC_7(VAR_4, ++VAR_10))) {
  if (VAR_9[0] != 0xff) {
   FUNC_0(VAR_6, "DCB conn %02d: ", VAR_10);
   if (FUNC_8(VAR_4)[3] < 4)
    FUNC_11("%04x\n", FUNC_1(VAR_9[0]));
   else
    FUNC_11("%08x\n", FUNC_2(VAR_9[0]));
  }
 }
 FUNC_3(VAR_5);
 return 0;
}
