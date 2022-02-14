
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int int32_t ;
struct TYPE_3__ {unsigned int rice_initial_history; int avctx; int gb; int rice_limit; } ;
typedef TYPE_1__ ALACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int,int,int) ;
 int FUNC_2 (unsigned int) ;
 void* FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_6(ALACContext *VAR_2, int32_t *VAR_3,
                            int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    unsigned int VAR_8 = VAR_2->rice_initial_history;
    int VAR_9 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        int VAR_10;
        unsigned int VAR_11;

        if(FUNC_4(&VAR_2->gb) <= 0)
            return VAR_0;


        VAR_10 = FUNC_2((VAR_8 >> 9) + 3);
        VAR_10 = FUNC_0(VAR_10, VAR_2->rice_limit);
        VAR_11 = FUNC_3(&VAR_2->gb, VAR_10, VAR_5);
        VAR_11 += VAR_9;
        VAR_9 = 0;
        VAR_3[VAR_7] = (VAR_11 >> 1) ^ -(VAR_11 & 1);


        if (VAR_11 > 0xffff)
            VAR_8 = 0xffff;
        else
            VAR_8 += VAR_11 * VAR_6 -
                       ((VAR_8 * VAR_6) >> 9);


        if ((VAR_8 < 128) && (VAR_7 + 1 < VAR_4)) {
            int VAR_12;


            VAR_10 = 7 - FUNC_2(VAR_8) + ((VAR_8 + 16) >> 6);
            VAR_10 = FUNC_0(VAR_10, VAR_2->rice_limit);
            VAR_12 = FUNC_3(&VAR_2->gb, VAR_10, 16);

            if (VAR_12 > 0) {
                if (VAR_12 >= VAR_4 - VAR_7) {
                    FUNC_1(VAR_2->avctx, VAR_1,
                           "invalid zero block size of %d %d %d\n", VAR_12,
                           VAR_4, VAR_7);
                    VAR_12 = VAR_4 - VAR_7 - 1;
                }
                FUNC_5(&VAR_3[VAR_7 + 1], 0,
                       VAR_12 * sizeof(*VAR_3));
                VAR_7 += VAR_12;
            }
            if (VAR_12 <= 0xffff)
                VAR_9 = 1;
            VAR_8 = 0;
        }
    }
    return 0;
}
