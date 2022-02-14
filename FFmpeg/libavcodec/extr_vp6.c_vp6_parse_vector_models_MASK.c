
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VP56RangeCoder ;
struct TYPE_4__ {void*** vector_fdv; void*** vector_pdv; void** vector_sig; void** vector_dct; } ;
typedef TYPE_1__ VP56Model ;
struct TYPE_5__ {TYPE_1__* modelp; int c; } ;
typedef TYPE_2__ VP56Context ;


 scalar_t__ FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 int ** VAR_2 ;

__attribute__((used)) static void FUNC_2(VP56Context *VAR_3)
{
    VP56RangeCoder *VAR_4 = &VAR_3->c;
    VP56Model *VAR_5 = VAR_3->modelp;
    int VAR_6, VAR_7;

    for (VAR_6=0; VAR_6<2; VAR_6++) {
        if (FUNC_0(VAR_4, VAR_2[VAR_6][0]))
            VAR_5->vector_dct[VAR_6] = FUNC_1(VAR_4, 7);
        if (FUNC_0(VAR_4, VAR_2[VAR_6][1]))
            VAR_5->vector_sig[VAR_6] = FUNC_1(VAR_4, 7);
    }

    for (VAR_6=0; VAR_6<2; VAR_6++)
        for (VAR_7=0; VAR_7<7; VAR_7++)
            if (FUNC_0(VAR_4, VAR_1[VAR_6][VAR_7]))
                VAR_5->vector_pdv[VAR_6][VAR_7] = FUNC_1(VAR_4, 7);

    for (VAR_6=0; VAR_6<2; VAR_6++)
        for (VAR_7=0; VAR_7<8; VAR_7++)
            if (FUNC_0(VAR_4, VAR_0[VAR_6][VAR_7]))
                VAR_5->vector_fdv[VAR_6][VAR_7] = FUNC_1(VAR_4, 7);
}
