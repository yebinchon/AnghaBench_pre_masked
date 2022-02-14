
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int op_pixels_func ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int * obmc_scratchpad; } ;
struct TYPE_6__ {scalar_t__ quarter_sample; int linesize; TYPE_1__ sc; } ;
typedef TYPE_2__ MpegEncContext ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int,int,int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int **,int) ;

__attribute__((used)) static inline void FUNC_3(MpegEncContext *VAR_1,
                               uint8_t *VAR_2, uint8_t *VAR_3,
                               int VAR_4, int VAR_5,
                               op_pixels_func *VAR_6,
                               int16_t VAR_7[5][2] )

{
    int VAR_8;
    uint8_t *VAR_9[5];

    FUNC_0(VAR_1->quarter_sample == 0);

    for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
        if (VAR_8 && VAR_7[VAR_8][0] == VAR_7[0][0] && VAR_7[VAR_8][1] == VAR_7[0][1]) {
            VAR_9[VAR_8] = VAR_9[0];
        } else {
            VAR_9[VAR_8] = VAR_1->sc.obmc_scratchpad + 8 * (VAR_8 & 1) +
                     VAR_1->linesize * 8 * (VAR_8 >> 1);
            FUNC_1(VAR_1, VAR_9[VAR_8], VAR_3, VAR_4, VAR_5, VAR_6,
                        VAR_7[VAR_8][0], VAR_7[VAR_8][1]);
        }
    }

    FUNC_2(VAR_2, VAR_9, VAR_1->linesize);
}
