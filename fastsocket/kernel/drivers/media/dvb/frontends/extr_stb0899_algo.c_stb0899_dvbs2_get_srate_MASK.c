
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int master_clk; } ;
struct stb0899_state {struct stb0899_config* config; struct stb0899_internal internal; } ;
struct stb0899_config {int btr_nco_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_2(struct stb0899_state *VAR_4)
{
 struct stb0899_internal *VAR_5 = &VAR_4->internal;
 struct stb0899_config *VAR_6 = VAR_4->config;

 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_6->btr_nco_bits / 2;
 VAR_14 = VAR_6->btr_nco_bits - VAR_13 - 1;

 VAR_7 = FUNC_1(VAR_3, VAR_0);

 VAR_12 = FUNC_1(VAR_3, VAR_1);
 VAR_9 = FUNC_0(VAR_2, VAR_12);
 VAR_9 = (1 << VAR_9);

 VAR_10 = VAR_5->master_clk / (1 << VAR_13);
 VAR_11 = VAR_7 / (1 << VAR_14);

 VAR_15 = VAR_5->master_clk % (1 << VAR_13);
 VAR_16 = VAR_7 % (1 << VAR_14);

 VAR_8 = (VAR_10 * VAR_11) + ((VAR_10 * VAR_16) / (1 << VAR_14)) + ((VAR_11 * VAR_15) / (1 << VAR_13));
 VAR_8 /= VAR_9;

 return VAR_8;
}
