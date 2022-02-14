
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* mdct_calc ) (TYPE_1__*,int *,int const*) ;} ;
typedef int FFTSample ;
typedef TYPE_1__ FFTContext ;


 int FUNC_0 (TYPE_1__*,int *,int const*) ;
 int FUNC_1 (TYPE_1__*,int *,int const*) ;

__attribute__((used)) static inline void FUNC_2(FFTContext *VAR_0, FFTSample *VAR_1, const FFTSample *VAR_2)
{



    VAR_0->mdct_calc(VAR_0, VAR_1, VAR_2);

}
