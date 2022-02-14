
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {unsigned int initial_history; int history_mult; } ;
struct TYPE_6__ {int** predictor_buf; int frame_size; int write_sample_size; TYPE_1__ rc; } ;
typedef TYPE_2__ AlacEncodeContext ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_2__*,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_2(AlacEncodeContext *VAR_0, int VAR_1)
{
    unsigned int VAR_2 = VAR_0->rc.initial_history;
    int VAR_3 = 0, VAR_4, VAR_5;
    int32_t *VAR_6 = VAR_0->predictor_buf[VAR_1];

    for (VAR_4 = 0; VAR_4 < VAR_0->frame_size;) {
        int VAR_7;

        VAR_5 = FUNC_0((VAR_2 >> 9) + 3);

        VAR_7 = -2 * (*VAR_6) -1;
        VAR_7 ^= VAR_7 >> 31;

        VAR_6++;
        VAR_4++;

        FUNC_1(VAR_0, VAR_7 - VAR_3, VAR_5, VAR_0->write_sample_size);

        VAR_2 += VAR_7 * VAR_0->rc.history_mult -
                   ((VAR_2 * VAR_0->rc.history_mult) >> 9);

        VAR_3 = 0;
        if (VAR_7 > 0xFFFF)
            VAR_2 = 0xFFFF;

        if (VAR_2 < 128 && VAR_4 < VAR_0->frame_size) {
            unsigned int VAR_8 = 0;

            VAR_5 = 7 - FUNC_0(VAR_2) + ((VAR_2 + 16) >> 6);

            while (*VAR_6 == 0 && VAR_4 < VAR_0->frame_size) {
                VAR_6++;
                VAR_4++;
                VAR_8++;
            }
            FUNC_1(VAR_0, VAR_8, VAR_5, 16);
            VAR_3 = (VAR_8 <= 0xFFFF);
            VAR_2 = 0;
        }

    }
}
