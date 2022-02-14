
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sbc_frame {unsigned int*** sb_sample; } ;
struct sbc_decoder_state {int** V; int** offset; } ;
typedef int int32_t ;
struct TYPE_3__ {int ** data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 scalar_t__** VAR_2 ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_3(struct sbc_decoder_state *VAR_3,
                                        struct sbc_frame *VAR_4,
                                        int VAR_5, int VAR_6, AVFrame *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int32_t *VAR_11 = VAR_3->V[VAR_5];
    int *VAR_12 = VAR_3->offset[VAR_5];

    for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {

        VAR_12[VAR_8]--;
        if (VAR_12[VAR_8] < 0) {
            VAR_12[VAR_8] = 159;
            FUNC_2(VAR_11 + 160, VAR_11, 9 * sizeof(*VAR_11));
        }


        VAR_11[VAR_12[VAR_8]] =
             (int)( (unsigned)VAR_2[VAR_8][0] * VAR_4->sb_sample[VAR_6][VAR_5][0] +
                    (unsigned)VAR_2[VAR_8][1] * VAR_4->sb_sample[VAR_6][VAR_5][1] +
                    (unsigned)VAR_2[VAR_8][2] * VAR_4->sb_sample[VAR_6][VAR_5][2] +
                    (unsigned)VAR_2[VAR_8][3] * VAR_4->sb_sample[VAR_6][VAR_5][3] +
                    (unsigned)VAR_2[VAR_8][4] * VAR_4->sb_sample[VAR_6][VAR_5][4] +
                    (unsigned)VAR_2[VAR_8][5] * VAR_4->sb_sample[VAR_6][VAR_5][5] +
                    (unsigned)VAR_2[VAR_8][6] * VAR_4->sb_sample[VAR_6][VAR_5][6] +
                    (unsigned)VAR_2[VAR_8][7] * VAR_4->sb_sample[VAR_6][VAR_5][7] ) >> 15;
    }


    for (VAR_10 = 0, VAR_8 = 0; VAR_8 < 8; VAR_8++, VAR_10 += 5) {
        VAR_9 = (VAR_8 + 8) & 0xf;


        FUNC_0(&VAR_7->data[VAR_5][VAR_6 * 16 + VAR_8 * 2], FUNC_1(
         (int)( (unsigned)VAR_11[VAR_12[VAR_8] + 0] * VAR_0[VAR_10 + 0] +
                (unsigned)VAR_11[VAR_12[VAR_9] + 1] * VAR_1[VAR_10 + 0] +
                (unsigned)VAR_11[VAR_12[VAR_8] + 2] * VAR_0[VAR_10 + 1] +
                (unsigned)VAR_11[VAR_12[VAR_9] + 3] * VAR_1[VAR_10 + 1] +
                (unsigned)VAR_11[VAR_12[VAR_8] + 4] * VAR_0[VAR_10 + 2] +
                (unsigned)VAR_11[VAR_12[VAR_9] + 5] * VAR_1[VAR_10 + 2] +
                (unsigned)VAR_11[VAR_12[VAR_8] + 6] * VAR_0[VAR_10 + 3] +
                (unsigned)VAR_11[VAR_12[VAR_9] + 7] * VAR_1[VAR_10 + 3] +
                (unsigned)VAR_11[VAR_12[VAR_8] + 8] * VAR_0[VAR_10 + 4] +
                (unsigned)VAR_11[VAR_12[VAR_9] + 9] * VAR_1[VAR_10 + 4] ) >> 15));
    }
}
