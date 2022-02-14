
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_1, uint8_t VAR_2,
                                unsigned int VAR_3)
{
    unsigned int VAR_4;
    uint8_t VAR_5 = 0;
    uint8_t VAR_6 = 0;
    uint8_t VAR_7 = 0;

    if (VAR_2) {
        VAR_6 = FUNC_0(VAR_1);
        VAR_7 = FUNC_0(VAR_1);

        if (VAR_6 ||
            VAR_7) {
            VAR_5 = FUNC_0(VAR_1);

            if (VAR_5)






                FUNC_2(VAR_1, 19);





            FUNC_2(VAR_1, 8);

            if (VAR_5)
                FUNC_2(VAR_1, 4);






            FUNC_2(VAR_1, 15);
        }
    }

    for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++) {
        unsigned int VAR_8 = 0;
        uint8_t VAR_9 = 0;
        uint8_t VAR_10 = 0;
        uint8_t VAR_11 = FUNC_0(VAR_1);

        if (!VAR_11)
            VAR_10 = FUNC_0(VAR_1);

        if (VAR_10)
            FUNC_1(VAR_1);
        else
            VAR_9 = FUNC_0(VAR_1);

        if (!VAR_9) {
            VAR_8 = FUNC_1(VAR_1);
            if (VAR_8 > 31)
                return VAR_0;
        }

        if (VAR_6)
            FUNC_3(VAR_1, VAR_8,
                                          VAR_5);

        if (VAR_7)
            FUNC_3(VAR_1, VAR_8,
                                          VAR_5);
    }

    return 0;
}
