
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_3 (
    int16_t *VAR_2,
    int16_t *VAR_3,
    int16_t *VAR_4,
    int16_t *VAR_5,
    int16_t VAR_6,
    int16_t VAR_7)
{
    int16_t VAR_8[VAR_0];
    int16_t VAR_9[VAR_1];
    int16_t VAR_10[VAR_1];
    int16_t VAR_11[VAR_1];
    unsigned VAR_12;
    int16_t *VAR_13;
    int VAR_14;



    VAR_8[0] = FUNC_1(VAR_4[0], 16384, 0);
    VAR_8[1] = FUNC_1(VAR_4[1], VAR_8[0], 1);
    VAR_8[2] = FUNC_1(VAR_4[2], VAR_8[1], 2);




    FUNC_2(VAR_9, VAR_5, VAR_3[0], VAR_6, VAR_7);
    FUNC_2(VAR_10, VAR_5, VAR_3[1], VAR_6, VAR_7);
    FUNC_2(VAR_11, VAR_5, VAR_3[2], VAR_6, VAR_7);

    VAR_13 = &VAR_8[0];
    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
        VAR_12 = FUNC_0(*VAR_13++, VAR_9[VAR_14]);
        VAR_12 += FUNC_0(*VAR_13++, VAR_10[VAR_14]);
        VAR_12 += FUNC_0(*VAR_13, VAR_11[VAR_14]);
        VAR_13 -= 2;
        VAR_2[VAR_14] = (int)(VAR_12 + 8192) >> 14;
    }
}
