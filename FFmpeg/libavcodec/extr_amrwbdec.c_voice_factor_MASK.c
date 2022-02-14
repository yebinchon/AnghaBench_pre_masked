
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* dot_productf ) (float*,float*,int ) ;} ;
typedef TYPE_1__ CELPMContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (float*,float*,int ) ;
 scalar_t__ FUNC_1 (float*,float*,int ) ;

__attribute__((used)) static float FUNC_2(float *VAR_1, float VAR_2,
                          float *VAR_3, float VAR_4,
                          CELPMContext *VAR_5)
{
    double VAR_6 = (double) VAR_5->dot_productf(VAR_1, VAR_1,
                                                          VAR_0) *
                    VAR_2 * VAR_2;
    double VAR_7 = (double) VAR_5->dot_productf(VAR_3, VAR_3,
                                                          VAR_0) *
                    VAR_4 * VAR_4;

    return (VAR_6 - VAR_7) / (VAR_6 + VAR_7 + 0.01);
}
