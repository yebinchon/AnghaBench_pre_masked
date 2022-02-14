
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int* intra_matrix; } ;
typedef TYPE_1__ TqiContext ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(TqiContext *VAR_2, int VAR_3)
{
    const int64_t VAR_4 = (215 - 2*VAR_3)*5;
    int VAR_5;

    VAR_2->intra_matrix[0] = (VAR_0[0] * VAR_1[0]) >> 11;
    for(VAR_5=1; VAR_5<64; VAR_5++)
        VAR_2->intra_matrix[VAR_5] = (VAR_0[VAR_5] * VAR_1[VAR_5] * VAR_4 + 32) >> 14;
}
