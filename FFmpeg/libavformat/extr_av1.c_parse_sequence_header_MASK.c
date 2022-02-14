
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int level; int tier; void* profile; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AV1SequenceParameters ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int const*,int,int ) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(AV1SequenceParameters *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    GetBitContext VAR_5;
    int VAR_6;
    int VAR_7, VAR_8;
    int VAR_9, VAR_10;

    VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_0);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_10 = FUNC_4(&VAR_5, VAR_3, VAR_9);
    if (VAR_10 < 0)
        return VAR_10;

    FUNC_5(VAR_2, 0, sizeof(*VAR_2));

    VAR_2->profile = FUNC_0(&VAR_5, 3);

    FUNC_8(&VAR_5);
    VAR_6 = FUNC_1(&VAR_5);

    if (VAR_6) {
        VAR_2->level = FUNC_0(&VAR_5, 5);
        VAR_2->tier = 0;
    } else {
        int VAR_11, VAR_12;
        int VAR_13, VAR_14;

        if (FUNC_1(&VAR_5)) {
            FUNC_9(&VAR_5, 32);
            FUNC_9(&VAR_5, 32);

            if (FUNC_1(&VAR_5))
                FUNC_10(&VAR_5);

            VAR_13 = FUNC_1(&VAR_5);
            if (VAR_13) {
                VAR_14 = FUNC_0(&VAR_5, 5);
                FUNC_9(&VAR_5, 32);
                FUNC_7(&VAR_5, 10);

            }
        } else
            VAR_13 = 0;

        VAR_11 = FUNC_1(&VAR_5);

        VAR_12 = FUNC_0(&VAR_5, 5);
        for (int VAR_15 = 0; VAR_15 <= VAR_12; VAR_15++) {
            int VAR_16, VAR_17;

            FUNC_7(&VAR_5, 12);
            VAR_16 = FUNC_0(&VAR_5, 5);

            if (VAR_16 > 7)
                VAR_17 = FUNC_1(&VAR_5);
            else
                VAR_17 = 0;

            if (VAR_13) {
                if (FUNC_1(&VAR_5)) {
                    FUNC_9(&VAR_5, VAR_14 + 1);
                    FUNC_9(&VAR_5, VAR_14 + 1);
                    FUNC_8(&VAR_5);
                }
            }

            if (VAR_11) {
                if (FUNC_1(&VAR_5))
                    FUNC_7(&VAR_5, 4);
            }

            if (VAR_15 == 0) {
               VAR_2->level = VAR_16;
               VAR_2->tier = VAR_17;
            }
        }
    }

    VAR_7 = FUNC_0(&VAR_5, 4);
    VAR_8 = FUNC_0(&VAR_5, 4);

    FUNC_7(&VAR_5, VAR_7 + 1);
    FUNC_7(&VAR_5, VAR_8 + 1);

    if (!VAR_6) {
        if (FUNC_1(&VAR_5))
            FUNC_7(&VAR_5, 7);
    }

    FUNC_7(&VAR_5, 3);

    if (!VAR_6) {
        int VAR_18, VAR_19;

        FUNC_7(&VAR_5, 4);


        VAR_18 = FUNC_1(&VAR_5);
        if (VAR_18)
            FUNC_7(&VAR_5, 2);

        if (FUNC_1(&VAR_5))
            VAR_19 = 2;
        else
            VAR_19 = FUNC_1(&VAR_5);

        if (VAR_19) {
            if (!FUNC_1(&VAR_5))
                FUNC_8(&VAR_5);
        }

        if (VAR_18)
            FUNC_7(&VAR_5, 3);
    }

    FUNC_7(&VAR_5, 3);

    FUNC_6(VAR_2, &VAR_5);

    FUNC_8(&VAR_5);

    if (FUNC_2(&VAR_5))
        return VAR_1;

    return 0;
}
