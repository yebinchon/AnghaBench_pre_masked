
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(const uint8_t *VAR_0, int32_t VAR_1,
                                 uint8_t *VAR_2, int32_t VAR_3,
                                 uint8_t VAR_4)
{
    uint8_t VAR_5;
    uint32_t VAR_6, VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_8 = FUNC_1(VAR_0);
    VAR_0 += VAR_1;

    for (VAR_5 = (VAR_4 >> 1); VAR_5--;) {
        FUNC_2(VAR_0, VAR_1, VAR_9, VAR_10);
        VAR_0 += (2 * VAR_1);

        FUNC_0(VAR_8, VAR_9, VAR_9, VAR_10, VAR_11, VAR_12);

        VAR_6 = FUNC_4((v4i32) VAR_11, 0);
        VAR_7 = FUNC_4((v4i32) VAR_12, 0);
        FUNC_3(VAR_6, VAR_2);
        VAR_2 += VAR_3;
        FUNC_3(VAR_7, VAR_2);
        VAR_2 += VAR_3;

        VAR_8 = VAR_10;
    }
}
