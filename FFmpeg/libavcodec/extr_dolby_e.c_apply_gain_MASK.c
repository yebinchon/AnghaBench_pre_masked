
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fdsp; } ;
struct TYPE_4__ {int (* vector_fmul_scalar ) (float*,float*,float,int) ;} ;
typedef TYPE_2__ DBEContext ;


 int VAR_0 ;
 float* VAR_1 ;
 int FUNC_0 (float*,float*,float,int) ;

__attribute__((used)) static void FUNC_1(DBEContext *VAR_2, int VAR_3, int VAR_4, float *VAR_5)
{
    if (VAR_3 == 960 && VAR_4 == 960)
        return;

    if (VAR_3 == VAR_4) {
        VAR_2->fdsp->vector_fmul_scalar(VAR_5, VAR_5, VAR_1[VAR_4], VAR_0);
    } else {
        float VAR_6 = VAR_1[VAR_3] * (1.0f / (VAR_0 - 1));
        float VAR_7 = VAR_1[VAR_4 ] * (1.0f / (VAR_0 - 1));
        int VAR_8;

        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            VAR_5[VAR_8] *= VAR_6 * (VAR_0 - VAR_8 - 1) + VAR_7 * VAR_8;
    }
}
