
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int) ;
 int FUNC_2 (int *,int,int *,int,int,int) ;

void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1,
                            uint8_t *VAR_2, ptrdiff_t VAR_3,
                            int VAR_4, int VAR_5, int VAR_6)
{
    int32_t VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11;

    if (0 == VAR_4 % 8) {
        FUNC_2(VAR_2, VAR_3, VAR_0, VAR_1, VAR_4, 16);
    } else if (0 == VAR_4 % 4) {
        for (VAR_7 = (VAR_4 >> 2); VAR_7--;) {
            FUNC_0(VAR_2, VAR_3, VAR_8, VAR_9, VAR_10, VAR_11);
            VAR_2 += (4 * VAR_3);

            FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11, VAR_0, VAR_1);
            VAR_0 += (4 * VAR_1);
        }
    }
}
