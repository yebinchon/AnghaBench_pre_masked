
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* vector_dct; int* vector_sig; int coeff_reorder; int coeff_runv; int vector_pdv; int vector_fdv; int mb_types_stats; } ;
typedef TYPE_1__ VP56Model ;
struct TYPE_6__ {TYPE_1__* modelp; } ;
typedef TYPE_2__ VP56Context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(VP56Context *VAR_5)
{
    VP56Model *VAR_6 = VAR_5->modelp;

    VAR_6->vector_dct[0] = 0xA2;
    VAR_6->vector_dct[1] = 0xA4;
    VAR_6->vector_sig[0] = 0x80;
    VAR_6->vector_sig[1] = 0x80;

    FUNC_0(VAR_6->mb_types_stats, VAR_0, sizeof(VAR_6->mb_types_stats));
    FUNC_0(VAR_6->vector_fdv, VAR_2, sizeof(VAR_6->vector_fdv));
    FUNC_0(VAR_6->vector_pdv, VAR_3, sizeof(VAR_6->vector_pdv));
    FUNC_0(VAR_6->coeff_runv, VAR_4, sizeof(VAR_6->coeff_runv));
    FUNC_0(VAR_6->coeff_reorder, VAR_1, sizeof(VAR_6->coeff_reorder));

    FUNC_1(VAR_5);
}
