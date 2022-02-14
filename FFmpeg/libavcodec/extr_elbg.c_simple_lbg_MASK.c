
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int scratchbuf; } ;
typedef TYPE_1__ elbg_data ;
struct TYPE_6__ {int index; struct TYPE_6__* next; } ;
typedef TYPE_2__ cell ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int,int ) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int*,int*,int,int) ;

__attribute__((used)) static int FUNC_3(elbg_data *VAR_1,
                      int VAR_2,
                      int *VAR_3[3],
                      int VAR_4[3],
                      int *VAR_5,
                      cell *VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9[2] = {0,0};
    int *VAR_10[2] = {
        VAR_1->scratchbuf + 3*VAR_2,
        VAR_1->scratchbuf + 4*VAR_2
    };
    cell *VAR_11;

    FUNC_1(VAR_10[0], 0, 2 * VAR_2 * sizeof(*VAR_10[0]));

    VAR_4[0] =
    VAR_4[1] = 0;

    for (VAR_11 = VAR_6; VAR_11; VAR_11=VAR_11->next) {
        VAR_8 = FUNC_0(VAR_3[0], VAR_5 + VAR_11->index*VAR_2, VAR_2, VAR_0)>=
              FUNC_0(VAR_3[1], VAR_5 + VAR_11->index*VAR_2, VAR_2, VAR_0);
        VAR_9[VAR_8]++;
        for (VAR_7=0; VAR_7<VAR_2; VAR_7++)
            VAR_10[VAR_8][VAR_7] += VAR_5[VAR_11->index*VAR_2 + VAR_7];
    }

    FUNC_2(VAR_3[0], VAR_10[0], VAR_9[0], VAR_2);
    FUNC_2(VAR_3[1], VAR_10[1], VAR_9[1], VAR_2);

    for (VAR_11 = VAR_6; VAR_11; VAR_11=VAR_11->next) {
        int VAR_12[2] = {FUNC_0(VAR_3[0], VAR_5 + VAR_11->index*VAR_2, VAR_2, VAR_0),
                       FUNC_0(VAR_3[1], VAR_5 + VAR_11->index*VAR_2, VAR_2, VAR_0)};
        int VAR_13 = VAR_12[0] > VAR_12[1];
        VAR_4[VAR_13] += VAR_12[VAR_13];
    }

    return VAR_4[0] + VAR_4[1];
}
