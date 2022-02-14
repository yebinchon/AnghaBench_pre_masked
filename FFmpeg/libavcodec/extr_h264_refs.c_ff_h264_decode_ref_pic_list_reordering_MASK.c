
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int list_count; int* ref_count; scalar_t__* nb_ref_modifications; TYPE_1__** ref_modifications; int gb; } ;
struct TYPE_4__ {unsigned int op; int val; } ;
typedef TYPE_2__ H264SliceContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,char*,...) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(H264SliceContext *VAR_2, void *VAR_3)
{
    int VAR_4, VAR_5;

    VAR_2->nb_ref_modifications[0] = 0;
    VAR_2->nb_ref_modifications[1] = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2->list_count; VAR_4++) {
        if (!FUNC_1(&VAR_2->gb))
            continue;

        for (VAR_5 = 0; ; VAR_5++) {
            unsigned int VAR_6 = FUNC_2(&VAR_2->gb);

            if (VAR_6 == 3)
                break;

            if (VAR_5 >= VAR_2->ref_count[VAR_4]) {
                FUNC_0(VAR_3, VAR_1, "reference count overflow\n");
                return VAR_0;
            } else if (VAR_6 > 2) {
                FUNC_0(VAR_3, VAR_1,
                       "illegal modification_of_pic_nums_idc %u\n",
                       VAR_6);
                return VAR_0;
            }
            VAR_2->ref_modifications[VAR_4][VAR_5].val = FUNC_3(&VAR_2->gb);
            VAR_2->ref_modifications[VAR_4][VAR_5].op = VAR_6;
            VAR_2->nb_ref_modifications[VAR_4]++;
        }
    }

    return 0;
}
