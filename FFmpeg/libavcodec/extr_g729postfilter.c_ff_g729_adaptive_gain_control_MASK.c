
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

int16_t FUNC_3(int VAR_2, int VAR_3, int16_t *VAR_4,
                                   int VAR_5, int16_t VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9, VAR_10;

    if(!VAR_3 && VAR_2)
        return 0;

    if (VAR_2) {

        VAR_9 = 14 - FUNC_1(VAR_2);
        VAR_2 = FUNC_2(VAR_2, VAR_9);

        VAR_10 = 14 - FUNC_1(VAR_3);
        VAR_3 = FUNC_2(VAR_3, VAR_10);

        if (VAR_2 < VAR_3) {
            VAR_7 = (VAR_2 << 15) / VAR_3;
            VAR_7 = FUNC_2(VAR_7, VAR_10 - VAR_9 - 1);
        } else {
            VAR_7 = ((VAR_2 - VAR_3) << 14) / VAR_3 + 0x4000;
            VAR_7 = FUNC_2(VAR_7, VAR_10 - VAR_9);
        }
        VAR_7 = (VAR_7 * VAR_0 + 0x4000) >> 15;
    } else
        VAR_7 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {

        VAR_6 = (VAR_1 * VAR_6 + 0x4000) >> 15;
        VAR_6 = FUNC_0(VAR_7 + VAR_6);
        VAR_4[VAR_8] = FUNC_0((VAR_4[VAR_8] * VAR_6 + 0x2000) >> 14);
    }
    return VAR_6;
}
