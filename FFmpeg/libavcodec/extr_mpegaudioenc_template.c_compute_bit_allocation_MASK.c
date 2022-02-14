
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_channels; int frame_size; int frame_frac; int do_padding; unsigned char* alloc_table; int sblimit; size_t** scale_code; int* total_quant_bits; scalar_t__ frame_frac_incr; } ;
typedef TYPE_1__ MpegAudioContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int,int,int,unsigned char) ;
 int FUNC_2 (short**,short**,int) ;
 int FUNC_3 (unsigned char**,unsigned char,int) ;
 int* VAR_6 ;
 short* VAR_7 ;

__attribute__((used)) static void FUNC_4(MpegAudioContext *VAR_8,
                                   short VAR_9[VAR_1][VAR_2],
                                   unsigned char VAR_10[VAR_1][VAR_2],
                                   int *VAR_11)
{
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20;
    short VAR_21[VAR_1][VAR_2];
    unsigned char VAR_22[VAR_1][VAR_2];
    const unsigned char *VAR_23;

    FUNC_2(VAR_21, VAR_9, VAR_8->nb_channels * sizeof(short) * VAR_2);
    FUNC_3(VAR_22, VAR_5, VAR_8->nb_channels * VAR_2);
    FUNC_3(VAR_10, 0, VAR_8->nb_channels * VAR_2);


    VAR_19 = VAR_8->frame_size;
    VAR_8->frame_frac += VAR_8->frame_frac_incr;
    if (VAR_8->frame_frac >= 65536) {
        VAR_8->frame_frac -= 65536;
        VAR_8->do_padding = 1;
        VAR_19 += 8;
    } else {
        VAR_8->do_padding = 0;
    }


    VAR_18 = 32;
    VAR_23 = VAR_8->alloc_table;
    for(VAR_12=0;VAR_12<VAR_8->sblimit;VAR_12++) {
        VAR_20 = VAR_23[0];
        VAR_18 += VAR_20 * VAR_8->nb_channels;
        VAR_23 += 1 << VAR_20;
    }
    for(;;) {

        VAR_17 = -1;
        VAR_16 = -1;
        VAR_15 = VAR_0;
        for(VAR_13=0;VAR_13<VAR_8->nb_channels;VAR_13++) {
            for(VAR_12=0;VAR_12<VAR_8->sblimit;VAR_12++) {
                if (VAR_21[VAR_13][VAR_12] > VAR_15 && VAR_22[VAR_13][VAR_12] != VAR_4) {
                    VAR_15 = VAR_21[VAR_13][VAR_12];
                    VAR_17 = VAR_12;
                    VAR_16 = VAR_13;
                }
            }
        }
        if (VAR_17 < 0)
            break;
        FUNC_1(((void*)0), "current=%d max=%d max_sb=%d max_ch=%d alloc=%d\n",
                VAR_18, VAR_19, VAR_17, VAR_16,
                VAR_10[VAR_16][VAR_17]);



        VAR_23 = VAR_8->alloc_table;
        for(VAR_12=0;VAR_12<VAR_17;VAR_12++) {
            VAR_23 += 1 << VAR_23[0];
        }

        if (VAR_22[VAR_16][VAR_17] == VAR_5) {

            VAR_20 = 2 + VAR_6[VAR_8->scale_code[VAR_16][VAR_17]] * 6;
            VAR_20 += VAR_8->total_quant_bits[VAR_23[1]];
        } else {

            VAR_14 = VAR_10[VAR_16][VAR_17];
            VAR_20 = VAR_8->total_quant_bits[VAR_23[VAR_14 + 1]] -
                VAR_8->total_quant_bits[VAR_23[VAR_14]];
        }

        if (VAR_18 + VAR_20 <= VAR_19) {

            VAR_14 = ++VAR_10[VAR_16][VAR_17];
            VAR_18 += VAR_20;

            VAR_21[VAR_16][VAR_17] = VAR_9[VAR_16][VAR_17] - VAR_7[VAR_23[VAR_14]];

            if (VAR_14 == ((1 << VAR_23[0]) - 1))
                VAR_22[VAR_16][VAR_17] = VAR_4;
            else
                VAR_22[VAR_16][VAR_17] = VAR_3;
        } else {

            VAR_22[VAR_16][VAR_17] = VAR_4;
        }
    }
    *VAR_11 = VAR_19 - VAR_18;
    FUNC_0(*VAR_11 >= 0);
}
