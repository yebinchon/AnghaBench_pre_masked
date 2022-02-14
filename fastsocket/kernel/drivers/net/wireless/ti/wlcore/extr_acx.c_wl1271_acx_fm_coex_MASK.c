
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl1271_acx_fm_coex {int swallow_clk_diff; int fm_disturbed_band_margin; void* ldo_stabilization_time; int coex_pll_stabilization_time; void* m_divider_fref_set_2; void* m_divider_fref_set_1; int n_divider_fref_set_2; int n_divider_fref_set_1; int swallow_period; int enable; } ;
struct TYPE_3__ {int swallow_clk_diff; int fm_disturbed_band_margin; int ldo_stabilization_time; int coex_pll_stabilization_time; int m_divider_fref_set_2; int m_divider_fref_set_1; int n_divider_fref_set_2; int n_divider_fref_set_1; int swallow_period; int enable; } ;
struct TYPE_4__ {TYPE_1__ fm_coex; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wl1271_acx_fm_coex*) ;
 struct wl1271_acx_fm_coex* FUNC_3 (int,int ) ;
 int FUNC_4 (struct wl1271*,int ,struct wl1271_acx_fm_coex*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(struct wl1271 *VAR_4)
{
 struct wl1271_acx_fm_coex *VAR_5;
 int VAR_6;

 FUNC_5(VAR_1, "acx fm coex setting");

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->enable = VAR_4->conf.fm_coex.enable;
 VAR_5->swallow_period = VAR_4->conf.fm_coex.swallow_period;
 VAR_5->n_divider_fref_set_1 = VAR_4->conf.fm_coex.n_divider_fref_set_1;
 VAR_5->n_divider_fref_set_2 = VAR_4->conf.fm_coex.n_divider_fref_set_2;
 VAR_5->m_divider_fref_set_1 =
  FUNC_0(VAR_4->conf.fm_coex.m_divider_fref_set_1);
 VAR_5->m_divider_fref_set_2 =
  FUNC_0(VAR_4->conf.fm_coex.m_divider_fref_set_2);
 VAR_5->coex_pll_stabilization_time =
  FUNC_1(VAR_4->conf.fm_coex.coex_pll_stabilization_time);
 VAR_5->ldo_stabilization_time =
  FUNC_0(VAR_4->conf.fm_coex.ldo_stabilization_time);
 VAR_5->fm_disturbed_band_margin =
  VAR_4->conf.fm_coex.fm_disturbed_band_margin;
 VAR_5->swallow_clk_diff = VAR_4->conf.fm_coex.swallow_clk_diff;

 VAR_6 = FUNC_4(VAR_4, VAR_0, VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_6("acx fm coex setting failed: %d", VAR_6);
  goto out;
 }

out:
 FUNC_2(VAR_5);
 return VAR_6;
}
