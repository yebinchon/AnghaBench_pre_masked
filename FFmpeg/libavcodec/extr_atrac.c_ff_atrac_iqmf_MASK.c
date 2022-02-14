
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float*,int) ;
 float* VAR_0 ;

void FUNC_1(float *VAR_1, float *VAR_2, unsigned int VAR_3, float *VAR_4,
                   float *VAR_5, float *VAR_6)
{
    int VAR_7, VAR_8;
    float *VAR_9, *VAR_10;

    FUNC_0(VAR_6, VAR_5, 46*sizeof(float));

    VAR_10 = VAR_6 + 46;


    for(VAR_7=0; VAR_7<VAR_3; VAR_7+=2){
        VAR_10[2*VAR_7+0] = VAR_1[VAR_7 ] + VAR_2[VAR_7 ];
        VAR_10[2*VAR_7+1] = VAR_1[VAR_7 ] - VAR_2[VAR_7 ];
        VAR_10[2*VAR_7+2] = VAR_1[VAR_7+1] + VAR_2[VAR_7+1];
        VAR_10[2*VAR_7+3] = VAR_1[VAR_7+1] - VAR_2[VAR_7+1];
    }


    VAR_9 = VAR_6;
    for (VAR_8 = VAR_3; VAR_8 != 0; VAR_8--) {
        float VAR_11 = 0.0;
        float VAR_12 = 0.0;

        for (VAR_7 = 0; VAR_7 < 48; VAR_7 += 2) {
            VAR_11 += VAR_9[VAR_7] * VAR_0[VAR_7];
            VAR_12 += VAR_9[VAR_7+1] * VAR_0[VAR_7+1];
        }

        VAR_4[0] = VAR_12;
        VAR_4[1] = VAR_11;

        VAR_9 += 2;
        VAR_4 += 2;
    }


    FUNC_0(VAR_5, VAR_6 + VAR_3*2, 46*sizeof(float));
}
