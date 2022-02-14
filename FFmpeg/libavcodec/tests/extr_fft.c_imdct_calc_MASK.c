
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FFTContext {int (* imdct_calc ) (struct FFTContext*,int *,int const*) ;} ;
typedef int FFTSample ;


 int FUNC_0 (struct FFTContext*,int *,int const*) ;
 int FUNC_1 (struct FFTContext*,int *,int const*) ;

__attribute__((used)) static inline void FUNC_2(struct FFTContext *VAR_0, FFTSample *VAR_1, const FFTSample *VAR_2)
{



    VAR_0->imdct_calc(VAR_0, VAR_1, VAR_2);

}
