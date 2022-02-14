
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_id; struct drm_gem_object* cursor_bo; scalar_t__ cursor_height; scalar_t__ cursor_width; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_gem_object* FUNC_2 (TYPE_1__*,struct drm_file*,scalar_t__) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_4 (struct drm_gem_object*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct radeon_bo*,int ,int,int *) ;
 int FUNC_7 (struct radeon_bo*,int) ;
 int FUNC_8 (struct radeon_bo*) ;
 int FUNC_9 (struct radeon_bo*) ;
 int FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (struct drm_crtc*,int) ;
 int FUNC_12 (struct drm_crtc*,struct drm_gem_object*,int ) ;
 int FUNC_13 (struct drm_crtc*) ;
 struct radeon_crtc* FUNC_14 (struct drm_crtc*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct drm_crtc *VAR_5,
      struct drm_file *VAR_6,
      uint32_t VAR_7,
      uint32_t VAR_8,
      uint32_t VAR_9)
{
 struct radeon_crtc *VAR_10 = FUNC_14(VAR_5);
 struct radeon_device *VAR_11 = VAR_5->dev->dev_private;
 struct drm_gem_object *VAR_12;
 struct radeon_bo *VAR_13;
 uint64_t VAR_14;
 int VAR_15;

 if (!VAR_7) {

  FUNC_10(VAR_5);
  VAR_12 = ((void*)0);
  goto unpin;
 }

 if ((VAR_8 > VAR_1) || (VAR_9 > VAR_0)) {
  FUNC_1("bad cursor width or height %d x %d\n", VAR_8, VAR_9);
  return -VAR_2;
 }

 VAR_12 = FUNC_2(VAR_5->dev, VAR_6, VAR_7);
 if (!VAR_12) {
  FUNC_1("Cannot find cursor object %x for crtc %d\n", VAR_7, VAR_10->crtc_id);
  return -VAR_3;
 }

 VAR_13 = FUNC_4(VAR_12);
 VAR_15 = FUNC_7(VAR_13, 0);
 if (FUNC_15(VAR_15 != 0))
  goto fail;

 VAR_15 = FUNC_6(VAR_13, VAR_4,
           FUNC_0(VAR_11) ? 0 : 1 << 27,
           &VAR_14);
 FUNC_9(VAR_13);
 if (VAR_15)
  goto fail;

 VAR_10->cursor_width = VAR_8;
 VAR_10->cursor_height = VAR_9;

 FUNC_11(VAR_5, 1);
 FUNC_12(VAR_5, VAR_12, VAR_14);
 FUNC_13(VAR_5);
 FUNC_11(VAR_5, 0);

unpin:
 if (VAR_10->cursor_bo) {
  VAR_13 = FUNC_4(VAR_10->cursor_bo);
  VAR_15 = FUNC_7(VAR_13, 0);
  if (FUNC_5(VAR_15 == 0)) {
   FUNC_8(VAR_13);
   FUNC_9(VAR_13);
  }
  FUNC_3(VAR_10->cursor_bo);
 }

 VAR_10->cursor_bo = VAR_12;
 return 0;
fail:
 FUNC_3(VAR_12);

 return VAR_15;
}
