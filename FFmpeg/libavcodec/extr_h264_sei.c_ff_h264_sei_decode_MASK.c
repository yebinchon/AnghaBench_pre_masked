
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int alternative_transfer; int green_metadata; int display_orientation; int frame_packing; int buffering_period; int recovery_point; int unregistered; int picture_timing; } ;
typedef TYPE_1__ H264SEIContext ;
typedef int H264ParamSets ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int ,char*,int,...) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int const*,void*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int const*,void*) ;
 int FUNC_8 (int *,int *,void*) ;
 int FUNC_9 (TYPE_1__*,int *,void*,unsigned int) ;
 int FUNC_10 (int *,int *,void*,unsigned int) ;
 int FUNC_11 (int *,int) ;
 unsigned int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int *,unsigned int) ;

int FUNC_16(H264SEIContext *VAR_4, GetBitContext *VAR_5,
                       const H264ParamSets *VAR_6, void *VAR_7)
{
    int VAR_8 = 0;

    while (FUNC_13(VAR_5) > 16 && FUNC_14(VAR_5, 16)) {
        int VAR_9 = 0;
        unsigned VAR_10 = 0;
        unsigned VAR_11;
        int VAR_12 = 0;

        do {
            if (FUNC_13(VAR_5) < 8)
                return VAR_0;
            VAR_9 += FUNC_14(VAR_5, 8);
        } while (FUNC_11(VAR_5, 8) == 255);

        do {
            if (FUNC_13(VAR_5) < 8)
                return VAR_0;
            VAR_10 += FUNC_14(VAR_5, 8);
        } while (FUNC_11(VAR_5, 8) == 255);

        if (VAR_10 > FUNC_13(VAR_5) / 8) {
            FUNC_1(VAR_7, VAR_3, "SEI type %d size %d truncated at %d\n",
                   VAR_9, 8*VAR_10, FUNC_13(VAR_5));
            return VAR_0;
        }
        VAR_11 = FUNC_12(VAR_5) + 8 * VAR_10;

        switch (VAR_9) {
        case 131:
            VAR_12 = FUNC_7(&VAR_4->picture_timing, VAR_5, VAR_6, VAR_7);
            break;
        case 129:
            VAR_12 = FUNC_9(VAR_4, VAR_5, VAR_7, VAR_10);
            break;
        case 128:
            VAR_12 = FUNC_10(&VAR_4->unregistered, VAR_5, VAR_7, VAR_10);
            break;
        case 130:
            VAR_12 = FUNC_8(&VAR_4->recovery_point, VAR_5, VAR_7);
            break;
        case 135:
            VAR_12 = FUNC_3(&VAR_4->buffering_period, VAR_5, VAR_6, VAR_7);
            break;
        case 133:
            VAR_12 = FUNC_5(&VAR_4->frame_packing, VAR_5);
            break;
        case 134:
            VAR_12 = FUNC_4(&VAR_4->display_orientation, VAR_5);
            break;
        case 132:
            VAR_12 = FUNC_6(&VAR_4->green_metadata, VAR_5);
            break;
        case 136:
            VAR_12 = FUNC_2(&VAR_4->alternative_transfer, VAR_5);
            break;
        default:
            FUNC_1(VAR_7, VAR_2, "unknown SEI type %d\n", VAR_9);
        }
        if (VAR_12 < 0 && VAR_12 != VAR_1)
            return VAR_12;
        if (VAR_12 < 0)
            VAR_8 = VAR_12;

        FUNC_15(VAR_5, VAR_11 - FUNC_12(VAR_5));


        FUNC_0(VAR_5);
    }

    return VAR_8;
}
