
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 unsigned int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static inline unsigned FUNC_10(GetBitContext *VAR_4)
{
    uint32_t VAR_5;
    FUNC_5(VAR_3, VAR_4);
    FUNC_6(VAR_3, VAR_4);
    VAR_5 = FUNC_3(VAR_3, VAR_4);

    if (VAR_5 & 0xAA800000) {
        VAR_5 >>= 32 - 8;
        FUNC_4(VAR_3, VAR_4, VAR_1[VAR_5]);
        FUNC_1(VAR_3, VAR_4);

        return VAR_2[VAR_5];
    } else {
        unsigned VAR_6 = 1;

        do {
            VAR_5 >>= 32 - 8;
            FUNC_4(VAR_3, VAR_4,
                           FUNC_2(VAR_1[VAR_5], 8));

            if (VAR_1[VAR_5] != 9) {
                VAR_6 <<= (VAR_1[VAR_5] - 1) >> 1;
                VAR_6 |= VAR_0[VAR_5];
                break;
            }
            VAR_6 = (VAR_6 << 4) | VAR_0[VAR_5];
            FUNC_6(VAR_3, VAR_4);
            VAR_5 = FUNC_3(VAR_3, VAR_4);
        } while (VAR_6<0x8000000U && FUNC_0(VAR_3, VAR_4));

        FUNC_1(VAR_3, VAR_4);
        return VAR_6 - 1;
    }

}
