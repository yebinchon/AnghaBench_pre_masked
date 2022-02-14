
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static inline int FUNC_8(GetBitContext *VAR_4)
{
    unsigned int VAR_5;
    FUNC_3(VAR_3, VAR_4);
    FUNC_4(VAR_3, VAR_4);
    VAR_5 = FUNC_1(VAR_3, VAR_4);

    if (VAR_5 & 0xAA800000) {
        VAR_5 >>= 32 - 8;
        FUNC_2(VAR_3, VAR_4, VAR_1[VAR_5]);
        FUNC_0(VAR_3, VAR_4);

        return VAR_2[VAR_5];
    } else {
        int VAR_6;
        FUNC_2(VAR_3, VAR_4, 8);
        FUNC_4(VAR_3, VAR_4);
        VAR_5 |= 1 | (FUNC_1(VAR_3, VAR_4) >> 8);

        if ((VAR_5 & 0xAAAAAAAA) == 0)
            return VAR_0;

        for (VAR_6 = 31; (VAR_5 & 0x80000000) == 0; VAR_6--)
            VAR_5 = (VAR_5 << 2) - ((VAR_5 << VAR_6) >> (VAR_6 - 1)) + (VAR_5 >> 30);

        FUNC_2(VAR_3, VAR_4, 63 - 2 * VAR_6 - 8);
        FUNC_0(VAR_3, VAR_4);

        return (signed) (((((VAR_5 << VAR_6) >> VAR_6) - 1) ^ -(VAR_5 & 0x1)) + 1) >> 1;
    }

}
