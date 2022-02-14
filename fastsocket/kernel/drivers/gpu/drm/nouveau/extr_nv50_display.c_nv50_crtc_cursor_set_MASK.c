
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int visible; int nvbo; } ;
struct nouveau_crtc {TYPE_1__ cursor; } ;
struct nouveau_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct nouveau_bo*) ;
 int FUNC_3 (struct nouveau_bo*,int) ;
 int FUNC_4 (struct nouveau_bo*) ;
 int FUNC_5 (int ,int,int ) ;
 struct nouveau_crtc* FUNC_6 (struct drm_crtc*) ;
 struct nouveau_bo* FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (struct nouveau_crtc*,int,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct drm_crtc *VAR_2, struct drm_file *VAR_3,
       uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 struct nouveau_crtc *VAR_7 = FUNC_6(VAR_2);
 struct drm_device *VAR_8 = VAR_2->dev;
 struct drm_gem_object *VAR_9;
 struct nouveau_bo *VAR_10;
 bool VAR_11 = (VAR_4 != 0);
 int VAR_12, VAR_13 = 0;

 if (VAR_11) {
  if (VAR_5 != 64 || VAR_6 != 64)
   return -VAR_0;

  VAR_9 = FUNC_0(VAR_8, VAR_3, VAR_4);
  if (FUNC_9(!VAR_9))
   return -VAR_1;
  VAR_10 = FUNC_7(VAR_9);

  VAR_13 = FUNC_2(VAR_10);
  if (VAR_13 == 0) {
   for (VAR_12 = 0; VAR_12 < 64 * 64; VAR_12++) {
    u32 VAR_14 = FUNC_3(VAR_10, VAR_12);
    FUNC_5(VAR_7->cursor.nvbo, VAR_12, VAR_14);
   }
   FUNC_4(VAR_10);
  }

  FUNC_1(VAR_9);
 }

 if (VAR_11 != VAR_7->cursor.visible) {
  FUNC_8(VAR_7, VAR_11, 1);
  VAR_7->cursor.visible = VAR_11;
 }

 return VAR_13;
}
