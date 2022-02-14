
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * outch; int ** coeff; int * shift; int * fbits; scalar_t__ count; } ;
typedef TYPE_1__ MatrixParams ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(MatrixParams *VAR_2, MatrixParams *VAR_3)
{
    VAR_2->count = VAR_3->count;

    if (VAR_2->count) {
        unsigned int VAR_4, VAR_5;

        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

            VAR_2->fbits[VAR_4] = VAR_3->fbits[VAR_4];
            VAR_2->shift[VAR_4] = VAR_3->shift[VAR_4];

            for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
                VAR_2->coeff[VAR_5][VAR_4] = VAR_3->coeff[VAR_5][VAR_4];
        }

        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
            VAR_2->outch[VAR_5] = VAR_3->outch[VAR_5];
    }
}
