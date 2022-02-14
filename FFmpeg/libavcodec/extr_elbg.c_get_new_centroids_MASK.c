
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dim; int * points; TYPE_2__** cells; } ;
typedef TYPE_1__ elbg_data ;
struct TYPE_5__ {int index; struct TYPE_5__* next; } ;
typedef TYPE_2__ cell ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(elbg_data *VAR_1, int VAR_2, int *VAR_3,
                              int *VAR_4)
{
    cell *VAR_5;
    int *VAR_6 = VAR_3;
    int *VAR_7 = VAR_4;
    int VAR_8;

    for (VAR_8=0; VAR_8< VAR_1->dim; VAR_8++) {
        VAR_6[VAR_8]=VAR_0;
        VAR_7[VAR_8]=0;
    }

    for (VAR_5 = VAR_1->cells[VAR_2]; VAR_5; VAR_5 = VAR_5->next)
        for(VAR_8=0; VAR_8<VAR_1->dim; VAR_8++) {
            VAR_6[VAR_8]=FUNC_1(VAR_6[VAR_8], VAR_1->points[VAR_5->index*VAR_1->dim + VAR_8]);
            VAR_7[VAR_8]=FUNC_0(VAR_7[VAR_8], VAR_1->points[VAR_5->index*VAR_1->dim + VAR_8]);
        }

    for (VAR_8=0; VAR_8<VAR_1->dim; VAR_8++) {
        int VAR_9 = VAR_6[VAR_8] + (VAR_7[VAR_8] - VAR_6[VAR_8])/3;
        int VAR_10 = VAR_6[VAR_8] + (2*(VAR_7[VAR_8] - VAR_6[VAR_8]))/3;
        VAR_3[VAR_8] = VAR_9;
        VAR_4[VAR_8] = VAR_10;
    }
}
