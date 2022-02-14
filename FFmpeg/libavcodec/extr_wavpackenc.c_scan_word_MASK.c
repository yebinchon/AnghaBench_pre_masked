
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef int WvChannel ;
typedef int WavPackEncodeContext ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(WavPackEncodeContext *VAR_0, WvChannel *VAR_1,
                      int32_t *VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_4 < 0)
        VAR_2 += VAR_3 - 1;

    while (VAR_3--) {
        uint32_t VAR_5, VAR_6 = FUNC_3(VAR_2[0]);

        if (VAR_6 < FUNC_1(0)) {
            FUNC_0(0);
        } else {
            VAR_5 = FUNC_1(0);
            FUNC_2(0);

            if (VAR_6 - VAR_5 < FUNC_1(1)) {
                FUNC_0(1);
            } else {
                VAR_5 += FUNC_1(1);
                FUNC_2(1);

                if (VAR_6 - VAR_5 < FUNC_1(2)) {
                    FUNC_0(2);
                } else {
                    FUNC_2(2);
                }
            }
        }
        VAR_2 += VAR_4;
    }
}
