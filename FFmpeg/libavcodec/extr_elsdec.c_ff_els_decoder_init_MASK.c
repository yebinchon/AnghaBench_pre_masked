
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {size_t data_size; int j; scalar_t__ x; int diff; scalar_t__ t; scalar_t__ err; scalar_t__ const* in_buf; } ;
typedef TYPE_1__ ElsDecCtx ;


 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_2 ;

void FUNC_3(ElsDecCtx *VAR_3, const uint8_t *VAR_4, size_t VAR_5)
{
    int VAR_6;


    if (VAR_5 >= 3) {
        VAR_3->x = FUNC_1(VAR_4);
        VAR_6 = 3;
    } else if (VAR_5 == 2) {
        VAR_3->x = FUNC_0(VAR_4);
        VAR_6 = 2;
    } else {
        VAR_3->x = *VAR_4;
        VAR_6 = 1;
    }

    VAR_3->in_buf = VAR_4 + VAR_6;
    VAR_3->data_size = VAR_5 - VAR_6;
    VAR_3->err = 0;
    VAR_3->j = VAR_0;
    VAR_3->t = VAR_1;
    VAR_3->diff = FUNC_2(VAR_1 - VAR_3->x,
                           VAR_1 - VAR_2[VAR_0 * 4 - 1]);
}
