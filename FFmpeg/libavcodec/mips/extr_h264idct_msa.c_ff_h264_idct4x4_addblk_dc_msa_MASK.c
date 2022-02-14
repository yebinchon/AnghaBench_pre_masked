
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ v8i16 ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__ const,scalar_t__,scalar_t__ const,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int const,int const,int const,int const,TYPE_1__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,int,int,int *,int) ;
 int FUNC_5 (TYPE_1__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int const) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(uint8_t *VAR_0, int16_t *VAR_1,
                                   int32_t VAR_2)
{
    v16u8 VAR_3 = { 0 };
    v16i8 VAR_4;
    v8i16 VAR_5, VAR_6;
    const uint32_t VAR_7 = FUNC_3(VAR_0);
    const uint32_t VAR_8 = FUNC_3(VAR_0 + VAR_2);
    const uint32_t VAR_9 = FUNC_3(VAR_0 + 2 * VAR_2);
    const uint32_t VAR_10 = FUNC_3(VAR_0 + 3 * VAR_2);
    const int16_t VAR_11 = (VAR_1[0] + 32) >> 6;
    const v8i16 VAR_12 = FUNC_6(VAR_11);

    VAR_1[0] = 0;
    FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_3);
    FUNC_5(VAR_3, VAR_5, VAR_6);
    FUNC_0(VAR_5, VAR_12, VAR_6, VAR_12, VAR_5, VAR_6);
    FUNC_1(VAR_5, VAR_6);
    VAR_4 = FUNC_7((v16i8) VAR_6, (v16i8) VAR_5);
    FUNC_4(VAR_4, 0, 1, 2, 3, VAR_0, VAR_2);
}
