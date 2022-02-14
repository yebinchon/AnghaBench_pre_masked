
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend_parameters {int dummy; } ;
struct TYPE_5__ {int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct dib0070_state* tuner_priv; } ;
struct dib0070_wbd_gain_cfg {int freq; int wbd_gain_val; } ;
struct dib0070_tuning {int max_freq; int vco_band; int hfdiv; int vco_multi; int presc; int tuner_enable; int wbdmux; int switch_trim; } ;
struct dib0070_state {int tune_state; int current_rf; int revision; int lo4; int wbd_gain_current; struct dib0070_lna_match const* lna_match; struct dib0070_tuning const* current_tune_table_index; TYPE_2__* cfg; TYPE_4__* fe; } ;
struct dib0070_lna_match {int max_freq; int lna_band; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_7__ {scalar_t__ delivery_system; int isdbt_sb_mode; int isdbt_sb_segment_count; int isdbt_sb_segment_idx; } ;
struct TYPE_8__ {TYPE_3__ dtv_property_cache; } ;
struct TYPE_6__ {int freq_offset_khz_vhf; int freq_offset_khz_uhf; int clock_khz; struct dib0070_wbd_gain_cfg* wbd_gain; int flip_chip; } ;



 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct dib0070_state*,int*) ;
 struct dib0070_lna_match* VAR_9 ;
 struct dib0070_lna_match* VAR_10 ;
 int FUNC_2 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_3 (struct dvb_frontend*,int,int,int,int) ;
 struct dib0070_tuning* VAR_11 ;
 int FUNC_4 (struct dib0070_state*,int,int) ;
 struct dib0070_tuning* VAR_12 ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_13, struct dvb_frontend_parameters *VAR_14)
{
    struct dib0070_state *VAR_15 = VAR_13->tuner_priv;

    const struct dib0070_tuning *VAR_16;
    const struct dib0070_lna_match *VAR_17;

    enum frontend_tune_state *VAR_18 = &VAR_15->tune_state;
    int VAR_19 = 10;

    u8 VAR_20 = (u8)FUNC_0(VAR_13->dtv_property_cache.frequency/1000);
    u32 VAR_21 = VAR_13->dtv_property_cache.frequency/1000 + (VAR_20 == 131 ? VAR_15->cfg->freq_offset_khz_vhf : VAR_15->cfg->freq_offset_khz_uhf);
    if (VAR_15->current_rf != VAR_21) {

 switch (VAR_15->revision) {
 case 130:
     VAR_16 = VAR_12;
     VAR_17 = VAR_9;
     break;
 default:
     VAR_16 = VAR_11;
     if (VAR_15->cfg->flip_chip)
  VAR_17 = VAR_10;
     else
  VAR_17 = VAR_9;
     break;
 }
 while (VAR_21 > VAR_16->max_freq)
     VAR_16++;
 while (VAR_21 > VAR_17->max_freq)
     VAR_17++;

 VAR_15->current_tune_table_index = VAR_16;
 VAR_15->lna_match = VAR_17;
    }

