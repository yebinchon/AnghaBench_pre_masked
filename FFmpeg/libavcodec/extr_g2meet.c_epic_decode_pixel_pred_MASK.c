
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int unsigned_rung; int els_ctx; } ;
typedef TYPE_1__ ePICContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 unsigned int FUNC_3 (int *,int *) ;

__attribute__((used)) static uint32_t FUNC_4(ePICContext *VAR_3, int VAR_4, int VAR_5,
                                       const uint32_t *VAR_6,
                                       const uint32_t *VAR_7)
{
    uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
    unsigned VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

    if (VAR_4 && VAR_5) {
        VAR_9 = VAR_6[VAR_4 - 1];
        VAR_8 = VAR_7[VAR_4];
        VAR_10 = VAR_7[VAR_4 - 1];

        VAR_13 = (VAR_8 >> VAR_1) & 0xFF;
        VAR_14 = (VAR_9 >> VAR_1) & 0xFF;
        VAR_15 = (VAR_10 >> VAR_1) & 0xFF;

        VAR_17 = FUNC_2(VAR_3, VAR_13, VAR_14, VAR_15);

        VAR_16 = VAR_17 + FUNC_2(VAR_3,
                                           ((VAR_8 >> VAR_2) & 0xFF) - VAR_13,
                                           ((VAR_9 >> VAR_2) & 0xFF) - VAR_14,
                                           ((VAR_10 >> VAR_2) & 0xFF) - VAR_15);

        VAR_18 = VAR_17 + FUNC_2(VAR_3,
                                           ((VAR_8 >> VAR_0) & 0xFF) - VAR_13,
                                           ((VAR_9 >> VAR_0) & 0xFF) - VAR_14,
                                           ((VAR_10 >> VAR_0) & 0xFF) - VAR_15);
    } else {
        if (VAR_4)
            VAR_11 = VAR_6[VAR_4 - 1];
        else
            VAR_11 = VAR_7[VAR_4];

        VAR_12 = FUNC_3(&VAR_3->els_ctx, &VAR_3->unsigned_rung);
        VAR_16 = ((VAR_11 >> VAR_2) & 0xFF) - FUNC_0(VAR_12);

        VAR_12 = FUNC_3(&VAR_3->els_ctx, &VAR_3->unsigned_rung);
        VAR_17 = ((VAR_11 >> VAR_1) & 0xFF) - FUNC_0(VAR_12);

        VAR_12 = FUNC_3(&VAR_3->els_ctx, &VAR_3->unsigned_rung);
        VAR_18 = ((VAR_11 >> VAR_0) & 0xFF) - FUNC_0(VAR_12);
    }

    if (VAR_16<0 || VAR_17<0 || VAR_18<0 || VAR_16 > 255 || VAR_17 > 255 || VAR_18 > 255) {
        FUNC_1(((void*)0), "RGB %d %d %d is out of range\n", VAR_16, VAR_17, VAR_18);
        return 0;
    }

    return (VAR_16 << VAR_2) | (VAR_17 << VAR_1) | (VAR_18 << VAR_0);
}
