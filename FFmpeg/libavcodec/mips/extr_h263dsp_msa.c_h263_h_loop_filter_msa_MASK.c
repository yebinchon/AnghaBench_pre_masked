
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef size_t int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (int *,size_t,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int,int,int,int,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int,int,int,int ,int,int,int,int *,size_t) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int,int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 size_t* VAR_0 ;

__attribute__((used)) static void FUNC_16(uint8_t *VAR_1, int32_t VAR_2, int32_t VAR_3)
{
    int32_t VAR_4 = VAR_0[VAR_3];
    v16u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21, VAR_22, VAR_23, VAR_24;

    VAR_1 -= 2;
    FUNC_1(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
                       VAR_5, VAR_8, VAR_7, VAR_6);

    VAR_13 = (v8i16) FUNC_12((v16i8) VAR_5, (v16i8) VAR_6);
    VAR_22 = FUNC_10((v16u8) VAR_13, (v16u8) VAR_13);
    VAR_15 = (v8i16) FUNC_12((v16i8) VAR_7, (v16i8) VAR_8);
    VAR_15 = FUNC_10((v16u8) VAR_15, (v16u8) VAR_15);
    VAR_15 <<= 2;
    VAR_16 = VAR_22 + VAR_15;
    VAR_17 = -(-VAR_16 >> 3);
    VAR_23 = FUNC_9(-(VAR_4 << 1));
    VAR_13 = (VAR_23 <= VAR_17);
    VAR_17 = (v8i16) FUNC_7((v16u8) VAR_17, (v16u8) VAR_13, (v16u8) VAR_13);
    VAR_15 = VAR_23 - VAR_17;
    VAR_24 = FUNC_9(-VAR_4);
    VAR_13 = (VAR_17 < VAR_24);
    VAR_17 = (v8i16) FUNC_6((v16u8) VAR_17, (v16u8) VAR_15, (v16u8) VAR_13);
    VAR_18 = VAR_16 >> 3;
    VAR_23 = FUNC_9(VAR_4 << 1);
    VAR_13 = (VAR_18 <= VAR_23);
    VAR_18 = (v8i16) FUNC_7((v16u8) VAR_18, (v16u8) VAR_13, (v16u8) VAR_13);
    VAR_15 = VAR_23 - VAR_18;
    VAR_24 = FUNC_9(VAR_4);
    VAR_13 = (VAR_24 < VAR_18);
    VAR_18 = (v8i16) FUNC_6((v16u8) VAR_18, (v16u8) VAR_15, (v16u8) VAR_13);
    VAR_13 = FUNC_8(VAR_16, 0);
    VAR_21 = (v8i16) FUNC_6((v16u8) VAR_18, (v16u8) VAR_17, (v16u8) VAR_13);
    VAR_17 = -VAR_17 >> 1;
    VAR_18 >>= 1;
    VAR_20 = (v8i16) FUNC_6((v16u8) VAR_18, (v16u8) VAR_17, (v16u8) VAR_13);
    VAR_19 = (-VAR_22) >> 2;
    VAR_19 = -(VAR_19);
    VAR_15 = -VAR_20;
    VAR_13 = (VAR_19 < VAR_15);
    VAR_19 = (v8i16) FUNC_6((v16u8) VAR_19, (v16u8) VAR_15, (v16u8) VAR_13);
    VAR_17 = VAR_22 >> 2;
    VAR_13 = (VAR_17 <= VAR_20);
    VAR_17 = (v8i16) FUNC_7((v16u8) VAR_17, (v16u8) VAR_20, (v16u8) VAR_13);
    VAR_13 = FUNC_8(VAR_22, 0);
    VAR_19 = (v8i16) FUNC_7((v16u8) VAR_19, (v16u8) VAR_17, (v16u8) VAR_13);
    FUNC_2(VAR_22, VAR_19, VAR_22, VAR_21, VAR_19, VAR_21);
    VAR_5 = (v16u8) ((v16i8) VAR_5 - (v16i8) VAR_19);
    VAR_6 = (v16u8) ((v16i8) VAR_6 + (v16i8) VAR_19);
    VAR_8 = FUNC_15(VAR_8, 128);
    VAR_8 = (v16u8) FUNC_5((v16i8) VAR_8, (v16i8) VAR_21);
    VAR_8 = FUNC_15(VAR_8, 128);
    VAR_7 = FUNC_14(VAR_7, (v16i8) VAR_21);
    FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7, VAR_13, VAR_14);
    VAR_5 = (v16u8) FUNC_13(VAR_14, VAR_13);
    VAR_8 = (v16u8) FUNC_11(VAR_14, VAR_13);
    FUNC_3(VAR_5, VAR_8, 0, 1, 2, 3, 0, 1, 2, 3, VAR_1, VAR_2);
}
