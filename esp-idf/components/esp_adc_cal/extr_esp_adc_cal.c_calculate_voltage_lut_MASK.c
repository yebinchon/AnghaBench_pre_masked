
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_4, uint32_t VAR_5, const uint32_t *VAR_6, const uint32_t *VAR_7)
{

    uint32_t VAR_8 = (VAR_4 - VAR_1) / VAR_0;


    int VAR_9 = VAR_2 - VAR_5;
    int VAR_10 = VAR_5 - VAR_3;
    int VAR_11 = ((VAR_8 + 1) * VAR_0) + VAR_1 - VAR_4;
    int VAR_12 = VAR_4 - ((VAR_8 * VAR_0) + VAR_1);


    int VAR_13 = VAR_6[VAR_8];
    int VAR_14 = VAR_6[VAR_8 + 1];
    int VAR_15 = VAR_7[VAR_8];
    int VAR_16 = VAR_7[VAR_8 + 1];



    int VAR_17 = (VAR_13 * VAR_9 * VAR_11) + (VAR_15 * VAR_10 * VAR_11) + (VAR_14 * VAR_9 * VAR_12) + (VAR_16 * VAR_10 * VAR_12);
    VAR_17 += ((VAR_2 - VAR_3) * VAR_0) / 2;
    VAR_17 /= ((VAR_2 - VAR_3) * VAR_0);
    return (uint32_t)VAR_17;
}
