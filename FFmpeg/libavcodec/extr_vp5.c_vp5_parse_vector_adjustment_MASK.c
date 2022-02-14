
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
typedef TYPE_1__ VP56mv ;
typedef int VP56RangeCoder ;
struct TYPE_7__ {int * vector_pdv; int ** vector_pdi; int * vector_sig; int * vector_dct; } ;
typedef TYPE_2__ VP56Model ;
struct TYPE_8__ {TYPE_2__* modelp; int c; } ;
typedef TYPE_3__ VP56Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(VP56Context *VAR_1, VP56mv *VAR_2)
{
    VP56RangeCoder *VAR_3 = &VAR_1->c;
    VP56Model *VAR_4 = VAR_1->modelp;
    int VAR_5, VAR_6;

    for (VAR_5=0; VAR_5<2; VAR_5++) {
        int VAR_7 = 0;
        if (FUNC_1(VAR_3, VAR_4->vector_dct[VAR_5])) {
            int VAR_8 = FUNC_0(VAR_3, VAR_4->vector_sig[VAR_5]);
            VAR_6 = FUNC_0(VAR_3, VAR_4->vector_pdi[VAR_5][0]);
            VAR_6 |= FUNC_0(VAR_3, VAR_4->vector_pdi[VAR_5][1]) << 1;
            VAR_7 = FUNC_2(VAR_3, VAR_0,
                                      VAR_4->vector_pdv[VAR_5]);
            VAR_7 = VAR_6 | (VAR_7 << 2);
            VAR_7 = (VAR_7 ^ -VAR_8) + VAR_8;
        }
        if (!VAR_5)
            VAR_2->x = VAR_7;
        else
            VAR_2->y = VAR_7;
    }
}
