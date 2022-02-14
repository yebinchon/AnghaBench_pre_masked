
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int lag_rac ;
struct TYPE_3__ {int zeros; scalar_t__ zeros_rem; } ;
typedef TYPE_1__ LagarithContext ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (void**,int ,int) ;

__attribute__((used)) static int FUNC_4(LagarithContext *VAR_0, lag_rac *VAR_1,
                           uint8_t *VAR_2, int VAR_3, int VAR_4,
                           int VAR_5)
{
    int VAR_6 = 0;
    int VAR_7 = 0;

    if (!VAR_5)
        VAR_5 = -1;


handle_zeros:
    if (VAR_0->zeros_rem) {
        int VAR_8 = FUNC_0(VAR_0->zeros_rem, VAR_3 - VAR_6);
        FUNC_3(VAR_2 + VAR_6, 0, VAR_8);
        VAR_6 += VAR_8;
        VAR_0->zeros_rem -= VAR_8;
    }

    while (VAR_6 < VAR_3) {
        VAR_2[VAR_6] = FUNC_2(VAR_1);
        VAR_7++;

        if (VAR_2[VAR_6])
            VAR_0->zeros = 0;
        else
            VAR_0->zeros++;

        VAR_6++;
        if (VAR_0->zeros == VAR_5) {
            int VAR_9 = FUNC_2(VAR_1);
            VAR_7++;

            VAR_0->zeros = 0;

            VAR_0->zeros_rem = FUNC_1(VAR_9);
            goto handle_zeros;
        }
    }
    return VAR_7;
}
