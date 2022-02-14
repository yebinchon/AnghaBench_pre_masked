
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_groups; void** idx; TYPE_1__* groups; } ;
struct TYPE_7__ {int gb; int avctx; } ;
struct TYPE_6__ {int nb_exponent; int exp_ofs; } ;
typedef TYPE_1__ DBEGroup ;
typedef TYPE_2__ DBEContext ;
typedef TYPE_3__ DBEChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (void**,void**,int) ;
 int FUNC_4 (void**,int ,int) ;

__attribute__((used)) static int FUNC_5(DBEContext *VAR_2, DBEChannel *VAR_3)
{
    DBEGroup *VAR_4, *VAR_5;
    int VAR_6, VAR_7;

    for (VAR_6 = 0, VAR_4 = ((void*)0), VAR_5 = VAR_3->groups; VAR_6 < VAR_3->nb_groups; VAR_6++, VAR_4 = VAR_5, VAR_5++) {
        if (FUNC_2(&VAR_2->gb)) {
            int VAR_8 = FUNC_1(&VAR_2->gb, 6);

            if (VAR_8 > VAR_5->nb_exponent) {
                FUNC_0(VAR_2->avctx, VAR_1, "Invalid start index\n");
                return VAR_0;
            }

            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
                VAR_3->idx[VAR_5->exp_ofs + VAR_7] = 0;

            for (; VAR_7 < VAR_5->nb_exponent; VAR_7++)
                VAR_3->idx[VAR_5->exp_ofs + VAR_7] = FUNC_1(&VAR_2->gb, 2);
        } else if (VAR_6 && VAR_5->nb_exponent == VAR_4->nb_exponent) {
            FUNC_3(VAR_3->idx + VAR_5->exp_ofs,
                   VAR_3->idx + VAR_4->exp_ofs,
                   VAR_5->nb_exponent * sizeof(VAR_3->idx[0]));
        } else {
            FUNC_4(VAR_3->idx + VAR_5->exp_ofs, 0, VAR_5->nb_exponent * sizeof(VAR_3->idx[0]));
        }
    }

    return 0;
}
