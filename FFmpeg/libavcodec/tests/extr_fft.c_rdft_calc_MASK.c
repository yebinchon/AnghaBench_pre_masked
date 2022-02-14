
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* rdft_calc ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ RDFTContext ;
typedef int FFTSample ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static inline void FUNC_2(RDFTContext *VAR_0, FFTSample *VAR_1)
{



    VAR_0->rdft_calc(VAR_0, VAR_1);

}
