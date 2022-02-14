
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_params {int freq; } ;
struct stb0899_internal {long tuner_offst; int sub_dir; int freq; scalar_t__ sub_range; int srch_range; } ;
struct stb0899_state {int frontend; struct stb0899_config* config; struct stb0899_params params; struct stb0899_internal internal; } ;
struct stb0899_config {int (* tuner_get_bandwidth ) (int *,int*) ;} ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct stb0899_state*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static void FUNC_4(struct stb0899_state *VAR_0)
{
 struct stb0899_internal *VAR_1 = &VAR_0->internal;
 struct stb0899_params *VAR_2 = &VAR_0->params;
 struct stb0899_config *VAR_3 = VAR_0->config;

 int VAR_4 = 0;
 u32 VAR_5 = 0;

 if (VAR_3->tuner_get_bandwidth) {
  FUNC_2(&VAR_0->frontend, 1);
  VAR_3->tuner_get_bandwidth(&VAR_0->frontend, &VAR_5);
  FUNC_2(&VAR_0->frontend, 0);
  VAR_4 = VAR_5 - FUNC_1(VAR_0) / 2;
 }

 if (VAR_4 > 0)
  VAR_1->sub_range = FUNC_0(VAR_1->srch_range, VAR_4);
 else
  VAR_1->sub_range = 0;

 VAR_1->freq = VAR_2->freq;
 VAR_1->tuner_offst = 0L;
 VAR_1->sub_dir = 1;
}
