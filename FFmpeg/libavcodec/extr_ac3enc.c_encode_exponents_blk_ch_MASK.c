
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;




 int FUNC_0 (int,int) ;
 int*** VAR_0 ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_1, int VAR_2, int VAR_3,
                                    int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    VAR_5 = VAR_0[VAR_4][VAR_3-1][VAR_2] * 3;


    switch(VAR_3) {
    case 129:
        for (VAR_6 = 1, VAR_7 = 1-VAR_4; VAR_6 <= VAR_5; VAR_6++) {
            uint8_t VAR_8 = VAR_1[VAR_7];
            if (VAR_1[VAR_7+1] < VAR_8)
                VAR_8 = VAR_1[VAR_7+1];
            VAR_1[VAR_6-VAR_4] = VAR_8;
            VAR_7 += 2;
        }
        break;
    case 128:
        for (VAR_6 = 1, VAR_7 = 1-VAR_4; VAR_6 <= VAR_5; VAR_6++) {
            uint8_t VAR_9 = VAR_1[VAR_7];
            if (VAR_1[VAR_7+1] < VAR_9)
                VAR_9 = VAR_1[VAR_7+1];
            if (VAR_1[VAR_7+2] < VAR_9)
                VAR_9 = VAR_1[VAR_7+2];
            if (VAR_1[VAR_7+3] < VAR_9)
                VAR_9 = VAR_1[VAR_7+3];
            VAR_1[VAR_6-VAR_4] = VAR_9;
            VAR_7 += 4;
        }
        break;
    }


    if (!VAR_4 && VAR_1[0] > 15)
        VAR_1[0] = 15;



    for (VAR_6 = 1; VAR_6 <= VAR_5; VAR_6++)
        VAR_1[VAR_6] = FUNC_0(VAR_1[VAR_6], VAR_1[VAR_6-1] + 2);
    VAR_6--;
    while (--VAR_6 >= 0)
        VAR_1[VAR_6] = FUNC_0(VAR_1[VAR_6], VAR_1[VAR_6+1] + 2);

    if (VAR_4)
        VAR_1[-1] = VAR_1[0] & ~1;


    switch (VAR_3) {
    case 129:
        for (VAR_6 = VAR_5, VAR_7 = (VAR_5 * 2)-VAR_4; VAR_6 > 0; VAR_6--) {
            uint8_t VAR_10 = VAR_1[VAR_6-VAR_4];
            VAR_1[VAR_7--] = VAR_10;
            VAR_1[VAR_7--] = VAR_10;
        }
        break;
    case 128:
        for (VAR_6 = VAR_5, VAR_7 = (VAR_5 * 4)-VAR_4; VAR_6 > 0; VAR_6--) {
            VAR_1[VAR_7] = VAR_1[VAR_7-1] = VAR_1[VAR_7-2] = VAR_1[VAR_7-3] = VAR_1[VAR_6-VAR_4];
            VAR_7 -= 4;
        }
        break;
    }
}
