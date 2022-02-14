
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct nvbios {int ram_restrict_tbl_ptr; size_t* data; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 size_t* FUNC_2 (struct drm_device*,int ,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_3 (struct nouveau_device*,int) ;

u8 *
FUNC_4(struct drm_device *VAR_0, u32 VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_0(VAR_0);
 struct nouveau_drm *VAR_5 = FUNC_1(VAR_0);
 struct nvbios *VAR_6 = &VAR_5->vbios;
 u8 VAR_7, VAR_8, VAR_9;
 u8 *VAR_10;

 VAR_7 = (FUNC_3(VAR_4, 0x101000) & 0x0000003c) >> 2;
 if (VAR_6->ram_restrict_tbl_ptr)
  VAR_7 = VAR_6->data[VAR_6->ram_restrict_tbl_ptr + VAR_7];

 VAR_10 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_8, &VAR_9, VAR_3);
 if (VAR_10 && VAR_7 < VAR_9)
  return VAR_10 + VAR_8 + (VAR_7 * *VAR_3);

 return ((void*)0);
}
