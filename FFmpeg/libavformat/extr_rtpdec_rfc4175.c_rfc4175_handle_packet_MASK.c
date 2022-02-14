
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {scalar_t__ timestamp; int* frame; int frame_size; int pgroup; int width; int xinc; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,char*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5, PayloadContext *VAR_6,
                                 AVStream *VAR_7, AVPacket *VAR_8, uint32_t *VAR_9,
                                 const uint8_t * VAR_10, int VAR_11,
                                 uint16_t VAR_12, int VAR_13)
{
    int VAR_14, VAR_15, VAR_16, VAR_17;
    const uint8_t *VAR_18 = VAR_10 + 2;
    const uint8_t *VAR_19 = VAR_10 + 2;
    int VAR_20 = VAR_11 - 2;
    int VAR_21 = 0;

    uint8_t *VAR_22;

    if (*VAR_9 != VAR_6->timestamp) {
        if (VAR_6->frame) {







            FUNC_1(VAR_5, VAR_1, "Missed previous RTP Marker\n");
            VAR_21 = 1;
            FUNC_4(VAR_6, VAR_8, VAR_7->index);
        }

        VAR_6->frame = FUNC_2(VAR_6->frame_size);

        VAR_6->timestamp = *VAR_9;

        if (!VAR_6->frame) {
            FUNC_1(VAR_5, VAR_1, "Out of memory.\n");
            return FUNC_0(VAR_3);
        }
    }





    do {
        if (VAR_20 < 6)
            return VAR_0;

        VAR_17 = VAR_19[4] & 0x80;
        VAR_19 += 6;
        VAR_20 -= 6;
    } while (VAR_17);


    do {
        int VAR_23;

        if (VAR_20 < VAR_6->pgroup)
            return VAR_0;

        VAR_14 = (VAR_18[0] << 8) | VAR_18[1];
        VAR_15 = ((VAR_18[2] & 0x7f) << 8) | VAR_18[3];
        VAR_16 = ((VAR_18[4] & 0x7f) << 8) | VAR_18[5];
        VAR_17 = VAR_18[4] & 0x80;
        VAR_18 += 6;

        if (VAR_14 % VAR_6->pgroup)
            return VAR_0;

        if (VAR_14 > VAR_20)
            VAR_14 = VAR_20;


        VAR_23 = (VAR_15 * VAR_6->width + VAR_16) * VAR_6->pgroup / VAR_6->xinc;
        if (VAR_23 + VAR_14 > VAR_6->frame_size)
            return VAR_0;

        VAR_22 = VAR_6->frame + VAR_23;
        FUNC_3(VAR_22, VAR_19, VAR_14);

        VAR_19 += VAR_14;
        VAR_20 -= VAR_14;
    } while (VAR_17);

    if ((VAR_13 & VAR_4)) {
        return FUNC_4(VAR_6, VAR_8, VAR_7->index);
    } else if (VAR_21) {
        return 0;
    }

    return FUNC_0(VAR_2);
}
