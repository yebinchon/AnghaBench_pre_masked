
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sdvo_flags; } ;
struct intel_sdvo_dtd {TYPE_1__ part2; } ;
struct intel_sdvo {int dtd_sdvo_flags; } ;
struct drm_display_mode {int clock; int vdisplay; int hdisplay; } ;


 int FUNC_0 (struct intel_sdvo*,int,int ,int ) ;
 int FUNC_1 (struct drm_display_mode*,struct intel_sdvo_dtd*) ;
 int FUNC_2 (struct intel_sdvo*,struct intel_sdvo_dtd*) ;
 int FUNC_3 (struct intel_sdvo*) ;

__attribute__((used)) static bool
FUNC_4(struct intel_sdvo *VAR_0,
        const struct drm_display_mode *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct intel_sdvo_dtd VAR_3;


 if (!FUNC_3(VAR_0))
  return 0;

 if (!FUNC_0(VAR_0,
            VAR_1->clock / 10,
            VAR_1->hdisplay,
            VAR_1->vdisplay))
  return 0;

 if (!FUNC_2(VAR_0,
         &VAR_3))
  return 0;

 FUNC_1(VAR_2, &VAR_3);
 VAR_0->dtd_sdvo_flags = VAR_3.part2.sdvo_flags;

 return 1;
}
