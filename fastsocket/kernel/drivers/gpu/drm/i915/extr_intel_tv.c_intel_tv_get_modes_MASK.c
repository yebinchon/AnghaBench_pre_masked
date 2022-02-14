
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tv_mode {unsigned int max_srcw; scalar_t__ refresh; int component_only; int progressive; } ;
struct intel_tv {int dummy; } ;
struct input_res {unsigned int w; unsigned int h; int name; } ;
struct drm_display_mode {unsigned int hdisplay; unsigned int hsync_start; unsigned int hsync_end; unsigned int htotal; unsigned int vdisplay; unsigned int vsync_start; unsigned int vsync_end; unsigned int vtotal; int clock; int type; int name; } ;
struct drm_connector {int dev; } ;


 int FUNC_0 (struct input_res*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 struct drm_display_mode* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 struct input_res* VAR_2 ;
 struct intel_tv* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*,struct drm_display_mode*) ;
 struct tv_mode* FUNC_6 (struct intel_tv*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct drm_connector *VAR_3)
{
 struct drm_display_mode *VAR_4;
 struct intel_tv *VAR_5 = FUNC_4(VAR_3);
 const struct tv_mode *VAR_6 = FUNC_6(VAR_5);
 int VAR_7, VAR_8 = 0;
 u64 VAR_9;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2);
      VAR_7++) {
  const struct input_res *VAR_10 = &VAR_2[VAR_7];
  unsigned int VAR_11 = VAR_10->w;
  unsigned int VAR_12 = VAR_10->h;

  if (VAR_6->max_srcw && VAR_10->w > VAR_6->max_srcw)
   continue;

  if (VAR_10->w > 1024 && (!VAR_6->progressive
     && !VAR_6->component_only))
   continue;

  VAR_4 = FUNC_2(VAR_3->dev);
  if (!VAR_4)
   continue;
  FUNC_7(VAR_4->name, VAR_10->name, VAR_0);

  VAR_4->hdisplay = VAR_11;
  VAR_4->hsync_start = VAR_11 + 1;
  VAR_4->hsync_end = VAR_11 + 64;
  if (VAR_4->hsync_end <= VAR_4->hsync_start)
   VAR_4->hsync_end = VAR_4->hsync_start + 1;
  VAR_4->htotal = VAR_11 + 96;

  VAR_4->vdisplay = VAR_12;
  VAR_4->vsync_start = VAR_12 + 1;
  VAR_4->vsync_end = VAR_12 + 32;
  if (VAR_4->vsync_end <= VAR_4->vsync_start)
   VAR_4->vsync_end = VAR_4->vsync_start + 1;
  VAR_4->vtotal = VAR_12 + 33;

  VAR_9 = (u64) VAR_6->refresh * VAR_4->vtotal;
  VAR_9 *= VAR_4->htotal;
  VAR_9 = FUNC_1(VAR_9, 1000000);
  VAR_4->clock = (int) VAR_9;

  VAR_4->type = VAR_1;
  FUNC_5(VAR_3, VAR_4);
  FUNC_3(VAR_3, VAR_4);
  VAR_8++;
 }

 return VAR_8;
}
