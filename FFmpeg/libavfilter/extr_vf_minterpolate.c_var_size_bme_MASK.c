
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int mb_size; int search_param; int (* get_cost ) (TYPE_3__*,int,int,int,int) ;int pred_x; int pred_y; } ;
struct TYPE_10__ {int** mvs; int sb; struct TYPE_10__* subs; } ;
struct TYPE_9__ {TYPE_3__ me_ctx; } ;
typedef TYPE_1__ MIContext ;
typedef TYPE_2__ Block ;
typedef TYPE_3__ AVMotionEstContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int,int,int*) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(MIContext *VAR_1, Block *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    AVMotionEstContext *VAR_6 = &VAR_1->me_ctx;
    uint64_t VAR_7, VAR_8;
    int VAR_9 = VAR_6->mb_size;
    int VAR_10 = VAR_6->search_param;
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;
    int VAR_15;

    VAR_6->mb_size = 1 << VAR_5;
    VAR_8 = VAR_6->get_cost(VAR_6, VAR_3, VAR_4, VAR_3 + VAR_2->mvs[0][0], VAR_4 + VAR_2->mvs[0][1]);
    VAR_6->mb_size = VAR_9;

    if (!VAR_8) {
        VAR_2->sb = 0;
        return 0;
    }

    if (!VAR_2->subs) {
        VAR_2->subs = FUNC_1(4, sizeof(Block));
        if (!VAR_2->subs)
            return FUNC_0(VAR_0);
    }

    VAR_2->sb = 1;

    for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
        for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
            Block *VAR_16 = &VAR_2->subs[VAR_13 + VAR_14 * 2];
            int VAR_17[2] = {VAR_3 + VAR_2->mvs[0][0], VAR_4 + VAR_2->mvs[0][1]};

            VAR_6->mb_size = 1 << (VAR_5 - 1);
            VAR_6->search_param = 2;
            VAR_6->pred_x = VAR_2->mvs[0][0];
            VAR_6->pred_y = VAR_2->mvs[0][1];

            VAR_7 = FUNC_2(&VAR_1->me_ctx, VAR_3 + VAR_2->mvs[0][0], VAR_4 + VAR_2->mvs[0][1], VAR_17);
            VAR_11 = VAR_17[0] - VAR_3;
            VAR_12 = VAR_17[1] - VAR_4;

            VAR_6->mb_size = VAR_9;
            VAR_6->search_param = VAR_10;

            if (VAR_7 < VAR_8 / 4) {
                VAR_16->mvs[0][0] = VAR_11;
                VAR_16->mvs[0][1] = VAR_12;

                if (VAR_5 > 1) {
                    if ((VAR_15 = FUNC_4(VAR_1, VAR_16, VAR_3 + (VAR_13 << (VAR_5 - 1)), VAR_4 + (VAR_14 << (VAR_5 - 1)), VAR_5 - 1)))
                        return VAR_15;
                } else
                    VAR_16->sb = 0;
            } else {
                VAR_2->sb = 0;
                return 0;
            }
        }

    return 0;
}
