
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dibx000_agc_config {int band_caps; int setup; int inv_gain; int time_stabiliz; int alpha_level; int thlock; int alpha_mant; int alpha_exp; int beta_mant; int beta_exp; int wbd_ref; int wbd_sel; int perform_agc_softsplit; int wbd_inv; int wbd_alpha; int agc1_max; int agc1_min; int agc2_max; int agc2_min; int agc1_pt1; int agc1_pt2; int agc1_pt3; int agc1_slope1; int agc1_slope2; int agc2_pt1; int agc2_pt2; int agc2_slope1; int agc2_slope2; } ;
struct TYPE_2__ {int agc_config_count; struct dibx000_agc_config* agc; } ;
struct dib7000p_state {int current_band; int wbd_ref; struct dibx000_agc_config* current_agc; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib7000p_state*,int,int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_1, u8 VAR_2)
{
 struct dibx000_agc_config *VAR_3 = ((void*)0);
 int VAR_4;
 if (VAR_1->current_band == VAR_2 && VAR_1->current_agc != ((void*)0))
  return 0;
 VAR_1->current_band = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_1->cfg.agc_config_count; VAR_4++)
  if (VAR_1->cfg.agc[VAR_4].band_caps & VAR_2) {
   VAR_3 = &VAR_1->cfg.agc[VAR_4];
   break;
  }

 if (VAR_3 == ((void*)0)) {
  FUNC_1( "no valid AGC configuration found for band 0x%02x",VAR_2);
  return -VAR_0;
 }

 VAR_1->current_agc = VAR_3;


 FUNC_0(VAR_1, 75 , VAR_3->setup );
 FUNC_0(VAR_1, 76 , VAR_3->inv_gain );
 FUNC_0(VAR_1, 77 , VAR_3->time_stabiliz );
 FUNC_0(VAR_1, 100, (VAR_3->alpha_level << 12) | VAR_3->thlock);


 FUNC_0(VAR_1, 101, (VAR_3->alpha_mant << 5) | VAR_3->alpha_exp);
 FUNC_0(VAR_1, 102, (VAR_3->beta_mant << 6) | VAR_3->beta_exp);


 FUNC_1( "WBD: ref: %d, sel: %d, active: %d, alpha: %d",
  VAR_1->wbd_ref != 0 ? VAR_1->wbd_ref : VAR_3->wbd_ref, VAR_3->wbd_sel, !VAR_3->perform_agc_softsplit, VAR_3->wbd_sel);

 if (VAR_1->wbd_ref != 0)
  FUNC_0(VAR_1, 105, (VAR_3->wbd_inv << 12) | VAR_1->wbd_ref);
 else
  FUNC_0(VAR_1, 105, (VAR_3->wbd_inv << 12) | VAR_3->wbd_ref);

 FUNC_0(VAR_1, 106, (VAR_3->wbd_sel << 13) | (VAR_3->wbd_alpha << 9) | (VAR_3->perform_agc_softsplit << 8));

 FUNC_0(VAR_1, 107, VAR_3->agc1_max);
 FUNC_0(VAR_1, 108, VAR_3->agc1_min);
 FUNC_0(VAR_1, 109, VAR_3->agc2_max);
 FUNC_0(VAR_1, 110, VAR_3->agc2_min);
 FUNC_0(VAR_1, 111, (VAR_3->agc1_pt1 << 8) | VAR_3->agc1_pt2);
 FUNC_0(VAR_1, 112, VAR_3->agc1_pt3);
 FUNC_0(VAR_1, 113, (VAR_3->agc1_slope1 << 8) | VAR_3->agc1_slope2);
 FUNC_0(VAR_1, 114, (VAR_3->agc2_pt1 << 8) | VAR_3->agc2_pt2);
 FUNC_0(VAR_1, 115, (VAR_3->agc2_slope1 << 8) | VAR_3->agc2_slope2);
 return 0;
}
