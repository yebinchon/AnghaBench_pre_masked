
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                     int VAR_2)
{
    v16u8 VAR_3, VAR_4, VAR_5, VAR_6;
    v16u8 VAR_7, VAR_8;

    VAR_8 = (v16u8) FUNC_4(VAR_2);

    FUNC_0(VAR_0 - (VAR_1 << 1), VAR_1, VAR_3, VAR_4, VAR_6, VAR_5);
    FUNC_3(VAR_3, VAR_4, VAR_6, VAR_5, VAR_8, VAR_7);
    FUNC_2(VAR_3, VAR_4, VAR_6, VAR_5, VAR_7);
    FUNC_1(VAR_4, VAR_6, (VAR_0 - VAR_1), VAR_1);
}
