
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ v4i32 ;
typedef int v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_4(uint8_t *VAR_0, int32_t VAR_1,
                               uint8_t *VAR_2, int32_t VAR_3,
                               int32_t VAR_4)
{
    int32_t VAR_5;
    uint32_t VAR_6;
    v16u8 VAR_7, VAR_8, VAR_9, VAR_10;
    v16u8 VAR_11, VAR_12, VAR_13, VAR_14;
    v4i32 VAR_15 = { 0 };

    for (VAR_5 = (VAR_4 >> 2); VAR_5--;) {
        FUNC_2(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_0 += (4 * VAR_1);
        FUNC_2(VAR_2, VAR_3, VAR_11, VAR_12, VAR_13, VAR_14);
        VAR_2 += (4 * VAR_3);

        FUNC_3(VAR_8, VAR_7, VAR_10, VAR_9, VAR_12, VAR_11, VAR_14, VAR_13,
                    VAR_7, VAR_8, VAR_11, VAR_12);
        FUNC_0(VAR_7, VAR_11, VAR_15);
        FUNC_0(VAR_8, VAR_12, VAR_15);
    }

    VAR_6 = FUNC_1(VAR_15);

    return VAR_6;
}
