
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* imdct_half ) (TYPE_1__*,float*,float const*) ;} ;
typedef TYPE_1__ FFTContext ;


 int FUNC_0 (TYPE_1__*,float*,float const*) ;

__attribute__((used)) static void FUNC_1(FFTContext *VAR_0,
                                  float *VAR_1, int *VAR_2,
                                  float VAR_3[64], const float VAR_4[1024],
                                  float VAR_5[64], const float VAR_6[64], float VAR_7)
{
    float *VAR_8 = VAR_1 + *VAR_2;
    int VAR_9, VAR_10;

    VAR_0->imdct_half(VAR_0, VAR_8, VAR_6);

    for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
        float VAR_11 = VAR_3[VAR_9 ];
        float VAR_12 = VAR_3[VAR_9 + 32];
        float VAR_13 = 0;
        float VAR_14 = 0;
        for (VAR_10 = 0; VAR_10 < 1024 - *VAR_2; VAR_10 += 128) {
            VAR_11 += VAR_4[VAR_9 + VAR_10 ] * (-VAR_8[31 - VAR_9 + VAR_10 ]);
            VAR_12 += VAR_4[VAR_9 + VAR_10 + 32] * ( VAR_8[ VAR_9 + VAR_10 ]);
            VAR_13 += VAR_4[VAR_9 + VAR_10 + 64] * ( VAR_8[32 + VAR_9 + VAR_10 ]);
            VAR_14 += VAR_4[VAR_9 + VAR_10 + 96] * ( VAR_8[63 - VAR_9 + VAR_10 ]);
        }
        for ( ; VAR_10 < 1024; VAR_10 += 128) {
            VAR_11 += VAR_4[VAR_9 + VAR_10 ] * (-VAR_8[31 - VAR_9 + VAR_10 - 1024]);
            VAR_12 += VAR_4[VAR_9 + VAR_10 + 32] * ( VAR_8[ VAR_9 + VAR_10 - 1024]);
            VAR_13 += VAR_4[VAR_9 + VAR_10 + 64] * ( VAR_8[32 + VAR_9 + VAR_10 - 1024]);
            VAR_14 += VAR_4[VAR_9 + VAR_10 + 96] * ( VAR_8[63 - VAR_9 + VAR_10 - 1024]);
        }
        VAR_5[VAR_9 ] = VAR_11 * VAR_7;
        VAR_5[VAR_9 + 32] = VAR_12 * VAR_7;
        VAR_3[VAR_9 ] = VAR_13;
        VAR_3[VAR_9 + 32] = VAR_14;
    }

    *VAR_2 = (*VAR_2 - 64) & 1023;
}
