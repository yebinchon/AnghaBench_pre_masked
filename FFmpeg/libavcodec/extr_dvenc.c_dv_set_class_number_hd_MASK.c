
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef void* int16_t ;
struct TYPE_3__ {int* area_q; int* sign; int* save; int* bit_size; int min_qlevel; scalar_t__ cno; void** mb; } ;
typedef TYPE_1__ EncBlockInfo ;
typedef int DVVideoContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(DVVideoContext *VAR_0,
                                          int16_t *VAR_1, EncBlockInfo *VAR_2,
                                          const uint8_t *VAR_3,
                                          const int *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7 = 0;


    VAR_2->area_q[0] = 1;




    for (VAR_6 = 0; VAR_6 < 64; VAR_6 += 2) {
        int VAR_8, VAR_9;


        VAR_8 = VAR_1[VAR_3[VAR_6+0]];
        VAR_9 = VAR_1[VAR_3[VAR_6+1]];


        VAR_2->sign[VAR_6+0] = (VAR_8>>31)&1;
        VAR_2->sign[VAR_6+1] = (VAR_9>>31)&1;


        VAR_8 = FUNC_0(VAR_8);
        VAR_9 = FUNC_0(VAR_9);


        VAR_8 = (VAR_8*VAR_4[VAR_6+0] + 4096 + (1<<17)) >> 18;
        VAR_9 = (VAR_9*VAR_4[VAR_6+1] + 4096 + (1<<17)) >> 18;


        VAR_2->save[VAR_6+0] = VAR_8;
        VAR_2->save[VAR_6+1] = VAR_9;


        if (VAR_2->save[VAR_6+0] > VAR_7)
            VAR_7 = VAR_2->save[VAR_6+0];
        if (VAR_2->save[VAR_6+1] > VAR_7)
            VAR_7 = VAR_2->save[VAR_6+1];
    }


    VAR_2->mb[0] = VAR_1[0];


    VAR_2->bit_size[0] = 4;
    VAR_2->bit_size[1] = VAR_2->bit_size[2] = VAR_2->bit_size[3] = 0;


    VAR_2->min_qlevel = ((VAR_7+256) >> 8);

    VAR_2->area_q[0] = 25;
    VAR_2->cno = 0;
}
