
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 float FUNC_1 (float,float) ;
 int VAR_0 ;
 float VAR_1 ;
 float FUNC_2 (float*,float*,int) ;
 float FUNC_3 (float,float,float) ;
 int FUNC_4 (float*,float*,float*,int,float*,float*) ;
 int* VAR_2 ;

__attribute__((used)) static float FUNC_5(float *VAR_3, int VAR_4, int VAR_5, int VAR_6,
                             int *VAR_7, int VAR_8, float VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    float VAR_14, VAR_15;
    float VAR_16;
    float VAR_17,VAR_18,VAR_19,VAR_20;
    float VAR_21[3];
    float VAR_22, VAR_23;
    int VAR_24;
    int VAR_25;
    float VAR_26[VAR_0+1];

    VAR_25 = VAR_5;
    VAR_4 /= 2;
    VAR_5 /= 2;
    *VAR_7 /= 2;
    VAR_8 /= 2;
    VAR_6 /= 2;
    VAR_3 += VAR_4;
    if (*VAR_7>=VAR_4)
        *VAR_7=VAR_4-1;

    VAR_12 = VAR_13 = *VAR_7;
    FUNC_4(VAR_3, VAR_3, VAR_3-VAR_13, VAR_6, &VAR_18, &VAR_17);
    VAR_26[0] = VAR_18;
    VAR_19=VAR_18;
    for (VAR_11 = 1; VAR_11 <= VAR_4; VAR_11++) {
        VAR_19 = VAR_19+(VAR_3[-VAR_11] * VAR_3[-VAR_11])-(VAR_3[VAR_6-VAR_11] * VAR_3[VAR_6-VAR_11]);
        VAR_26[VAR_11] = FUNC_1(0, VAR_19);
    }
    VAR_19 = VAR_26[VAR_13];
    VAR_22 = VAR_17;
    VAR_23 = VAR_19;
    VAR_14 = VAR_15 = FUNC_3(VAR_17, VAR_18, VAR_19);

    for (VAR_10 = 2; VAR_10 <= 15; VAR_10++) {
        int VAR_27, VAR_28;
        float VAR_29;
        float VAR_30=0;
        float VAR_31;
        VAR_27 = (2*VAR_13+VAR_10)/(2*VAR_10);
        if (VAR_27 < VAR_5)
            break;

        if (VAR_10==2)
        {
            if (VAR_27+VAR_13>VAR_4)
                VAR_28 = VAR_13;
            else
                VAR_28 = VAR_13+VAR_27;
        } else
        {
            VAR_28 = (2*VAR_2[VAR_10]*VAR_13+VAR_10)/(2*VAR_10);
        }
        FUNC_4(VAR_3, &VAR_3[-VAR_27], &VAR_3[-VAR_28], VAR_6, &VAR_17, &VAR_20);
        VAR_17 = .5f * (VAR_17 + VAR_20);
        VAR_19 = .5f * (VAR_26[VAR_27] + VAR_26[VAR_28]);
        VAR_29 = FUNC_3(VAR_17, VAR_18, VAR_19);
        if (FUNC_0(VAR_27-VAR_8)<=1)
            VAR_30 = VAR_9;
        else if (FUNC_0(VAR_27-VAR_8)<=2 && 5 * VAR_10 * VAR_10 < VAR_13)
            VAR_30 = VAR_9 * .5f;
        else
            VAR_30 = 0;
        VAR_31 = FUNC_1(.3f, (.7f * VAR_15) - VAR_30);


        if (VAR_27<3*VAR_5)
            VAR_31 = FUNC_1(.4f, (.85f * VAR_15) - VAR_30);
        else if (VAR_27<2*VAR_5)
            VAR_31 = FUNC_1(.5f, (.9f * VAR_15) - VAR_30);
        if (VAR_29 > VAR_31)
        {
            VAR_22 = VAR_17;
            VAR_23 = VAR_19;
            VAR_12 = VAR_27;
            VAR_14 = VAR_29;
        }
    }
    VAR_22 = FUNC_1(0, VAR_22);
    if (VAR_23 <= VAR_22)
        VAR_16 = VAR_1;
    else
        VAR_16 = VAR_22/(VAR_23 + 1);

    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
        VAR_21[VAR_10] = FUNC_2(VAR_3, VAR_3-(VAR_12+VAR_10-1), VAR_6);
    if ((VAR_21[2]-VAR_21[0]) > .7f * (VAR_21[1]-VAR_21[0]))
        VAR_24 = 1;
    else if ((VAR_21[0]-VAR_21[2]) > (.7f * (VAR_21[1] - VAR_21[2])))
        VAR_24 = -1;
    else
        VAR_24 = 0;
    if (VAR_16 > VAR_14)
        VAR_16 = VAR_14;
    *VAR_7 = 2*VAR_12+VAR_24;

    if (*VAR_7<VAR_25)
        *VAR_7=VAR_25;
    return VAR_16;
}
