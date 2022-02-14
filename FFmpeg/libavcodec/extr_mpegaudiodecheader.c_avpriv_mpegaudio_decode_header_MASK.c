
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lsf; int layer; int sample_rate_index; int error_protection; int sample_rate; int mode; int mode_ext; int nb_channels; int bit_rate; int frame_size; } ;
typedef TYPE_1__ MPADecodeHeader ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int*** VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int) ;

int FUNC_3(MPADecodeHeader *VAR_5, uint32_t VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13;

    VAR_13 = FUNC_2(VAR_6);
    if (VAR_13 < 0)
        return VAR_13;

    if (VAR_6 & (1<<20)) {
        VAR_5->lsf = (VAR_6 & (1<<19)) ? 0 : 1;
        VAR_9 = 0;
    } else {
        VAR_5->lsf = 1;
        VAR_9 = 1;
    }

    VAR_5->layer = 4 - ((VAR_6 >> 17) & 3);

    VAR_11 = (VAR_6 >> 10) & 3;
    if (VAR_11 >= FUNC_0(VAR_4))
        VAR_11 = 0;
    VAR_7 = VAR_4[VAR_11] >> (VAR_5->lsf + VAR_9);
    VAR_11 += 3 * (VAR_5->lsf + VAR_9);
    VAR_5->sample_rate_index = VAR_11;
    VAR_5->error_protection = ((VAR_6 >> 16) & 1) ^ 1;
    VAR_5->sample_rate = VAR_7;

    VAR_12 = (VAR_6 >> 12) & 0xf;
    VAR_10 = (VAR_6 >> 9) & 1;

    VAR_5->mode = (VAR_6 >> 6) & 3;
    VAR_5->mode_ext = (VAR_6 >> 4) & 3;




    if (VAR_5->mode == VAR_2)
        VAR_5->nb_channels = 1;
    else
        VAR_5->nb_channels = 2;

    if (VAR_12 != 0) {
        VAR_8 = VAR_3[VAR_5->lsf][VAR_5->layer - 1][VAR_12];
        VAR_5->bit_rate = VAR_8 * 1000;
        switch(VAR_5->layer) {
        case 1:
            VAR_8 = (VAR_8 * 12000) / VAR_7;
            VAR_8 = (VAR_8 + VAR_10) * 4;
            break;
        case 2:
            VAR_8 = (VAR_8 * 144000) / VAR_7;
            VAR_8 += VAR_10;
            break;
        default:
        case 3:
            VAR_8 = (VAR_8 * 144000) / (VAR_7 << VAR_5->lsf);
            VAR_8 += VAR_10;
            break;
        }
        VAR_5->frame_size = VAR_8;
    } else {

        return 1;
    }
    return 0;
}
