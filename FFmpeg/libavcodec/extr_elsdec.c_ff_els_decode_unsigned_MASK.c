
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int next_index; int rung; } ;
typedef TYPE_1__ uint8_t ;
typedef size_t ptrdiff_t ;
struct TYPE_13__ {scalar_t__ err; } ;
struct TYPE_12__ {int rung_list_size; int avail_index; TYPE_1__* rem_rung_list; int * prefix_rung; } ;
typedef TYPE_2__ ElsUnsignedRung ;
typedef TYPE_1__ ElsRungNode ;
typedef TYPE_4__ ElsDecCtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

unsigned FUNC_5(ElsDecCtx *VAR_4, ElsUnsignedRung *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    ElsRungNode *VAR_10;

    if (VAR_4->err)
        return 0;


    for (VAR_7 = 0; VAR_7 < VAR_1 + 1; VAR_7++)
        if (FUNC_3(VAR_4, &VAR_5->prefix_rung[VAR_7]))
            break;


    if (VAR_4->err || VAR_7 >= VAR_1) {
        VAR_4->err = VAR_0;
        return 0;
    }


    if (!VAR_7)
        return 0;


    if (!VAR_5->rem_rung_list) {
        VAR_5->rem_rung_list = FUNC_1(((void*)0), VAR_3);
        if (!VAR_5->rem_rung_list) {
            VAR_4->err = FUNC_0(VAR_2);
            return 0;
        }
        FUNC_4(VAR_5->rem_rung_list, 0, VAR_3);
        VAR_5->rung_list_size = VAR_3;
        VAR_5->avail_index = VAR_1;
    }


    for (VAR_6 = 0, VAR_8 = 0, VAR_9 = 0; VAR_6 < VAR_7; VAR_6++) {
        if (!VAR_6)
            VAR_10 = &VAR_5->rem_rung_list[VAR_7];
        else {
            if (!VAR_10->next_index) {
                if (VAR_5->rung_list_size <= (VAR_5->avail_index + 2) * sizeof(ElsRungNode)) {

                    ptrdiff_t VAR_11 = VAR_10 - VAR_5->rem_rung_list;
                    VAR_4->err = FUNC_2(&VAR_5->rem_rung_list,
                                                   VAR_5->rung_list_size +
                                                   VAR_3);
                    if (VAR_4->err < 0) {
                        return 0;
                    }
                    FUNC_4((uint8_t *) VAR_5->rem_rung_list + VAR_5->rung_list_size, 0,
                           VAR_3);
                    VAR_5->rung_list_size += VAR_3;

                    VAR_10 = &VAR_5->rem_rung_list[VAR_11];
                }
                VAR_10->next_index = VAR_5->avail_index;
                VAR_5->avail_index += 2;
            }
            VAR_10 = &VAR_5->rem_rung_list[VAR_10->next_index + VAR_9];
        }

        VAR_9 = FUNC_3(VAR_4, &VAR_10->rung);
        if (VAR_4->err)
            return VAR_9;

        VAR_8 = (VAR_8 << 1) + VAR_9;
    }

    return (1 << VAR_7) - 1 + VAR_8;
}
