
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_params {scalar_t__ freq; } ;
struct stb0899_internal {int sub_dir; long sub_range; int srch_range; int tuner_offst; scalar_t__ freq; } ;
struct stb0899_state {struct stb0899_params params; struct stb0899_internal internal; } ;


 long FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct stb0899_state *VAR_0)
{
 struct stb0899_internal *VAR_1 = &VAR_0->internal;
 struct stb0899_params *VAR_2 = &VAR_0->params;

 long VAR_3;

 if (VAR_1->sub_dir > 0) {
  VAR_3 = VAR_1->sub_range;
  VAR_1->sub_range = FUNC_0((VAR_1->srch_range / 2) -
       (VAR_1->tuner_offst + VAR_1->sub_range / 2),
        VAR_1->sub_range);

  if (VAR_1->sub_range < 0)
   VAR_1->sub_range = 0;

  VAR_1->tuner_offst += (VAR_3 + VAR_1->sub_range) / 2;
 }

 VAR_1->freq = VAR_2->freq + (VAR_1->sub_dir * VAR_1->tuner_offst) / 1000;
 VAR_1->sub_dir = -VAR_1->sub_dir;
}
