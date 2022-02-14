
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int psg_preamp; int fm_preamp; int hq_fm; int filter; int lp_range; int low_freq; int high_freq; double lg; double mg; double hg; int dac_bits; int ym2413; int addr_error; int aspect; int overscan; int* gun_cursor; TYPE_1__* input; scalar_t__ invert_mouse; scalar_t__ bilinear; scalar_t__ ntsc; scalar_t__ render; scalar_t__ gg_extra; scalar_t__ yscale; scalar_t__ xscale; scalar_t__ yshift; scalar_t__ xshift; scalar_t__ vdp_mode; scalar_t__ master_clock; scalar_t__ system; scalar_t__ bios; scalar_t__ hot_swap; scalar_t__ lock_on; scalar_t__ force_dtack; scalar_t__ region_detect; scalar_t__ psgBoostNoise; } ;
struct TYPE_5__ {void** system; } ;
struct TYPE_4__ {int padtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_0(void)
{
    int VAR_5;


 VAR_3.psg_preamp = 150;
 VAR_3.fm_preamp = 100;
 VAR_3.hq_fm = 1;
 VAR_3.psgBoostNoise = 0;
 VAR_3.filter = 1;
 VAR_3.lp_range = 60;
 VAR_3.low_freq = 200;
 VAR_3.high_freq = 8000;
 VAR_3.lg = 1.0;
 VAR_3.mg = 1.0;
 VAR_3.hg = 1.0;
 VAR_3.dac_bits = 14;
    VAR_3.ym2413 = 2;


 VAR_3.region_detect = 0;
 VAR_3.force_dtack = 0;
 VAR_3.addr_error = 1;

 VAR_3.lock_on = 0;

 VAR_3.hot_swap = 0;
    VAR_3.bios = 0;
    VAR_3.system = 0;
    VAR_3.master_clock = 0;
    VAR_3.vdp_mode = 0;


 VAR_3.xshift = 0;
 VAR_3.yshift = 0;
 VAR_3.xscale = 0;
 VAR_3.yscale = 0;
 VAR_3.aspect = 1;
 VAR_3.overscan = 1;
    VAR_3.gg_extra = 0;
 VAR_3.render = 0;
 VAR_3.ntsc = 0;
 VAR_3.bilinear = 0;


 VAR_4.system[0] = VAR_2;
 VAR_4.system[1] = VAR_2;
 VAR_3.gun_cursor[0] = 1;
 VAR_3.gun_cursor[1] = 1;
 VAR_3.invert_mouse = 0;
    for (VAR_5=0;VAR_5<VAR_1;VAR_5++)
    {
        VAR_3.input[VAR_5].padtype = VAR_0;
    }
}
