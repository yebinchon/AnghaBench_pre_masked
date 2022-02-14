
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* avframe; } ;
struct TYPE_5__ {int display_picture_number; } ;
typedef TYPE_2__ DiracFrame ;



__attribute__((used)) static DiracFrame *FUNC_0(DiracFrame *VAR_0[], int VAR_1)
{
    DiracFrame *VAR_2 = ((void*)0);
    int VAR_3, VAR_4 = -1;

    for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
        if (VAR_0[VAR_3]->avframe->display_picture_number == VAR_1) {
            VAR_2 = VAR_0[VAR_3];
            VAR_4 = VAR_3;
        }

    if (VAR_2)
        for (VAR_3 = VAR_4; VAR_0[VAR_3]; VAR_3++)
            VAR_0[VAR_3] = VAR_0[VAR_3+1];

    return VAR_2;
}
