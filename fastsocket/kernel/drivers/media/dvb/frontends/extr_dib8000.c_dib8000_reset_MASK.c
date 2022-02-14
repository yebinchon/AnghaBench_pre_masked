
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct TYPE_4__ {int drives; int div_cfg; TYPE_1__* pll; } ;
struct dib8000_state {int revision; TYPE_2__ cfg; scalar_t__ isdbt_cfg_loaded; int * current_agc; int i2c_master; int i2c; } ;
struct TYPE_3__ {scalar_t__ ifreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 scalar_t__ FUNC_2 (struct dib8000_state*) ;
 int FUNC_3 (struct dib8000_state*) ;
 int FUNC_4 (struct dib8000_state*) ;
 int FUNC_5 (struct dib8000_state*,int ) ;
 int FUNC_6 (struct dib8000_state*,int) ;
 scalar_t__ FUNC_7 (struct dib8000_state*,int ) ;
 int FUNC_8 (struct dib8000_state*,int ) ;
 int FUNC_9 (struct dib8000_state*,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct dvb_frontend *VAR_8)
{
 struct dib8000_state *VAR_9 = VAR_8->demodulator_priv;

 FUNC_9(VAR_9, 1287, 0x0003);

 if ((VAR_9->revision = FUNC_0(&VAR_9->i2c)) == 0)
  return -VAR_5;

 if (VAR_9->revision == 0x8000)
  FUNC_11("error : dib8000 MA not supported");

 FUNC_10(&VAR_9->i2c_master);

 FUNC_8(VAR_9, VAR_0);


 FUNC_5(VAR_9, VAR_4);


 FUNC_9(VAR_9, 770, 0xffff);
 FUNC_9(VAR_9, 771, 0xffff);
 FUNC_9(VAR_9, 772, 0xfffc);
 FUNC_9(VAR_9, 898, 0x000c);
 FUNC_9(VAR_9, 1280, 0x004d);
 FUNC_9(VAR_9, 1281, 0x000c);

 FUNC_9(VAR_9, 770, 0x0000);
 FUNC_9(VAR_9, 771, 0x0000);
 FUNC_9(VAR_9, 772, 0x0000);
 FUNC_9(VAR_9, 898, 0x0004);
 FUNC_9(VAR_9, 1280, 0x0000);
 FUNC_9(VAR_9, 1281, 0x0000);


 if (VAR_9->cfg.drives)
  FUNC_9(VAR_9, 906, VAR_9->cfg.drives);
 else {
  FUNC_11("using standard PAD-drive-settings, please adjust settings in config-struct to be optimal.");
  FUNC_9(VAR_9, 906, 0x2d98);
 }

 FUNC_3(VAR_9);

 if (FUNC_2(VAR_9) != 0)
  FUNC_11("GPIO reset was not successful.");

 if (FUNC_7(VAR_9, VAR_6) != 0)
  FUNC_11("OUTPUT_MODE could not be resetted.");

 VAR_9->current_agc = ((void*)0);



 if (VAR_9->cfg.pll->ifreq == 0)
  FUNC_9(VAR_9, 40, 0x0755);
 else
  FUNC_9(VAR_9, 40, 0x1f55);

 {
  u16 VAR_10 = 0, VAR_11;
  const u16 *VAR_12;
  VAR_12 = VAR_7;
  VAR_10 = *VAR_12++;
  while (VAR_10) {
   VAR_11 = *VAR_12++;
   do {
    FUNC_9(VAR_9, VAR_11, *VAR_12++);
    VAR_11++;
   } while (--VAR_10);
   VAR_10 = *VAR_12++;
  }
 }
 VAR_9->isdbt_cfg_loaded = 0;


 if (VAR_9->cfg.div_cfg != 0)
  FUNC_9(VAR_9, 903, VAR_9->cfg.div_cfg);


 FUNC_9(VAR_9, 1285, FUNC_1(VAR_9, 1285) & ~(1 << 1));

 FUNC_6(VAR_9, 6000);

 FUNC_5(VAR_9, VAR_3);
 FUNC_4(VAR_9);
 FUNC_5(VAR_9, VAR_2);

 FUNC_8(VAR_9, VAR_1);

 return 0;
}
