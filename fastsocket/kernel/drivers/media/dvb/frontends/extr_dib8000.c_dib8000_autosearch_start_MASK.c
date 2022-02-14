
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct TYPE_10__ {TYPE_4__* pll; } ;
struct TYPE_7__ {scalar_t__ transmission_mode; scalar_t__ guard_interval; scalar_t__ isdbt_sb_mode; TYPE_1__* layer; scalar_t__ inversion; } ;
struct TYPE_8__ {TYPE_2__ dtv_property_cache; } ;
struct dib8000_state {TYPE_5__ cfg; TYPE_3__ fe; } ;
struct TYPE_9__ {int internal; } ;
struct TYPE_6__ {int segment_count; scalar_t__ interleaving; int fec; int modulation; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,unsigned char,int) ;
 int FUNC_2 (struct dib8000_state*,int,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_6)
{
 u8 VAR_7;
 u32 VAR_8;
 struct dib8000_state *VAR_9 = VAR_6->demodulator_priv;

 int VAR_10 = 0;

 VAR_9->fe.dtv_property_cache.inversion = 0;
 if (!VAR_9->fe.dtv_property_cache.isdbt_sb_mode)
  VAR_9->fe.dtv_property_cache.layer[0].segment_count = 13;
 VAR_9->fe.dtv_property_cache.layer[0].modulation = VAR_3;
 VAR_9->fe.dtv_property_cache.layer[0].fec = VAR_0;
 VAR_9->fe.dtv_property_cache.layer[0].interleaving = 0;


 if (VAR_9->fe.dtv_property_cache.isdbt_sb_mode) {
  VAR_9->fe.dtv_property_cache.transmission_mode = VAR_4;
  VAR_9->fe.dtv_property_cache.guard_interval = VAR_1;
  VAR_10 = 7;
  FUNC_2(VAR_9, 0, (FUNC_0(VAR_9, 0) & 0x9fff) | (1 << 13));
 } else {
  if (VAR_9->fe.dtv_property_cache.guard_interval == VAR_2) {
   if (VAR_9->fe.dtv_property_cache.transmission_mode == VAR_5) {
    VAR_10 = 7;
    FUNC_2(VAR_9, 0, (FUNC_0(VAR_9, 0) & 0x9fff) | (1 << 13));
   } else
    VAR_10 = 3;
  } else {
   if (VAR_9->fe.dtv_property_cache.transmission_mode == VAR_5) {
    VAR_10 = 2;
    FUNC_2(VAR_9, 0, (FUNC_0(VAR_9, 0) & 0x9fff) | (1 << 13));
   } else
    VAR_10 = 0;
  }

  if (VAR_9->fe.dtv_property_cache.transmission_mode == VAR_5)
   VAR_9->fe.dtv_property_cache.transmission_mode = VAR_4;
  if (VAR_9->fe.dtv_property_cache.guard_interval == VAR_2)
   VAR_9->fe.dtv_property_cache.guard_interval = VAR_1;

  FUNC_3("using list for autosearch : %d", VAR_10);
  FUNC_1(VAR_9, (unsigned char)VAR_10, 1);


  VAR_7 = 1;


  FUNC_2(VAR_9, 6, 0x4);
  FUNC_2(VAR_9, 7, 0x8);
  FUNC_2(VAR_9, 8, 0x1000);


  VAR_8 = 50 * VAR_9->cfg.pll->internal * VAR_7;
  FUNC_2(VAR_9, 11, (u16) ((VAR_8 >> 16) & 0xffff));
  FUNC_2(VAR_9, 12, (u16) (VAR_8 & 0xffff));
  VAR_8 = 100 * VAR_9->cfg.pll->internal * VAR_7;
  FUNC_2(VAR_9, 13, (u16) ((VAR_8 >> 16) & 0xffff));
  FUNC_2(VAR_9, 14, (u16) (VAR_8 & 0xffff));
  VAR_8 = 1000 * VAR_9->cfg.pll->internal * VAR_7;
  FUNC_2(VAR_9, 15, (u16) ((VAR_8 >> 16) & 0xffff));
  FUNC_2(VAR_9, 16, (u16) (VAR_8 & 0xffff));

  VAR_8 = FUNC_0(VAR_9, 0);
  FUNC_2(VAR_9, 0, (u16) ((1 << 15) | VAR_8));
  FUNC_0(VAR_9, 1284);
  FUNC_2(VAR_9, 0, (u16) VAR_8);

 }

 return 0;
}
