
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct max2165_priv {int tf_ntch_low_cfg; int tf_ntch_hi_cfg; int tf_balun_low_ref; int tf_balun_hi_ref; TYPE_1__* config; } ;
struct TYPE_2__ {int osc_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,int*,int*) ;
 int FUNC_2 (struct max2165_priv*,int ,int,int) ;
 int FUNC_3 (struct max2165_priv*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max2165_priv *VAR_5, u32 VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 u32 VAR_9;
 u32 VAR_10, VAR_11;


 FUNC_1(VAR_6 / 1000, VAR_5->config->osc_clk * 1000,
  &VAR_10, &VAR_11);


 VAR_11 >>= 12;

 FUNC_3(VAR_5, VAR_3, VAR_10);
 FUNC_2(VAR_5, VAR_2, 0x0F, VAR_11 >> 16);
 FUNC_3(VAR_5, VAR_1, VAR_11 >> 8);
 FUNC_3(VAR_5, VAR_0, VAR_11);


 VAR_8 = (VAR_6 < 725000000) ?
  VAR_5->tf_ntch_low_cfg : VAR_5->tf_ntch_hi_cfg;


 VAR_9 = VAR_5->tf_balun_low_ref;
 VAR_9 += (VAR_5->tf_balun_hi_ref - VAR_5->tf_balun_low_ref)
  * (VAR_6 / 1000 - 470000) / (780000 - 470000);

 VAR_7 = VAR_9;
 FUNC_0("tf = %X\n", VAR_7);
 VAR_7 |= VAR_8 << 4;

 FUNC_3(VAR_5, VAR_4, VAR_7);

 return 0;
}
