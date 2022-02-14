
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char,char,unsigned char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int *,int,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int64_t FUNC_10(AVIOContext *VAR_5, int64_t VAR_6)
{
    int64_t VAR_7 = -1;
    int32_t VAR_8, VAR_9, VAR_10;
    int64_t VAR_11 = 0;
    int VAR_12 = 0;

    FUNC_5(VAR_5, VAR_6, VAR_3);
    VAR_8 = FUNC_3(VAR_5);
    VAR_10 = FUNC_3(VAR_5);
    if (FUNC_7(VAR_10, FUNC_0('m', 'o', 'o', 'f')) != 0)
        goto fail;
    while (VAR_11 < VAR_6 + VAR_8) {
        VAR_11 = FUNC_6(VAR_5);
        VAR_9 = FUNC_3(VAR_5);
        VAR_10 = FUNC_3(VAR_5);
        if (VAR_10 == FUNC_0('t', 'r', 'a', 'f')) {
            int64_t VAR_13 = VAR_11;
            int64_t VAR_14 = VAR_9;
            while (VAR_11 < VAR_13 + VAR_14) {
                VAR_11 = FUNC_6(VAR_5);
                VAR_9 = FUNC_3(VAR_5);
                VAR_10 = FUNC_3(VAR_5);
                if (VAR_10 == FUNC_0('t', 'f', 'h', 'd')) {
                    int VAR_15 = 0;
                    FUNC_1(VAR_5);
                    VAR_15 = FUNC_2(VAR_5);
                    FUNC_3(VAR_5);
                    if (VAR_15 & VAR_0)
                        FUNC_4(VAR_5);
                    if (VAR_15 & VAR_2)
                        FUNC_3(VAR_5);
                    if (VAR_15 & VAR_1)
                        VAR_12 = FUNC_3(VAR_5);
                }
                if (VAR_10 == FUNC_0('t', 'r', 'u', 'n')) {
                    return FUNC_9(VAR_5, VAR_12,
                                              VAR_11 + VAR_9);
                }
                FUNC_5(VAR_5, VAR_11 + VAR_9, VAR_3);
            }
            FUNC_8(VAR_4, "Couldn't find trun\n");
            goto fail;
        }
        FUNC_5(VAR_5, VAR_11 + VAR_9, VAR_3);
    }
    FUNC_8(VAR_4, "Couldn't find traf\n");

fail:
    return VAR_7;
}
