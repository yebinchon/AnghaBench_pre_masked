
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m; int inv; int* revtab; } ;
typedef TYPE_1__ AVTXContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* FUNC_1 (int const) ;
 int const FUNC_2 (int,int const,int const) ;

int FUNC_3(AVTXContext *VAR_1)
{
    const int VAR_2 = VAR_1->m, VAR_3 = VAR_1->inv;

    if (!(VAR_1->revtab = FUNC_1(VAR_2*sizeof(*VAR_1->revtab))))
        return FUNC_0(VAR_0);


    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        int VAR_5 = -FUNC_2(VAR_4, VAR_2, VAR_3) & (VAR_2 - 1);
        VAR_1->revtab[VAR_5] = VAR_4;
    }

    return 0;
}
