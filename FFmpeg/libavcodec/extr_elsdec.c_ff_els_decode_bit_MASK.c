
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {size_t ALps; size_t next0; size_t next1; scalar_t__ AMps; } ;
struct TYPE_5__ {size_t j; int t; int diff; int x; scalar_t__ err; } ;
typedef TYPE_1__ ElsDecCtx ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_4__* VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(ElsDecCtx *VAR_3, uint8_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    const uint32_t *VAR_8 = &VAR_2[VAR_0 * 3];

    if (VAR_3->err)
        return 0;

    VAR_5 = VAR_8[VAR_3->j + VAR_1[*VAR_4].ALps];
    VAR_3->t -= VAR_5;
    VAR_3->diff -= VAR_5;
    if (VAR_3->diff > 0)
        return *VAR_4 & 1;

    if (VAR_3->t > VAR_3->x) {
        VAR_3->j += VAR_1[*VAR_4].AMps;
        while (VAR_3->t > VAR_8[VAR_3->j])
            VAR_3->j++;

        if (VAR_3->j <= 0) {
            VAR_7 = FUNC_1(VAR_3);
            if (VAR_7 < 0)
                return VAR_7;
        }

        VAR_5 = VAR_3->t;
        VAR_6 = *VAR_4 & 1;
        *VAR_4 = VAR_1[*VAR_4].next0;
    } else {
        VAR_3->x -= VAR_3->t;
        VAR_3->t = VAR_5;

        VAR_3->j += VAR_1[*VAR_4].ALps;
        if (VAR_3->j <= 0) {

            VAR_5 <<= 8;
            VAR_7 = FUNC_1(VAR_3);
            if (VAR_7 < 0)
                return VAR_7;
            if (VAR_3->j <= 0) {

                VAR_5 <<= 8;
                VAR_7 = FUNC_1(VAR_3);
                if (VAR_7 < 0)
                    return VAR_7;
                while (VAR_8[VAR_3->j - 1] >= VAR_5)
                    VAR_3->j--;
            }
        }

        VAR_6 = !(*VAR_4 & 1);
        *VAR_4 = VAR_1[*VAR_4].next1;
    }

    VAR_3->diff = FUNC_0(VAR_5 - VAR_3->x, VAR_5 - VAR_8[VAR_3->j - 1]);

    return VAR_6;
}
