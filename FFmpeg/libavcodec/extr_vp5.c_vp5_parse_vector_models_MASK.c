
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VP56RangeCoder ;
struct TYPE_4__ {void*** vector_pdv; void*** vector_pdi; void** vector_sig; void** vector_dct; } ;
typedef TYPE_1__ VP56Model ;
struct TYPE_5__ {TYPE_1__* modelp; int c; } ;
typedef TYPE_2__ VP56Context ;


 scalar_t__ FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int) ;
 int ** VAR_0 ;

__attribute__((used)) static void FUNC_2(VP56Context *VAR_1)
{
    VP56RangeCoder *VAR_2 = &VAR_1->c;
    VP56Model *VAR_3 = VAR_1->modelp;
    int VAR_4, VAR_5;

    for (VAR_4=0; VAR_4<2; VAR_4++) {
        if (FUNC_0(VAR_2, VAR_0[VAR_4][0]))
            VAR_3->vector_dct[VAR_4] = FUNC_1(VAR_2, 7);
        if (FUNC_0(VAR_2, VAR_0[VAR_4][1]))
            VAR_3->vector_sig[VAR_4] = FUNC_1(VAR_2, 7);
        if (FUNC_0(VAR_2, VAR_0[VAR_4][2]))
            VAR_3->vector_pdi[VAR_4][0] = FUNC_1(VAR_2, 7);
        if (FUNC_0(VAR_2, VAR_0[VAR_4][3]))
            VAR_3->vector_pdi[VAR_4][1] = FUNC_1(VAR_2, 7);
    }

    for (VAR_4=0; VAR_4<2; VAR_4++)
        for (VAR_5=0; VAR_5<7; VAR_5++)
            if (FUNC_0(VAR_2, VAR_0[VAR_4][4 + VAR_5]))
                VAR_3->vector_pdv[VAR_4][VAR_5] = FUNC_1(VAR_2, 7);
}
