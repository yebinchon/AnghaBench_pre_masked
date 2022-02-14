
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bw; scalar_t__ tuner_is_baseband; scalar_t__ mobile_mode; scalar_t__ dvbt_mode; } ;
struct dib7000m_state {int revision; int reg_offs; TYPE_2__ cfg; int internal_clk; } ;
struct TYPE_3__ {int internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dib7000m_state*,int) ;
 scalar_t__ FUNC_1 (struct dib7000m_state*) ;
 int FUNC_2 (struct dib7000m_state*) ;
 int FUNC_3 (struct dib7000m_state*) ;
 int FUNC_4 (struct dib7000m_state*,int ) ;
 int FUNC_5 (struct dib7000m_state*,int) ;
 scalar_t__ FUNC_6 (struct dib7000m_state*,int ) ;
 int FUNC_7 (struct dib7000m_state*,int ) ;
 int FUNC_8 (struct dib7000m_state*,int ) ;
 int FUNC_9 (struct dib7000m_state*,int,int) ;
 int FUNC_10 (struct dib7000m_state*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct dib7000m_state *VAR_8)
{
 FUNC_7(VAR_8, VAR_0);


 FUNC_4(VAR_8, VAR_4);


 FUNC_9(VAR_8, 898, 0xffff);
 FUNC_9(VAR_8, 899, 0xffff);
 FUNC_9(VAR_8, 900, 0xff0f);
 FUNC_9(VAR_8, 901, 0xfffc);

 FUNC_9(VAR_8, 898, 0);
 FUNC_9(VAR_8, 899, 0);
 FUNC_9(VAR_8, 900, 0);
 FUNC_9(VAR_8, 901, 0);

 if (VAR_8->revision == 0x4000)
  FUNC_2(VAR_8);
 else
  FUNC_10(VAR_8);

 if (FUNC_1(VAR_8) != 0)
  FUNC_11( "GPIO reset was not successful.");

 if (FUNC_6(VAR_8, VAR_5) != 0)
  FUNC_11( "OUTPUT_MODE could not be reset.");


 FUNC_9(VAR_8, 1794, FUNC_0(VAR_8, 1794) & ~(1 << 1) );

 FUNC_5(VAR_8, 8000);

 FUNC_4(VAR_8, VAR_3);
 FUNC_3(VAR_8);
 FUNC_4(VAR_8, VAR_2);

 if (VAR_8->cfg.dvbt_mode)
  FUNC_9(VAR_8, 1796, 0x0);

 if (VAR_8->cfg.mobile_mode)
  FUNC_9(VAR_8, 261 + VAR_8->reg_offs, 2);
 else
  FUNC_9(VAR_8, 224 + VAR_8->reg_offs, 1);


 if(VAR_8->cfg.tuner_is_baseband)
  FUNC_9(VAR_8, 36, 0x0755);
 else
  FUNC_9(VAR_8, 36, 0x1f55);


 if (VAR_8->revision == 0x4000)
  FUNC_9(VAR_8, 909, (3 << 10) | (1 << 6));
 else
  FUNC_9(VAR_8, 909, (3 << 4) | 1);

 FUNC_8(VAR_8, VAR_7);
 FUNC_8(VAR_8, VAR_6);

 FUNC_7(VAR_8, VAR_1);

 VAR_8->internal_clk = VAR_8->cfg.bw->internal;

 return 0;
}
