
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int master_clk; int srate; } ;
struct stb0899_state {struct stb0899_config* config; struct stb0899_internal internal; } ;
struct stb0899_config {int btr_nco_bits; int btr_gain_shift_offset; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct stb0899_state*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct stb0899_state *VAR_9)
{
 struct stb0899_internal *VAR_10 = &VAR_9->internal;
 struct stb0899_config *VAR_11 = VAR_9->config;

 u32 VAR_12 = 23, VAR_13 = 707, VAR_14 = 60;
 s32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 s32 VAR_20, VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 u32 VAR_29;

 VAR_15 = (VAR_10->master_clk * 2) / (5 * VAR_10->srate);
 VAR_15 = (VAR_15 == 0) ? 1 : VAR_15;
 VAR_16 = FUNC_0(VAR_15);
 VAR_24 = (1 << VAR_16);

 VAR_12 *= 576000;
 VAR_25 = (1 << VAR_11->btr_nco_bits) / (VAR_10->master_clk / 1000);
 VAR_25 *= (VAR_10->srate / 1000000) * VAR_24;

 if (VAR_25 != 0) {
  VAR_25 = VAR_12 / VAR_25;
  VAR_26 = (4 * VAR_13 * VAR_13) + 1000000;
  VAR_26 = (2 * (VAR_14 * 1000) * 40 * VAR_13) /VAR_26;

  VAR_28 = (VAR_26 * VAR_26) / VAR_25;
  VAR_28 = VAR_28;
  VAR_27 = (2 * VAR_26 * VAR_13) / VAR_25;
  VAR_27 *= 100;

  VAR_22 = FUNC_0(VAR_27) - FUNC_0(10000) - 2;
  VAR_17 = (-1 * VAR_22) + VAR_11->btr_gain_shift_offset;
  VAR_18 = VAR_27 / (1 << VAR_22);
  VAR_18 /= 10000;

  VAR_23 = FUNC_0(VAR_28 + 15) - 20 ;
  VAR_19 = (-1 * VAR_23) + VAR_11->btr_gain_shift_offset;
  VAR_20 = VAR_28 * (1 << (-VAR_23));
  VAR_20 /= 1000000;

  VAR_21 = 0;
  if (VAR_19 > 15) {
   VAR_21 = VAR_19 - 15;
   VAR_19 = 15;
  }
  VAR_29 = FUNC_1(VAR_8, VAR_0);
  FUNC_2(VAR_2, VAR_29, VAR_19);
  FUNC_2(VAR_1, VAR_29, VAR_20);
  FUNC_2(VAR_4, VAR_29, VAR_17);
  FUNC_2(VAR_3, VAR_29, VAR_18);
  FUNC_2(VAR_5, VAR_29, VAR_21);
  FUNC_3(VAR_9, VAR_8, VAR_6, VAR_7, VAR_29);
 } else
  FUNC_3(VAR_9, VAR_8, VAR_6, VAR_7, 0xc4c4f);
}
