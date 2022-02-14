
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int16_t* VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10 = 0;

    VAR_8 = (VAR_3 << 23) / VAR_2;
    while (VAR_8 < 0x40000000){
        VAR_8 <<= 1;
        VAR_10++;
    }
    VAR_8 = FUNC_1(VAR_8 - 0x80000000);
    VAR_8 = (((VAR_8 + 0x80) >> 8) + (8-VAR_10)*VAR_0) / VAR_4;
    VAR_8 = FUNC_0(VAR_8);

    VAR_6 = VAR_2;
    VAR_9 = VAR_2 << 23;

    for (VAR_5 = 0; VAR_5 < VAR_4-1; VAR_5++) {
        VAR_9 = (int)(((int64_t)VAR_9 * VAR_8 + 0x400000) >> 23);
        VAR_7 = (VAR_9 + 0x400000) >> 23;
        VAR_1[VAR_5] = VAR_7 - VAR_6;
        VAR_6 = VAR_7;
    }
    VAR_1[VAR_4-1] = VAR_3 - VAR_6;
}
