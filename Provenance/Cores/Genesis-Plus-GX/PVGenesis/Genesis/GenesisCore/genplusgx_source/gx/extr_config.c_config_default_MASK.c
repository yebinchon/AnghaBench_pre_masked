
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int psg_preamp; int fm_preamp; int hq_fm; int psgBoostNoise; int filter; int lp_range; int low_freq; int high_freq; double lg; double mg; double hg; int dac_bits; int ym2413; int addr_error; int aspect; int overscan; int vsync; int bilinear; int vfilter; int render; int tv_mode; double gamma; int* gun_cursor; int s_auto; int v_prog; int s_default; int screen_w; double bgm_volume; double sfx_volume; TYPE_1__* input; int ** lastdir; scalar_t__ bg_overlay; scalar_t__ l_device; scalar_t__ s_device; scalar_t__ autocheat; scalar_t__ autoload; scalar_t__ cd_leds; scalar_t__ invert_mouse; scalar_t__ trap; scalar_t__ ntsc; scalar_t__ gg_extra; scalar_t__ yscale; scalar_t__ xscale; scalar_t__ yshift; scalar_t__ xshift; scalar_t__ hot_swap; scalar_t__ lock_on; scalar_t__ bios; scalar_t__ force_dtack; scalar_t__ master_clock; scalar_t__ vdp_mode; scalar_t__ region_detect; scalar_t__ system; scalar_t__ mono; int version; } ;
struct TYPE_9__ {void** system; } ;
struct TYPE_8__ {int viTVMode; } ;
struct TYPE_7__ {int device; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int,int ,int *,int ,int,int,int *) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (char*,char*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 void* VAR_4 ;
 TYPE_2__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;

 double VAR_9 ;

 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_3__ VAR_12 ;
 int FUNC_12 () ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (int ,int ,int) ;
 TYPE_2__* VAR_15 ;

void FUNC_16(void)
{

  FUNC_15(VAR_11.version,VAR_0,16);


  VAR_11.psg_preamp = 150;
  VAR_11.fm_preamp = 100;
  VAR_11.hq_fm = 1;
  VAR_11.psgBoostNoise = 1;
  VAR_11.filter = 1;
  VAR_11.lp_range = 0x9999;
  VAR_11.low_freq = 880;
  VAR_11.high_freq = 5000;
  VAR_11.lg = 1.0;
  VAR_11.mg = 1.0;
  VAR_11.hg = 1.0;
  VAR_11.dac_bits = 14;
  VAR_11.ym2413 = 2;
  VAR_11.mono = 0;


  VAR_11.system = 0;
  VAR_11.region_detect = 0;
  VAR_11.vdp_mode = 0;
  VAR_11.master_clock = 0;
  VAR_11.force_dtack = 0;
  VAR_11.addr_error = 1;
  VAR_11.bios = 0;
  VAR_11.lock_on = 0;
  VAR_11.hot_swap = 0;


  VAR_11.xshift = 0;
  VAR_11.yshift = 0;
  VAR_11.xscale = 0;
  VAR_11.yscale = 0;
  VAR_11.aspect = 1;
  VAR_11.overscan = 3;
  VAR_11.gg_extra = 0;
  VAR_11.ntsc = 0;
  VAR_11.vsync = 1;
  VAR_11.bilinear = 1;
  VAR_11.vfilter = 1;

  if (FUNC_8())
  {
    VAR_11.render = 2;
  }
  else
  {
    VAR_11.render = 0;
  }

  switch (VAR_15->viTVMode >> 2)
  {
    case 128:
      VAR_11.tv_mode = 1;
      break;

    case 129:
      VAR_11.tv_mode = 2;
      break;

    default:
      VAR_11.tv_mode = 0;
      break;
  }







  VAR_11.gun_cursor[0] = 1;
  VAR_11.gun_cursor[1] = 1;
  VAR_11.invert_mouse = 0;


  VAR_11.cd_leds = 0;


  VAR_11.autoload = 0;
  VAR_11.autocheat = 0;



  VAR_11.s_auto = 0;
  VAR_11.v_prog = 1;

  VAR_11.s_default = 1;
  VAR_11.s_device = 0;
  VAR_11.l_device = 0;
  VAR_11.bg_overlay = 0;
  VAR_11.screen_w = 658;
  VAR_11.bgm_volume = 100.0;
  VAR_11.sfx_volume = 100.0;
  FUNC_14 (VAR_11.lastdir[0][VAR_7], "%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[1][VAR_7], "%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[2][VAR_7], "%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[3][VAR_7], "%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[4][VAR_7], "%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[0][VAR_6], "dvd:%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[1][VAR_6], "dvd:%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[2][VAR_6], "dvd:%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[3][VAR_6], "dvd:%s/roms/", VAR_1);
  FUNC_14 (VAR_11.lastdir[4][VAR_6], "dvd:%s/roms/", VAR_1);



  int VAR_16 = FUNC_10();



  FUNC_5();
  if (FUNC_4(0) & VAR_3)
  {

    VAR_11.v_prog ^= 1;
    FUNC_1(0);
    int VAR_17 = FUNC_0();
    FUNC_2(VAR_17,VAR_10,44100,0,(u8 *)VAR_13,VAR_14,200,200,((void*)0));
    FUNC_13 (2);
    FUNC_1(1);
  }


  if (FUNC_8() && VAR_11.v_prog)
  {
    VAR_15 = &VAR_5;
    FUNC_6 (VAR_15);
    FUNC_7();
    FUNC_9();
    FUNC_9();
  }



  if (!VAR_16)
  {
    FUNC_3("Warning","Default Settings restored");
    FUNC_11();
  }


  VAR_12.system[0] = VAR_4;
  VAR_12.system[1] = (VAR_11.input[1].device != -1) ? VAR_4 : VAR_2;
  FUNC_12();
}
