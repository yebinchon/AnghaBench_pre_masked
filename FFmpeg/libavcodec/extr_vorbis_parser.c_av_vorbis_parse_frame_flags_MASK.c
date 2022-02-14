
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int previous_blocksize; int mode_count; int const mode_mask; int* mode_blocksize; int const prev_mask; int* blocksize; scalar_t__ valid_extradata; } ;
typedef TYPE_1__ AVVorbisParseContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;

int FUNC_1(AVVorbisParseContext *VAR_5, const uint8_t *VAR_6,
                                int VAR_7, int *VAR_8)
{
    int VAR_9 = 0;

    if (VAR_5->valid_extradata && VAR_7 > 0) {
        int VAR_10, VAR_11;
        int VAR_12 = VAR_5->previous_blocksize;

        if (VAR_6[0] & 1) {

            if (!VAR_8)
                goto bad_packet;


            if (VAR_6[0] == 1)
                *VAR_8 |= VAR_3;
            else if (VAR_6[0] == 3)
                *VAR_8 |= VAR_2;
            else if (VAR_6[0] == 5)
                *VAR_8 |= VAR_4;
            else
                goto bad_packet;


            return 0;

bad_packet:
            FUNC_0(VAR_5, VAR_1, "Invalid packet\n");
            return VAR_0;
        }
        if (VAR_5->mode_count == 1)
            VAR_10 = 0;
        else
            VAR_10 = (VAR_6[0] & VAR_5->mode_mask) >> 1;
        if (VAR_10 >= VAR_5->mode_count) {
            FUNC_0(VAR_5, VAR_1, "Invalid mode in packet\n");
            return VAR_0;
        }
        if(VAR_5->mode_blocksize[VAR_10]){
            int VAR_13 = !!(VAR_6[0] & VAR_5->prev_mask);
            VAR_12 = VAR_5->blocksize[VAR_13];
        }
        VAR_11 = VAR_5->blocksize[VAR_5->mode_blocksize[VAR_10]];
        VAR_9 = (VAR_12 + VAR_11) >> 2;
        VAR_5->previous_blocksize = VAR_11;
    }

    return VAR_9;
}
