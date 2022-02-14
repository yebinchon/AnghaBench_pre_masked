
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0){
    int VAR_1[16];
    int VAR_2;

    FUNC_0(VAR_1, VAR_0);

    for(VAR_2 = 0; VAR_2 < 4; VAR_2++){
        const int VAR_3 = 39*(VAR_1[4*0+VAR_2] + VAR_1[4*2+VAR_2]);
        const int VAR_4 = 39*(VAR_1[4*0+VAR_2] - VAR_1[4*2+VAR_2]);
        const int VAR_5 = 21* VAR_1[4*1+VAR_2] - 51*VAR_1[4*3+VAR_2];
        const int VAR_6 = 51* VAR_1[4*1+VAR_2] + 21*VAR_1[4*3+VAR_2];

        VAR_0[VAR_2*4+0] = (VAR_3 + VAR_6) >> 11;
        VAR_0[VAR_2*4+1] = (VAR_4 + VAR_5) >> 11;
        VAR_0[VAR_2*4+2] = (VAR_4 - VAR_5) >> 11;
        VAR_0[VAR_2*4+3] = (VAR_3 - VAR_6) >> 11;
    }
}
