
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* postfilter_mem; float* postfilter_mem5k0; int tilt_mem; } ;
typedef TYPE_1__ SiprContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float*,float*,int,int) ;
 int FUNC_1 (float*,float*,float*,int,int) ;
 float const* VAR_2 ;
 float const* VAR_3 ;
 int FUNC_2 (int *,double,float*,int) ;
 int FUNC_3 (float*,float*,int) ;

__attribute__((used)) static void FUNC_4(SiprContext *VAR_4, const float *VAR_5, float *VAR_6)
{
    float VAR_7[VAR_1 + VAR_0];
    float *VAR_8 = VAR_7 + VAR_0;
    float VAR_9[VAR_0];
    float VAR_10[VAR_0];
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_10[VAR_11] = VAR_5[VAR_11] * VAR_3[VAR_11];
        VAR_9[VAR_11] = VAR_5[VAR_11] * VAR_2 [VAR_11];
    };

    FUNC_3(VAR_8 - VAR_0, VAR_4->postfilter_mem,
           VAR_0*sizeof(float));

    FUNC_0(VAR_8, VAR_10, VAR_6, VAR_1,
                                 VAR_0);

    FUNC_3(VAR_4->postfilter_mem, VAR_8 + VAR_1 - VAR_0,
           VAR_0*sizeof(float));

    FUNC_2(&VAR_4->tilt_mem, 0.4, VAR_8, VAR_1);

    FUNC_3(VAR_8 - VAR_0, VAR_4->postfilter_mem5k0,
           VAR_0*sizeof(*VAR_8));

    FUNC_3(VAR_4->postfilter_mem5k0, VAR_8 + VAR_1 - VAR_0,
           VAR_0*sizeof(*VAR_8));

    FUNC_1(VAR_6, VAR_9, VAR_8, VAR_1,
                                      VAR_0);

}
