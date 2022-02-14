
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int fdi_rx_polarity_inverted; int display_clock_mode; int lvds_ssc_freq; int lvds_use_ssc; int int_crt_support; int int_tv_support; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct bdb_header {int dummy; } ;
struct bdb_general_features {int fdi_rx_polarity_inverted; int display_clock_mode; int ssc_freq; int enable_ssc; int int_crt_support; int int_tv_support; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 struct bdb_general_features* FUNC_1 (struct bdb_header*,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_1,
         struct bdb_header *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct bdb_general_features *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4) {
  VAR_1->int_tv_support = VAR_4->int_tv_support;
  VAR_1->int_crt_support = VAR_4->int_crt_support;
  VAR_1->lvds_use_ssc = VAR_4->enable_ssc;
  VAR_1->lvds_ssc_freq =
   FUNC_2(VAR_3, VAR_4->ssc_freq);
  VAR_1->display_clock_mode = VAR_4->display_clock_mode;
  VAR_1->fdi_rx_polarity_inverted = VAR_4->fdi_rx_polarity_inverted;
  FUNC_0("BDB_GENERAL_FEATURES int_tv_support %d int_crt_support %d lvds_use_ssc %d lvds_ssc_freq %d display_clock_mode %d fdi_rx_polarity_inverted %d\n",
         VAR_1->int_tv_support,
         VAR_1->int_crt_support,
         VAR_1->lvds_use_ssc,
         VAR_1->lvds_ssc_freq,
         VAR_1->display_clock_mode,
         VAR_1->fdi_rx_polarity_inverted);
 }
}
