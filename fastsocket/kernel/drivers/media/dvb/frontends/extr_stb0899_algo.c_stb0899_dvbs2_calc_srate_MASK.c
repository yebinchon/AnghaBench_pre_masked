
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int master_clk; int srate; } ;
struct stb0899_state {struct stb0899_config* config; struct stb0899_internal internal; } ;
struct stb0899_config {int btr_nco_bits; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct stb0899_state *VAR_0)
{
 struct stb0899_internal *VAR_1 = &VAR_0->internal;
 struct stb0899_config *VAR_2 = VAR_0->config;

 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10;

 VAR_3 = (VAR_1->master_clk * 2) / (5 * VAR_1->srate);
 VAR_3 = (VAR_3 == 0) ? 1 : VAR_3;
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = 1 << VAR_4;
 VAR_9 = VAR_1->master_clk / 1000;
 VAR_10 = VAR_1->srate / 1000;

 if (VAR_5 <= 4) {
  VAR_7 = (VAR_5 * (1 << (VAR_2->btr_nco_bits - 1))) / VAR_9;
  VAR_6 = (VAR_5 * (1 << (VAR_2->btr_nco_bits - 1))) % VAR_9;
 } else {
  VAR_7 = (1 << (VAR_2->btr_nco_bits - 1)) / (VAR_9 / 100) * VAR_5 / 100;
  VAR_6 = (VAR_5 * (1 << (VAR_2->btr_nco_bits - 1))) % VAR_9;
 }
 VAR_8 = (VAR_7 * VAR_10) + ((VAR_6 * VAR_10) / VAR_9);

 return VAR_8;
}
