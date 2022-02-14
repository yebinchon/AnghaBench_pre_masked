
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* weighted_vector_sumf ) (float*,float*,float*,double,double,int ) ;} ;
typedef TYPE_1__ ACELPVContext ;


 int VAR_0 ;
 int FUNC_0 (float*,float*,float*,double,double,int ) ;

__attribute__((used)) static void FUNC_1(ACELPVContext *VAR_1, float VAR_2[4][VAR_0], float *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
        VAR_1->weighted_vector_sumf(VAR_2[VAR_4], VAR_2[3], VAR_3,
                                0.25 * (3 - VAR_4), 0.25 * (VAR_4 + 1),
                                VAR_0);
}
