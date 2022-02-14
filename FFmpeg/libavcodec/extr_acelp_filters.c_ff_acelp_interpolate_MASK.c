
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;

void FUNC_3(int16_t* VAR_1, const int16_t* VAR_2,
                          const int16_t* VAR_3, int VAR_4,
                          int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_4);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        int VAR_10 = 0;
        int VAR_11 = 0x4000;

        for (VAR_9 = 0; VAR_9 < VAR_6;) {
            VAR_11 += VAR_2[VAR_8 + VAR_9] * VAR_3[VAR_10 + VAR_5];
            VAR_10 += VAR_4;
            VAR_9++;
            VAR_11 += VAR_2[VAR_8 - VAR_9] * VAR_3[VAR_10 - VAR_5];
        }
        if (FUNC_1(VAR_11 >> 15) != (VAR_11 >> 15))
            FUNC_2(((void*)0), VAR_0, "overflow that would need clipping in ff_acelp_interpolate()\n");
        VAR_1[VAR_8] = VAR_11 >> 15;
    }
}
