
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int master_clk; int srate; } ;
struct stb0899_state {struct stb0899_config* config; struct stb0899_internal internal; } ;
struct stb0899_config {int ldpc_max_iter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct stb0899_state*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct stb0899_state *VAR_5)
{
 struct stb0899_internal *VAR_6 = &VAR_5->internal;
 struct stb0899_config *VAR_7 = VAR_5->config;

 s32 VAR_8;
 u32 VAR_9;

 VAR_8 = 17 * (VAR_6->master_clk / 1000);
 VAR_8 += 410000;
 VAR_8 /= (VAR_6->srate / 1000000);
 VAR_8 /= 1000;

 if (VAR_8 > VAR_7->ldpc_max_iter)
  VAR_8 = VAR_7->ldpc_max_iter;

 VAR_9 = FUNC_0(VAR_4, VAR_0);
 FUNC_1(VAR_1, VAR_9, VAR_8);
 FUNC_2(VAR_5, VAR_4, VAR_2, VAR_3, VAR_9);
}
