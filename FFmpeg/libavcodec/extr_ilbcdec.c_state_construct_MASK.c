
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int16_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (size_t*,size_t*,size_t*,int,int) ;
 int FUNC_2 (size_t*,size_t*,size_t*,int,size_t) ;
 size_t* VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (size_t*,int ,size_t) ;

__attribute__((used)) static void FUNC_4(int16_t VAR_4, int16_t *VAR_5,
                           int16_t *VAR_6, int16_t *VAR_7,
                           int16_t VAR_8)
{
    int VAR_9;
    int16_t VAR_10;
    int16_t *VAR_11, *VAR_12, *VAR_13;

    int16_t VAR_14[1 + VAR_0];
    int16_t VAR_15[2 * VAR_1 + VAR_0];
    int16_t VAR_16[2 * VAR_1 + VAR_0];
    int16_t *VAR_17 = &VAR_15[VAR_0];
    int16_t *VAR_18 = &VAR_16[VAR_0];
    int16_t *VAR_19 = &VAR_15[VAR_0];



    for (VAR_9 = 0; VAR_9 < VAR_0 + 1; VAR_9++) {
        VAR_14[VAR_9] = VAR_6[VAR_0 - VAR_9];
    }



    VAR_10 = VAR_2[VAR_4];


    VAR_11 = VAR_17;
    VAR_12 = &VAR_5[VAR_8 - 1];

    if (VAR_4 < 37) {
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {


            (*VAR_11) = (int16_t) ((FUNC_0(VAR_10, VAR_3[(*VAR_12)]) + 2097152) >> 22);
            VAR_11++;
            VAR_12--;
        }
    } else if (VAR_4 < 59) {
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {


            (*VAR_11) = (int16_t) ((FUNC_0(VAR_10, VAR_3[(*VAR_12)]) + 262144) >> 19);
            VAR_11++;
            VAR_12--;
        }
    } else {
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {


            (*VAR_11) = (int16_t) ((FUNC_0(VAR_10, VAR_3[(*VAR_12)]) + 65536) >> 17);
            VAR_11++;
            VAR_12--;
        }
    }


    FUNC_3(&VAR_17[VAR_8], 0, VAR_8 * 2);




    FUNC_3(VAR_15, 0, VAR_0 * 2);


    FUNC_2(VAR_17, VAR_18, VAR_14, VAR_0 + 1, VAR_8 + VAR_0);
    FUNC_3(&VAR_18[VAR_8 + VAR_0], 0, (VAR_8 - VAR_0) * 2);
    FUNC_1(VAR_18, VAR_19, VAR_6, VAR_0 + 1, 2 * VAR_8);

    VAR_11 = &VAR_19[VAR_8 - 1];
    VAR_12 = &VAR_19[2 * VAR_8 - 1];
    VAR_13 = VAR_7;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        (*VAR_13) = (*VAR_11) + (*VAR_12);
        VAR_11--;
        VAR_12--;
        VAR_13++;
    }
}
