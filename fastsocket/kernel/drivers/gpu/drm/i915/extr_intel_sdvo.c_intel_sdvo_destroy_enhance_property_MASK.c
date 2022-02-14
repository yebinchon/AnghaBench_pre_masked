
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_connector {scalar_t__ brightness; scalar_t__ dot_crawl; scalar_t__ tv_chroma_filter; scalar_t__ tv_luma_filter; scalar_t__ flicker_filter_adaptive; scalar_t__ flicker_filter_2d; scalar_t__ flicker_filter; scalar_t__ sharpness; scalar_t__ hue; scalar_t__ contrast; scalar_t__ saturation; scalar_t__ vpos; scalar_t__ hpos; scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_device*,scalar_t__) ;
 struct intel_sdvo_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_2(struct drm_connector *VAR_0)
{
 struct intel_sdvo_connector *VAR_1 = FUNC_1(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;

 if (VAR_1->left)
  FUNC_0(VAR_2, VAR_1->left);
 if (VAR_1->right)
  FUNC_0(VAR_2, VAR_1->right);
 if (VAR_1->top)
  FUNC_0(VAR_2, VAR_1->top);
 if (VAR_1->bottom)
  FUNC_0(VAR_2, VAR_1->bottom);
 if (VAR_1->hpos)
  FUNC_0(VAR_2, VAR_1->hpos);
 if (VAR_1->vpos)
  FUNC_0(VAR_2, VAR_1->vpos);
 if (VAR_1->saturation)
  FUNC_0(VAR_2, VAR_1->saturation);
 if (VAR_1->contrast)
  FUNC_0(VAR_2, VAR_1->contrast);
 if (VAR_1->hue)
  FUNC_0(VAR_2, VAR_1->hue);
 if (VAR_1->sharpness)
  FUNC_0(VAR_2, VAR_1->sharpness);
 if (VAR_1->flicker_filter)
  FUNC_0(VAR_2, VAR_1->flicker_filter);
 if (VAR_1->flicker_filter_2d)
  FUNC_0(VAR_2, VAR_1->flicker_filter_2d);
 if (VAR_1->flicker_filter_adaptive)
  FUNC_0(VAR_2, VAR_1->flicker_filter_adaptive);
 if (VAR_1->tv_luma_filter)
  FUNC_0(VAR_2, VAR_1->tv_luma_filter);
 if (VAR_1->tv_chroma_filter)
  FUNC_0(VAR_2, VAR_1->tv_chroma_filter);
 if (VAR_1->dot_crawl)
  FUNC_0(VAR_2, VAR_1->dot_crawl);
 if (VAR_1->brightness)
  FUNC_0(VAR_2, VAR_1->brightness);
}
