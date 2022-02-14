
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {struct drm_crtc* crtc; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct intel_tv {scalar_t__* margin; int tv_format; TYPE_2__ base; } ;
struct drm_property {int dummy; } ;
struct TYPE_8__ {struct drm_property* tv_mode_property; struct drm_property* tv_bottom_margin_property; struct drm_property* tv_top_margin_property; struct drm_property* tv_right_margin_property; struct drm_property* tv_left_margin_property; } ;
struct drm_device {TYPE_3__ mode_config; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {int base; struct drm_device* dev; } ;
struct TYPE_9__ {int name; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *,struct drm_property*,scalar_t__) ;
 struct intel_tv* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct drm_connector *VAR_6, struct drm_property *VAR_7,
        uint64_t VAR_8)
{
 struct drm_device *VAR_9 = VAR_6->dev;
 struct intel_tv *VAR_10 = FUNC_2(VAR_6);
 struct drm_crtc *VAR_11 = VAR_10->base.base.crtc;
 int VAR_12 = 0;
 bool VAR_13 = 0;

 VAR_12 = FUNC_1(&VAR_6->base, VAR_7, VAR_8);
 if (VAR_12 < 0)
  goto out;

 if (VAR_7 == VAR_9->mode_config.tv_left_margin_property &&
  VAR_10->margin[VAR_2] != VAR_8) {
  VAR_10->margin[VAR_2] = VAR_8;
  VAR_13 = 1;
 } else if (VAR_7 == VAR_9->mode_config.tv_right_margin_property &&
  VAR_10->margin[VAR_3] != VAR_8) {
  VAR_10->margin[VAR_3] = VAR_8;
  VAR_13 = 1;
 } else if (VAR_7 == VAR_9->mode_config.tv_top_margin_property &&
  VAR_10->margin[VAR_4] != VAR_8) {
  VAR_10->margin[VAR_4] = VAR_8;
  VAR_13 = 1;
 } else if (VAR_7 == VAR_9->mode_config.tv_bottom_margin_property &&
  VAR_10->margin[VAR_1] != VAR_8) {
  VAR_10->margin[VAR_1] = VAR_8;
  VAR_13 = 1;
 } else if (VAR_7 == VAR_9->mode_config.tv_mode_property) {
  if (VAR_8 >= FUNC_0(VAR_5)) {
   VAR_12 = -VAR_0;
   goto out;
  }
  if (!FUNC_4(VAR_10->tv_format, VAR_5[VAR_8].name))
   goto out;

  VAR_10->tv_format = VAR_5[VAR_8].name;
  VAR_13 = 1;
 } else {
  VAR_12 = -VAR_0;
  goto out;
 }

 if (VAR_13 && VAR_11)
  FUNC_3(VAR_11);
out:
 return VAR_12;
}
