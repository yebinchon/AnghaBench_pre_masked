
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutBitContext ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int const FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int const*,size_t) ;
 int FUNC_7 (int *,int,int const) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,size_t) ;

__attribute__((used)) static int FUNC_13(CodedBitstreamContext *VAR_1,
                                      PutBitContext *VAR_2, const uint8_t *VAR_3,
                                      size_t VAR_4, int VAR_5)
{
    size_t VAR_6 = VAR_4 - (VAR_5 + 7) / 8;
    const uint8_t *VAR_7 = VAR_3 + VAR_5 / 8;

    FUNC_3(VAR_5 >= 0 &&
               8 * VAR_4 > VAR_5);

    if (VAR_4 * 8 + 8 > FUNC_10(VAR_2))
        return FUNC_0(VAR_0);

    if (!VAR_6)
        goto rbsp_stop_one_bit;




    if (VAR_5 % 8)
        FUNC_7(VAR_2, 8 - VAR_5 % 8,
                 *VAR_7++ & FUNC_2(8 - VAR_5 % 8));

    if (FUNC_9(VAR_2) % 8 == 0) {



        FUNC_5(VAR_2);
        FUNC_6(FUNC_11(VAR_2), VAR_7, VAR_6);
        FUNC_12(VAR_2, VAR_6);
    } else {



        uint8_t VAR_8;
        int VAR_9;

        for (; VAR_6 > 4; VAR_6 -= 4, VAR_7 += 4)
            FUNC_8(VAR_2, FUNC_1(VAR_7));

        for (; VAR_6 > 1; VAR_6--, VAR_7++)
            FUNC_7(VAR_2, 8, *VAR_7);

    rbsp_stop_one_bit:
        VAR_8 = VAR_6 ? *VAR_7 : *VAR_7 & FUNC_2(8 - VAR_5 % 8);

        FUNC_3(VAR_8);
        VAR_9 = FUNC_4(*VAR_7);
        VAR_8 = VAR_8 >> VAR_9;
        VAR_9 = VAR_6 ? (8 - VAR_9) : (8 - VAR_9 - VAR_5 % 8);
        FUNC_7(VAR_2, VAR_9, VAR_8);
        if (FUNC_9(VAR_2) % 8)
            FUNC_7(VAR_2, 8 - FUNC_9(VAR_2) % 8, 0);
    }

    return 0;
}
