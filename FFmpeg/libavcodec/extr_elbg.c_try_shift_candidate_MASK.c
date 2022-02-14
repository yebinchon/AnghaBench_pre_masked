
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int* scratchbuf; int dim; int error; TYPE_2__** cells; scalar_t__* points; scalar_t__* utility; } ;
typedef TYPE_1__ elbg_data ;
struct TYPE_13__ {int index; struct TYPE_13__* next; } ;
typedef TYPE_2__ cell ;


 int FUNC_0 (TYPE_1__*,int*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int*,int*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int*,int**) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int**,int*,scalar_t__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int*,int*,int,int) ;

__attribute__((used)) static void FUNC_8(elbg_data *VAR_0, int VAR_1[3])
{
    int VAR_2, VAR_3, VAR_4=0, VAR_5, VAR_6=0;
    int VAR_7[3];
    int *VAR_8[3] = {
        VAR_0->scratchbuf,
        VAR_0->scratchbuf + VAR_0->dim,
        VAR_0->scratchbuf + 2*VAR_0->dim
    };
    cell *VAR_9;

    for (VAR_2=0; VAR_2<3; VAR_2++)
        VAR_4 += VAR_0->utility[VAR_1[VAR_2]];

    FUNC_3(VAR_8[2], 0, VAR_0->dim*sizeof(int));

    for (VAR_3=0; VAR_3<2; VAR_3++)
        for (VAR_9=VAR_0->cells[VAR_1[2*VAR_3]]; VAR_9; VAR_9=VAR_9->next) {
            VAR_6++;
            for (VAR_2=0; VAR_2<VAR_0->dim; VAR_2++)
                VAR_8[2][VAR_2] += VAR_0->points[VAR_9->index*VAR_0->dim + VAR_2];
        }

    FUNC_7(VAR_8[2], VAR_8[2], VAR_6, VAR_0->dim);

    FUNC_2(VAR_0, VAR_1[1], VAR_8[0], VAR_8[1]);

    VAR_7[2] = FUNC_0(VAR_0, VAR_8[2], VAR_0->cells[VAR_1[0]]);
    VAR_7[2] += FUNC_0(VAR_0, VAR_8[2], VAR_0->cells[VAR_1[2]]);

    VAR_5 = VAR_7[2];

    VAR_5 += FUNC_5(VAR_0, VAR_0->dim, VAR_8, VAR_7, VAR_0->points,
                           VAR_0->cells[VAR_1[1]]);

    if (VAR_4 > VAR_5) {
        FUNC_4(VAR_0, VAR_1, VAR_8);

        VAR_0->error += VAR_5 - VAR_4;

        for (VAR_2=0; VAR_2<3; VAR_2++)
            FUNC_6(VAR_0, VAR_1[VAR_2], VAR_7[VAR_2]);

        FUNC_1(VAR_0);
    }
 }
