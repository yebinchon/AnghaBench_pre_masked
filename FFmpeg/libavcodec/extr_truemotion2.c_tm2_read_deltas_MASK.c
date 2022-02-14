
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** deltas; int gb; int avctx; } ;
typedef TYPE_1__ TM2Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(TM2Context *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7, VAR_8;

    VAR_5 = FUNC_2(&VAR_3->gb, 9);
    VAR_6 = FUNC_2(&VAR_3->gb, 5);

    FUNC_0(VAR_6 < 32);
    if ((VAR_5 < 1) || (VAR_5 > VAR_2) || (VAR_6 < 1)) {
        FUNC_1(VAR_3->avctx, VAR_1, "Incorrect delta table: %i deltas x %i bits\n", VAR_5, VAR_6);
        return VAR_0;
    }

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_8 = FUNC_3(&VAR_3->gb, VAR_6);
        if (VAR_8 & (1 << (VAR_6 - 1)))
            VAR_3->deltas[VAR_4][VAR_7] = VAR_8 - (1U << VAR_6);
        else
            VAR_3->deltas[VAR_4][VAR_7] = VAR_8;
    }
    for (; VAR_7 < VAR_2; VAR_7++)
        VAR_3->deltas[VAR_4][VAR_7] = 0;

    return 0;
}
