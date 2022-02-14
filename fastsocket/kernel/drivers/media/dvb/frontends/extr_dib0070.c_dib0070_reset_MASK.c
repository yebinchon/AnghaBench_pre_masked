
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib0070_state* tuner_priv; } ;
struct dib0070_state {int revision; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ force_crystal_mode; int clock_khz; int osc_buffer_state; int clock_pad_drive; int charge_pump; int enable_third_order_filter; scalar_t__ invert_iq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dib0070_state*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dib0070_state*,int) ;
 int FUNC_2 (struct dvb_frontend*,int,int,int,int ) ;
 int FUNC_3 (struct dib0070_state*) ;
 int FUNC_4 (struct dib0070_state*,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_4)
{
    struct dib0070_state *VAR_5 = VAR_4->tuner_priv;
 u16 VAR_6, VAR_7, *VAR_8;

 FUNC_0(VAR_5);



 if ((FUNC_1(VAR_5, 0x22) >> 9) & 0x1)
  VAR_5->revision = (FUNC_1(VAR_5, 0x1f) >> 8) & 0xff;
 else



  VAR_5->revision = VAR_0;


 FUNC_5("Revision: %x", VAR_5->revision);

 if (VAR_5->revision == VAR_1) {
  FUNC_5("Error: this driver is not to be used meant for P1D or earlier");
  return -VAR_2;
 }

 VAR_8 = (u16 *) VAR_3;
 VAR_6 = FUNC_6(VAR_8++);
 while (VAR_6) {
  VAR_7 = FUNC_6(VAR_8++);
  do {
   FUNC_4(VAR_5, (u8)VAR_7, FUNC_6(VAR_8++));
   VAR_7++;
  } while (--VAR_6);
  VAR_6 = FUNC_6(VAR_8++);
 }

 if (VAR_5->cfg->force_crystal_mode != 0)
  VAR_7 = VAR_5->cfg->force_crystal_mode;
 else if (VAR_5->cfg->clock_khz >= 24000)
  VAR_7 = 1;
 else
  VAR_7 = 2;


 VAR_7 |= VAR_5->cfg->osc_buffer_state << 3;

 FUNC_4(VAR_5, 0x10, VAR_7);
 FUNC_4(VAR_5, 0x1f, (1 << 8) | ((VAR_5->cfg->clock_pad_drive & 0xf) << 5));

 if (VAR_5->cfg->invert_iq) {
  VAR_7 = FUNC_1(VAR_5, 0x02) & 0xffdf;
  FUNC_4(VAR_5, 0x02, VAR_7 | (1 << 5));
 }

    if (VAR_5->revision == VAR_0)
 FUNC_2(VAR_4, 2, 4, 3, 0);
    else
  FUNC_2(VAR_4, 5, 4, VAR_5->cfg->charge_pump, VAR_5->cfg->enable_third_order_filter);

 FUNC_4(VAR_5, 0x01, (54 << 9) | 0xc8);

    FUNC_3(VAR_5);

    return 0;
}
