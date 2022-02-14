
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int psg_preamp; int fm_preamp; int hq_fm; int psgBoostNoise; int lp_range; int low_freq; int high_freq; double lg; double mg; double hg; int dac_bits; int ym2413; int addr_error; int ntsc; scalar_t__ render; scalar_t__ gg_extra; scalar_t__ overscan; scalar_t__ hot_swap; scalar_t__ lock_on; scalar_t__ bios; scalar_t__ force_dtack; scalar_t__ master_clock; scalar_t__ vdp_mode; scalar_t__ region_detect; scalar_t__ system; scalar_t__ mono; scalar_t__ filter; int version; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(void)
{

   FUNC_0(VAR_1.version,VAR_0,16);


   VAR_1.psg_preamp = 150;
   VAR_1.fm_preamp = 100;
   VAR_1.hq_fm = 1;
   VAR_1.psgBoostNoise = 1;
   VAR_1.filter = 0;
   VAR_1.lp_range = 0x9999;
   VAR_1.low_freq = 880;
   VAR_1.high_freq = 5000;
   VAR_1.lg = 1.0;
   VAR_1.mg = 1.0;
   VAR_1.hg = 1.0;
   VAR_1.dac_bits = 14;
   VAR_1.ym2413 = 2;
   VAR_1.mono = 0;


   VAR_1.system = 0;
   VAR_1.region_detect = 0;
   VAR_1.vdp_mode = 0;
   VAR_1.master_clock = 0;
   VAR_1.force_dtack = 0;
   VAR_1.addr_error = 1;
   VAR_1.bios = 0;
   VAR_1.lock_on = 0;
   VAR_1.hot_swap = 0;


   VAR_1.overscan = 0;
   VAR_1.gg_extra = 0;




   VAR_1.render = 0;
}
