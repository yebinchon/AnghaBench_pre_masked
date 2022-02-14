
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (void*,int ,char*,int) ;
 int* VAR_2 ;

int FUNC_1(int8_t *VAR_3, void *VAR_4,
                                     int VAR_5, int VAR_6)
{
    static const int8_t VAR_7[12] = {
        -1, 0, 129, -1, -1, -1, -1, -1, 0
    };
    static const int8_t VAR_8[12] = {
        0, -1, 128, 0, -1, -1, -1, 0, -1, 130
    };
    int VAR_9;

    if (!(VAR_5 & 0x8000)) {
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            int VAR_10 = VAR_7[VAR_3[VAR_2[0] + VAR_9]];
            if (VAR_10 < 0) {
                FUNC_0(VAR_4, VAR_1,
                       "top block unavailable for requested intra mode %d\n",
                       VAR_10);
                return VAR_0;
            } else if (VAR_10) {
                VAR_3[VAR_2[0] + VAR_9] = VAR_10;
            }
        }
    }

    if ((VAR_6 & 0x8888) != 0x8888) {
        static const int VAR_11[4] = { 0x8000, 0x2000, 0x80, 0x20 };
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
            if (!(VAR_6 & VAR_11[VAR_9])) {
                int VAR_12 = VAR_8[VAR_3[VAR_2[0] + 8 * VAR_9]];
                if (VAR_12 < 0) {
                    FUNC_0(VAR_4, VAR_1,
                           "left block unavailable for requested intra4x4 mode %d\n",
                           VAR_12);
                    return VAR_0;
                } else if (VAR_12) {
                    VAR_3[VAR_2[0] + 8 * VAR_9] = VAR_12;
                }
            }
    }

    return 0;
}
