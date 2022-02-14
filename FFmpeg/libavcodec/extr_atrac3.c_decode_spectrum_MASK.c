
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 float* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 float* VAR_2 ;
 int FUNC_2 (float*,int ,int) ;
 int FUNC_3 (int *,int,int,int*,int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13[32], VAR_14[32];
    int VAR_15[128];
    float VAR_16;

    VAR_6 = FUNC_0(VAR_4, 5);
    VAR_7 = FUNC_1(VAR_4);


    for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++)
        VAR_13[VAR_8] = FUNC_0(VAR_4, 3);


    for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++) {
        if (VAR_13[VAR_8] != 0)
            VAR_14[VAR_8] = FUNC_0(VAR_4, 6);
    }

    for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++) {
        VAR_10 = VAR_3[VAR_8 ];
        VAR_11 = VAR_3[VAR_8 + 1];

        VAR_12 = VAR_11 - VAR_10;

        if (VAR_13[VAR_8] != 0) {



            FUNC_3(VAR_4, VAR_13[VAR_8], VAR_7,
                                       VAR_15, VAR_12);


            VAR_16 = VAR_1[VAR_14[VAR_8]] *
                           VAR_2[VAR_13[VAR_8]];


            for (VAR_9 = 0; VAR_10 < VAR_11; VAR_10++, VAR_9++)
                VAR_5[VAR_10] = VAR_15[VAR_9] * VAR_16;
        } else {

            FUNC_2(VAR_5 + VAR_10, 0, VAR_12 * sizeof(*VAR_5));
        }
    }


    VAR_10 = VAR_3[VAR_8];
    FUNC_2(VAR_5 + VAR_10, 0, (VAR_0 - VAR_10) * sizeof(*VAR_5));
    return VAR_6;
}
