
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int,int,int,unsigned int) ;
 int FUNC_2 (int*,int const*) ;

__attribute__((used)) static inline void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                       const uint8_t *VAR_2,
                                       const int *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    uint8_t VAR_7[16];
    int VAR_8, VAR_9;

    FUNC_2(VAR_7, VAR_2 + 2);





    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            int VAR_10 = VAR_7[VAR_8 + VAR_9 * 4];

            int VAR_11 = VAR_3[VAR_10];

            if (VAR_4){
                VAR_0 [VAR_8 * VAR_6 + VAR_9 * VAR_1 + VAR_5] = (uint8_t)VAR_11;
            }
            else{
                uint32_t VAR_12 = FUNC_1(VAR_11, VAR_11, VAR_11, 255U);
                FUNC_0(VAR_0 + VAR_8 * VAR_6 + VAR_9 * VAR_1, VAR_12);
            }
        }
    }
}
