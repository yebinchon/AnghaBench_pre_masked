
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane_funcs {int dummy; } ;
struct TYPE_5__ {int * properties; } ;
struct drm_plane {int format_count; unsigned long possible_crtcs; int head; int format_types; TYPE_2__ base; struct drm_plane_funcs const* funcs; struct drm_device* dev; int properties; } ;
struct TYPE_4__ {int num_plane; int plane_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,TYPE_2__*,int ) ;
 int FUNC_3 (struct drm_device*,TYPE_2__*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int const*,int) ;

int FUNC_9(struct drm_device *VAR_3, struct drm_plane *VAR_4,
     unsigned long VAR_5,
     const struct drm_plane_funcs *VAR_6,
     const uint32_t *VAR_7, uint32_t VAR_8,
     bool VAR_9)
{
 int VAR_10;

 FUNC_4(VAR_3);

 VAR_10 = FUNC_2(VAR_3, &VAR_4->base, VAR_0);
 if (VAR_10)
  goto out;

 VAR_4->base.properties = &VAR_4->properties;
 VAR_4->dev = VAR_3;
 VAR_4->funcs = VAR_6;
 VAR_4->format_types = FUNC_6(sizeof(uint32_t) * VAR_8,
          VAR_2);
 if (!VAR_4->format_types) {
  FUNC_0("out of memory when allocating plane\n");
  FUNC_3(VAR_3, &VAR_4->base);
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_8(VAR_4->format_types, VAR_7, VAR_8 * sizeof(uint32_t));
 VAR_4->format_count = VAR_8;
 VAR_4->possible_crtcs = VAR_5;





 if (!VAR_9) {
  FUNC_7(&VAR_4->head, &VAR_3->mode_config.plane_list);
  VAR_3->mode_config.num_plane++;
 } else {
  FUNC_1(&VAR_4->head);
 }

 out:
 FUNC_5(VAR_3);

 return VAR_10;
}