    if (*VAR_18 == VAR_1) {
 FUNC_5("Tuning for Band: %hd (%d kHz)", VAR_20, VAR_21);
 if (VAR_15->current_rf != VAR_21) {
  u8 VAR_22;
  u32 VAR_23, VAR_24, VAR_25, VAR_26;
  u8 VAR_27;

  VAR_15->current_rf = VAR_21;
  VAR_15->lo4 = (VAR_15->current_tune_table_index->vco_band << 11) | (VAR_15->current_tune_table_index->hfdiv << 7);


  FUNC_4(VAR_15, 0x17, 0x30);


  VAR_26 = VAR_15->current_tune_table_index->vco_multi * VAR_21 * 2;

  switch (VAR_20) {
  case 131:
   VAR_22 = (u8) ((VAR_15->cfg->clock_khz + 9999) / 10000);
   break;
  case 132:
   VAR_22 = (u8) ((VAR_15->cfg->clock_khz) / 1000);
   break;
  default:
   VAR_22 = (u8) (VAR_15->cfg->clock_khz / 10000);
   break;
  }
  VAR_25 = VAR_15->cfg->clock_khz / VAR_22;



  switch (VAR_15->revision) {
  case 130:
   VAR_23 = (VAR_26 / VAR_15->current_tune_table_index->presc / VAR_25);
   VAR_24 = (VAR_26 / VAR_15->current_tune_table_index->presc) - VAR_23 * VAR_25;
   break;

  case 128:
  case 129:
  default:
   VAR_23 = (VAR_21 / (VAR_25 / 2));
   VAR_24 = 2 * VAR_21 - VAR_23 * VAR_25;
   break;
  }

  if (VAR_24 < VAR_7)
   VAR_24 = 0;
  else if (VAR_24 < 2 * VAR_7)
   VAR_24 = 2 * VAR_7;
  else if (VAR_24 > (VAR_25 - VAR_7)) {
   VAR_24 = 0;
   VAR_23 += 1;
  } else if (VAR_24 > (VAR_25 - 2 * VAR_7))
   VAR_24 = VAR_25 - 2 * VAR_7;
  VAR_24 = (VAR_24 * 6528) / (VAR_25 / 10);

  VAR_27 = 1;
  if (VAR_24 > 0) {
   VAR_15->lo4 |= (1 << 14) | (1 << 12);
   VAR_27 = 255;
  }


  FUNC_4(VAR_15, 0x11, (u16)VAR_23);
  FUNC_4(VAR_15, 0x12, (VAR_27 << 8) | VAR_22);
  FUNC_4(VAR_15, 0x13, (u16) VAR_24);

  if (VAR_15->revision == 130) {

   if (VAR_20 == VAR_0) {
    FUNC_3(VAR_13, 2, 4, 3, 0);
    FUNC_4(VAR_15, 0x1d, 0xFFFF);
   } else
    FUNC_3(VAR_13, 5, 4, 3, 1);
  }

  FUNC_4(VAR_15, 0x20,
   0x0040 | 0x0020 | 0x0010 | 0x0008 | 0x0002 | 0x0001 | VAR_15->current_tune_table_index->tuner_enable);

  FUNC_5("REFDIV: %hd, FREF: %d", VAR_22, VAR_25);
  FUNC_5("FBDIV: %d, Rest: %d", VAR_23, VAR_24);
  FUNC_5("Num: %hd, Den: %hd, SD: %hd", (u16) VAR_24, VAR_27, (VAR_15->lo4 >> 12) & 0x1);
  FUNC_5("HFDIV code: %hd", VAR_15->current_tune_table_index->hfdiv);
  FUNC_5("VCO = %hd", VAR_15->current_tune_table_index->vco_band);
  FUNC_5("VCOF: ((%hd*%d) << 1))", VAR_15->current_tune_table_index->vco_multi, VAR_21);

  *VAR_18 = VAR_2;
 } else {
  VAR_19 = 50;
  *VAR_18 = VAR_4;
 }
    } else if ((*VAR_18 > VAR_1) && (*VAR_18 < VAR_3)) {

 VAR_19 = FUNC_1(VAR_15, VAR_18);

    } else if (*VAR_18 == VAR_3) {
 const struct dib0070_wbd_gain_cfg *VAR_28 = VAR_15->cfg->wbd_gain;
 if (VAR_28 != ((void*)0)) {
  while (VAR_21/1000 > VAR_28->freq)
   VAR_28++;
  FUNC_4(VAR_15, 0x0f,
   (0 << 15) | (1 << 14) | (3 << 12)
   | (VAR_28->wbd_gain_val << 9) | (0 << 8) | (1 << 7)
   | (VAR_15->current_tune_table_index->wbdmux << 0));
  VAR_15->wbd_gain_current = VAR_28->wbd_gain_val;
 } else {
   FUNC_4(VAR_15, 0x0f,
       (0 << 15) | (1 << 14) | (3 << 12) | (6 << 9) | (0 << 8) | (1 << 7) | (VAR_15->current_tune_table_index->
              wbdmux << 0));
     VAR_15->wbd_gain_current = 6;
 }

 FUNC_4(VAR_15, 0x06, 0x3fff);
  FUNC_4(VAR_15, 0x07,
      (VAR_15->current_tune_table_index->switch_trim << 11) | (7 << 8) | (VAR_15->lna_match->lna_band << 3) | (3 << 0));
 FUNC_4(VAR_15, 0x08, (VAR_15->lna_match->lna_band << 10) | (3 << 7) | (127));
 FUNC_4(VAR_15, 0x0d, 0x0d80);


 FUNC_4(VAR_15, 0x18, 0x07ff);
 FUNC_4(VAR_15, 0x17, 0x0033);


 *VAR_18 = VAR_4;
    } else if (*VAR_18 == VAR_4) {
 FUNC_2(VAR_13, VAR_14);
 *VAR_18 = VAR_5;
    } else {
 VAR_19 = VAR_6;
    }
    return VAR_19;
}
