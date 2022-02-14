
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pb; } ;
struct TYPE_5__ {int num_pulse; int start; int* pos; int* amp; } ;
typedef TYPE_1__ Pulse ;
typedef TYPE_2__ AACEncContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(AACEncContext *VAR_0, Pulse *VAR_1)
{
    int VAR_2;

    FUNC_0(&VAR_0->pb, 1, !!VAR_1->num_pulse);
    if (!VAR_1->num_pulse)
        return;

    FUNC_0(&VAR_0->pb, 2, VAR_1->num_pulse - 1);
    FUNC_0(&VAR_0->pb, 6, VAR_1->start);
    for (VAR_2 = 0; VAR_2 < VAR_1->num_pulse; VAR_2++) {
        FUNC_0(&VAR_0->pb, 5, VAR_1->pos[VAR_2]);
        FUNC_0(&VAR_0->pb, 4, VAR_1->amp[VAR_2]);
    }
}
