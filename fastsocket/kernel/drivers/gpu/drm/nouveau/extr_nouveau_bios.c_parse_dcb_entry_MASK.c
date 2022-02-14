
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dcb_table {int version; } ;
struct TYPE_2__ {struct dcb_table dcb; } ;
struct nouveau_drm {TYPE_1__ vbios; } ;
struct drm_device {int dummy; } ;
struct dcb_output {scalar_t__ type; scalar_t__ location; int i2c_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_device*,int,int *,int *) ;
 struct dcb_output* FUNC_3 (struct dcb_table*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,struct dcb_table*,int ,int ,struct dcb_output*) ;
 int FUNC_6 (struct drm_device*,struct dcb_table*,int ,int ,struct dcb_output*) ;

__attribute__((used)) static int
FUNC_7(struct drm_device *VAR_2, void *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_4(VAR_2);
 struct dcb_table *VAR_7 = &VAR_6->vbios.dcb;
 u32 VAR_8 = (VAR_7->version >= 0x20) ? FUNC_1(VAR_5[4]) : FUNC_1(VAR_5[6]);
 u32 VAR_9 = FUNC_1(VAR_5[0]);
 bool VAR_10;

 if (FUNC_2(VAR_2, VAR_4, &VAR_9, &VAR_8)) {
  struct dcb_output *VAR_11 = FUNC_3(VAR_7);

  FUNC_0(VAR_6, "DCB outp %02d: %08x %08x\n", VAR_4, VAR_9, VAR_8);

  if (VAR_7->version >= 0x20)
   VAR_10 = FUNC_6(VAR_2, VAR_7, VAR_9, VAR_8, VAR_11);
  else
   VAR_10 = FUNC_5(VAR_2, VAR_7, VAR_9, VAR_8, VAR_11);
  if (!VAR_10)
   return 1;





  if (VAR_11->type == VAR_1 &&
      VAR_11->location == VAR_0)
   VAR_11->i2c_index = 0x0f;
 }

 return 0;
}
