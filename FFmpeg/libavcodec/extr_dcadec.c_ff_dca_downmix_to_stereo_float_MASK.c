
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* vector_fmac_scalar ) (float*,float*,int,int) ;int (* vector_fmul_scalar ) (float*,float*,int,int) ;} ;
typedef TYPE_1__ AVFloatDSPContext ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (float*,float*,int,int) ;
 int FUNC_5 (float*,float*,int,int) ;
 int FUNC_6 (float*,float*,int,int) ;
 int FUNC_7 (float*,float*,int,int) ;

void FUNC_8(AVFloatDSPContext *VAR_3, float **VAR_4,
                                    int *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = FUNC_2(VAR_7);
    int *VAR_11 = VAR_5 + FUNC_3(VAR_7);
    const float VAR_12 = 1.0f / (1 << 15);

    FUNC_1(FUNC_0(VAR_7));


    VAR_8 = (VAR_7 & VAR_1);
    VAR_3->vector_fmul_scalar(VAR_4[VAR_0], VAR_4[VAR_0],
                             VAR_5[VAR_8 ] * VAR_12, VAR_6);
    VAR_3->vector_fmul_scalar(VAR_4[VAR_2], VAR_4[VAR_2],
                             VAR_11[VAR_8 + 1] * VAR_12, VAR_6);


    for (VAR_9 = 0; VAR_9 <= VAR_10; VAR_9++) {
        if (!(VAR_7 & (1U << VAR_9)))
            continue;

        if (*VAR_5 && VAR_9 != VAR_0)
            VAR_3->vector_fmac_scalar(VAR_4[VAR_0], VAR_4[VAR_9],
                                     *VAR_5 * VAR_12, VAR_6);

        if (*VAR_11 && VAR_9 != VAR_2)
            VAR_3->vector_fmac_scalar(VAR_4[VAR_2], VAR_4[VAR_9],
                                     *VAR_11 * VAR_12, VAR_6);

        VAR_5++;
        VAR_11++;
    }
}
