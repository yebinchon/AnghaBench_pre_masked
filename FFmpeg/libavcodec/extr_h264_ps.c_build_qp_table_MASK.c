
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** chroma_qp_table; } ;
typedef TYPE_1__ PPS ;


 size_t FUNC_0 (int,int ,int const) ;
 int ** VAR_0 ;

__attribute__((used)) static void FUNC_1(PPS *VAR_1, int VAR_2, int VAR_3, const int VAR_4)
{
    int VAR_5;
    const int VAR_6 = 51 + 6 * (VAR_4 - 8);
    for (VAR_5 = 0; VAR_5 < VAR_6 + 1; VAR_5++)
        VAR_1->chroma_qp_table[VAR_2][VAR_5] =
            VAR_0[VAR_4 - 8][FUNC_0(VAR_5 + VAR_3, 0, VAR_6)];
}
