
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* area_q; int cno; int* bit_size; int* mb; int* next; int * save; } ;
typedef TYPE_1__ EncBlockInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(EncBlockInfo *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    int VAR_7 = FUNC_1(VAR_0[VAR_3]);
    int VAR_8 = FUNC_0(VAR_0[VAR_3]);

    if (VAR_2->area_q[0] == VAR_7 && VAR_2->cno == VAR_8)
        return VAR_2->bit_size[0];

    VAR_6 = VAR_1[VAR_7];


    VAR_2->area_q[0] = VAR_7;
    VAR_2->cno = VAR_8;


    VAR_2->bit_size[0] = 4;


    VAR_4 = 0;
    for (VAR_5 = 1; VAR_5 < 64; VAR_5++) {

        int VAR_9 = FUNC_2(VAR_2->save[VAR_5], VAR_6) >> VAR_8;
        if (VAR_9) {
            if (VAR_9 > 255)
                VAR_9 = 255;
            VAR_2->mb[VAR_5] = VAR_9;
            VAR_2->bit_size[0] += FUNC_3(VAR_5 - VAR_4 - 1, VAR_9);
            VAR_2->next[VAR_4] = VAR_5;
            VAR_4 = VAR_5;
        }
    }
    VAR_2->next[VAR_4] = VAR_5;

    return VAR_2->bit_size[0];
}
