
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ NLMeansDSPContext ;


 int FUNC_0 (int **) ;
 int * FUNC_1 (int const,int const) ;
 int FUNC_2 (TYPE_1__*,int *,int const,int const*,int const,int,int,int const,int const,int const) ;
 int FUNC_3 (int *,int const,int ,int ,int const*,int const,int,int,int const,int const,int const,int const,int const) ;
 int FUNC_4 (int *,int const,int const,int const) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int *,int const) ;
 int FUNC_7 (char*,...) ;

int FUNC_8(void)
{
    int VAR_0 = 0, VAR_1, VAR_2;
    uint32_t *VAR_3;
    uint32_t *VAR_4;
    NLMeansDSPContext VAR_5 = {0};


    const int VAR_6 = 6, VAR_7 = 5, VAR_8 = 8;
    static const uint8_t VAR_9[] = {
        0xb0, 0x71, 0xfb, 0xd8, 0x01, 0xd9, 0x01, 0x02,
        0x51, 0x8e, 0x41, 0x0f, 0x84, 0x58, 0x03, 0x04,
        0xc7, 0x8d, 0x07, 0x70, 0x5c, 0x47, 0x05, 0x06,
        0x09, 0x4e, 0xfc, 0x74, 0x8f, 0x9a, 0x07, 0x08,
        0x60, 0x8e, 0x20, 0xaa, 0x95, 0x7d, 0x09, 0x0a,
    };

    const int VAR_10 = 3;
    const int VAR_11 = VAR_6+VAR_10*2, VAR_12 = VAR_7+VAR_10*2;


    const int VAR_13 = ((VAR_11 + 1) + 3) & ~3;


    uint32_t *VAR_14 = FUNC_1(VAR_12 + 1, VAR_13 * sizeof(*VAR_14));
    uint32_t *VAR_15 = FUNC_1(VAR_12 + 1, VAR_13 * sizeof(*VAR_15));

    if (!VAR_14 || !VAR_15)
        return -1;

    VAR_3 = VAR_14 + VAR_13 + 1;
    VAR_4 = VAR_15 + VAR_13 + 1;

    FUNC_5(&VAR_5);

    for (VAR_2 = -VAR_10; VAR_2 <= VAR_10; VAR_2++) {
        for (VAR_1 = -VAR_10; VAR_1 <= VAR_10; VAR_1++) {
            FUNC_7("xoff=%d yoff=%d\n", VAR_1, VAR_2);

            FUNC_2(&VAR_5, VAR_3, VAR_13,
                                       VAR_9, VAR_8, VAR_1, VAR_2, VAR_10, VAR_6, VAR_7);
            FUNC_4(VAR_3, VAR_11, VAR_12, VAR_13);

            FUNC_3(VAR_4, VAR_13,
                                              0, 0,
                                              VAR_9, VAR_8,
                                              VAR_1, VAR_2, VAR_10, VAR_6, VAR_7,
                                              VAR_11, VAR_12);
            FUNC_4(VAR_4, VAR_11, VAR_12, VAR_13);

            if (FUNC_6(VAR_14, VAR_15, (VAR_12+1) * VAR_13 * sizeof(*VAR_14))) {
                FUNC_7("Integral mismatch\n");
                VAR_0 = 1;
                goto end;
            }
        }
    }

end:
    FUNC_0(&VAR_14);
    FUNC_0(&VAR_15);
    return VAR_0;
}
