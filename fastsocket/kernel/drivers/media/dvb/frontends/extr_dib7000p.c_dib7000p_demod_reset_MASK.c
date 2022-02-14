
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tuner_is_baseband; } ;
struct dib7000p_state {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 scalar_t__ FUNC_1 (struct dib7000p_state*) ;
 int FUNC_2 (struct dib7000p_state*) ;
 int FUNC_3 (struct dib7000p_state*) ;
 int FUNC_4 (struct dib7000p_state*,int ) ;
 int FUNC_5 (struct dib7000p_state*,int) ;
 scalar_t__ FUNC_6 (struct dib7000p_state*,int ) ;
 int FUNC_7 (struct dib7000p_state*,int ) ;
 int FUNC_8 (struct dib7000p_state*,int ) ;
 int FUNC_9 (struct dib7000p_state*,int,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct dib7000p_state *VAR_7)
{
 FUNC_7(VAR_7, VAR_0);

 FUNC_4(VAR_7, VAR_4);


 FUNC_9(VAR_7, 770, 0xffff);
 FUNC_9(VAR_7, 771, 0xffff);
 FUNC_9(VAR_7, 772, 0x001f);
 FUNC_9(VAR_7, 898, 0x0003);

 FUNC_9(VAR_7, 1280, 0x01fc - ((1 << 7) | (1 << 6) | (1 << 5)) );

 FUNC_9(VAR_7, 770, 0);
 FUNC_9(VAR_7, 771, 0);
 FUNC_9(VAR_7, 772, 0);
 FUNC_9(VAR_7, 898, 0);
 FUNC_9(VAR_7, 1280, 0);


 FUNC_2(VAR_7);

 if (FUNC_1(VAR_7) != 0)
  FUNC_10( "GPIO reset was not successful.");

 if (FUNC_6(VAR_7, VAR_5) != 0)
  FUNC_10( "OUTPUT_MODE could not be reset.");


 FUNC_9(VAR_7, 1285, FUNC_0(VAR_7, 1285) & ~(1 << 1) );

 FUNC_5(VAR_7, 8000);

 FUNC_4(VAR_7, VAR_3);
 FUNC_3(VAR_7);
 FUNC_4(VAR_7, VAR_2);


 if(VAR_7->cfg.tuner_is_baseband)
  FUNC_9(VAR_7, 36,0x0755);
 else
  FUNC_9(VAR_7, 36,0x1f55);

 FUNC_8(VAR_7, VAR_6);

 FUNC_7(VAR_7, VAR_1);


 return 0;
}
