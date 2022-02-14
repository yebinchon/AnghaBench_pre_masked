
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int*,int *) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1, int16_t *VAR_2){
    int VAR_3[16];
    int VAR_4;

    FUNC_2(VAR_3, VAR_2);
    FUNC_1(VAR_2, 0, 16*sizeof(int16_t));

    for(VAR_4 = 0; VAR_4 < 4; VAR_4++){
        const int VAR_5 = 13*(VAR_3[4*0+VAR_4] + VAR_3[4*2+VAR_4]) + 0x200;
        const int VAR_6 = 13*(VAR_3[4*0+VAR_4] - VAR_3[4*2+VAR_4]) + 0x200;
        const int VAR_7 = 7* VAR_3[4*1+VAR_4] - 17*VAR_3[4*3+VAR_4];
        const int VAR_8 = 17* VAR_3[4*1+VAR_4] + 7*VAR_3[4*3+VAR_4];

        VAR_0[0] = FUNC_0( VAR_0[0] + ( (VAR_5 + VAR_8) >> 10 ) );
        VAR_0[1] = FUNC_0( VAR_0[1] + ( (VAR_6 + VAR_7) >> 10 ) );
        VAR_0[2] = FUNC_0( VAR_0[2] + ( (VAR_6 - VAR_7) >> 10 ) );
        VAR_0[3] = FUNC_0( VAR_0[3] + ( (VAR_5 - VAR_8) >> 10 ) );

        VAR_0 += VAR_1;
    }
}
