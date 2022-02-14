
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v4i32 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_1, uint8_t *VAR_2, int32_t VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5)
{
    v16i8 VAR_6, VAR_7;
    v8u16 VAR_8;
    v4i32 VAR_9;
    v16i8 VAR_10;
    v16i8 VAR_11 = FUNC_4(VAR_4);
    v16i8 VAR_12 = FUNC_4(VAR_5);
    v16u8 VAR_13 = (v16u8) FUNC_5(VAR_11, VAR_12);

    VAR_10 = FUNC_0(&VAR_0[0]);

    FUNC_1(VAR_1, VAR_3, VAR_6, VAR_7);

    VAR_6 = FUNC_9(VAR_10, VAR_7, VAR_6);
    VAR_8 = FUNC_3((v16u8) VAR_6, VAR_13);
    VAR_8 <<= 3;
    VAR_8 = (v8u16) FUNC_8((v8i16) VAR_8, 6);
    VAR_8 = FUNC_7(VAR_8, 7);
    VAR_9 = (v4i32) FUNC_6((v16i8) VAR_8, (v16i8) VAR_8);

    FUNC_2(VAR_9, 0, 1, VAR_2, VAR_3);
}
