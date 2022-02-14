
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_params {int freq; } ;
struct stb0899_internal {int srch_range; int freq; int derot_freq; int mclk; int status; } ;
struct stb0899_state {int verbose; struct stb0899_params params; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;

__attribute__((used)) static enum stb0899_status FUNC_1(struct stb0899_state *VAR_3)
{
 struct stb0899_internal *VAR_4 = &VAR_3->internal;
 struct stb0899_params *VAR_5 = &VAR_3->params;

 int VAR_6, VAR_7;

 VAR_6 = VAR_4->srch_range / 2000;
 VAR_7 = VAR_4->freq + (VAR_4->derot_freq * VAR_4->mclk) / 1000;

 if ((VAR_7 >= VAR_5->freq - VAR_6) && (VAR_7 <= VAR_5->freq + VAR_6)) {
  VAR_4->status = VAR_2;
  FUNC_0(VAR_3->verbose, VAR_0, 1, "----> RANGEOK !");
 } else {
  VAR_4->status = VAR_1;
  FUNC_0(VAR_3->verbose, VAR_0, 1, "----> OUT OF RANGE !");
 }

 return VAR_4->status;
}
