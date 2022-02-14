
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_plane {int can_scale; int max_downscale; int pipe; int base; int get_colorkey; int update_colorkey; int disable_plane; int update_plane; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int *,unsigned long,int *,int const*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct intel_plane*) ;
 struct intel_plane* FUNC_7 (int,int ) ;
 int * VAR_13 ;

int
FUNC_8(struct drm_device *VAR_14, enum pipe VAR_15)
{
 struct intel_plane *VAR_16;
 unsigned long VAR_17;
 const uint32_t *VAR_18;
 int VAR_19;
 int VAR_20;

 if (FUNC_1(VAR_14)->gen < 5)
  return -VAR_0;

 VAR_16 = FUNC_7(sizeof(struct intel_plane), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 switch (FUNC_1(VAR_14)->gen) {
 case 5:
 case 6:
  VAR_16->can_scale = 1;
  VAR_16->max_downscale = 16;
  VAR_16->update_plane = VAR_7;
  VAR_16->disable_plane = VAR_3;
  VAR_16->update_colorkey = VAR_6;
  VAR_16->get_colorkey = VAR_4;

  if (FUNC_2(VAR_14)) {
   VAR_18 = VAR_13;
   VAR_19 = FUNC_0(VAR_13);
  } else {
   VAR_18 = VAR_5;
   VAR_19 = FUNC_0(VAR_5);
  }
  break;

 case 7:
  if (FUNC_3(VAR_14) || FUNC_4(VAR_14))
   VAR_16->can_scale = 0;
  else
   VAR_16->can_scale = 1;
  VAR_16->max_downscale = 2;
  VAR_16->update_plane = VAR_12;
  VAR_16->disable_plane = VAR_9;
  VAR_16->update_colorkey = VAR_11;
  VAR_16->get_colorkey = VAR_10;

  VAR_18 = VAR_13;
  VAR_19 = FUNC_0(VAR_13);
  break;

 default:
  FUNC_6(VAR_16);
  return -VAR_0;
 }

 VAR_16->pipe = VAR_15;
 VAR_17 = (1 << VAR_15);
 VAR_20 = FUNC_5(VAR_14, &VAR_16->base, VAR_17,
        &VAR_8,
        VAR_18, VAR_19,
        0);
 if (VAR_20)
  FUNC_6(VAR_16);

 return VAR_20;
}
