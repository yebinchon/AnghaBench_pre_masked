
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* vector_sig; int* vector_dct; int** vector_pdi; int vector_pdv; int mb_types_stats; } ;
typedef TYPE_1__ VP56Model ;
struct TYPE_5__ {TYPE_1__* modelp; } ;
typedef TYPE_2__ VP56Context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(VP56Context *VAR_1)
{
    VP56Model *VAR_2 = VAR_1->modelp;
    int VAR_3;

    for (VAR_3=0; VAR_3<2; VAR_3++) {
        VAR_2->vector_sig[VAR_3] = 0x80;
        VAR_2->vector_dct[VAR_3] = 0x80;
        VAR_2->vector_pdi[VAR_3][0] = 0x55;
        VAR_2->vector_pdi[VAR_3][1] = 0x80;
    }
    FUNC_0(VAR_2->mb_types_stats, VAR_0, sizeof(VAR_2->mb_types_stats));
    FUNC_1(VAR_2->vector_pdv, 0x80, sizeof(VAR_2->vector_pdv));
}
