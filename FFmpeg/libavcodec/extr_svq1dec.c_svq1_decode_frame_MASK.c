
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_23__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ svq1_pmv ;
struct TYPE_28__ {scalar_t__ skip_frame; int flags; TYPE_2__* priv_data; } ;
struct TYPE_27__ {scalar_t__ pict_type; int* linesize; int ** data; } ;
struct TYPE_26__ {int size; int * data; } ;
struct TYPE_25__ {int frame_code; int width; int height; TYPE_20__* prev; scalar_t__ nonref; int gb; int hdsp; int * pkt_swapped; int pkt_swapped_allocated; } ;
struct TYPE_24__ {scalar_t__ width; scalar_t__ height; int ** data; } ;
typedef TYPE_2__ SVQ1Context ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int **,int *,int) ;
 int FUNC_3 (TYPE_20__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_20__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*,int ,char*,...) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*,char*,int) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_5__*,int,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int const*,int) ;
 int FUNC_13 (int *,int const*,int) ;
 int FUNC_14 (int *,int const*,int) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int *,int) ;
 int FUNC_18 (TYPE_5__*,int *,int *,int *,int *,int,TYPE_1__*,int,int,int,int) ;
 int FUNC_19 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_9, void *VAR_10,
                             int *VAR_11, AVPacket *VAR_12)
{
    const uint8_t *VAR_13 = VAR_12->data;
    int VAR_14 = VAR_12->size;
    SVQ1Context *VAR_15 = VAR_9->priv_data;
    AVFrame *VAR_16 = VAR_10;
    uint8_t *VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    svq1_pmv *VAR_24;
    int VAR_25;


    VAR_25 = FUNC_13(&VAR_15->gb, VAR_13, VAR_14);
    if (VAR_25 < 0)
        return VAR_25;


    VAR_15->frame_code = FUNC_11(&VAR_15->gb, 22);

    if ((VAR_15->frame_code & ~0x70) || !(VAR_15->frame_code & 0x60))
        return VAR_3;


    if (VAR_15->frame_code != 0x20) {
        uint32_t *VAR_26;

        if (VAR_14 < 9 * 4) {
            FUNC_6(VAR_9, VAR_6, "Input packet too small\n");
            return VAR_3;
        }

        FUNC_2(&VAR_15->pkt_swapped,
                              &VAR_15->pkt_swapped_allocated,
                              VAR_14);
        if (!VAR_15->pkt_swapped)
            return FUNC_0(VAR_8);

        FUNC_14(VAR_15->pkt_swapped, VAR_13, VAR_14);
        VAR_13 = VAR_15->pkt_swapped;
        FUNC_12(&VAR_15->gb, VAR_13, VAR_14 * 8);
        FUNC_16(&VAR_15->gb, 22);

        VAR_26 = (uint32_t *)(VAR_15->pkt_swapped + 4);

        for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
            VAR_26[VAR_19] = ((VAR_26[VAR_19] << 16) | (VAR_26[VAR_19] >> 16)) ^ VAR_26[7 - VAR_19];
    }

    VAR_18 = FUNC_19(VAR_9, VAR_16);
    if (VAR_18 != 0) {
        FUNC_8(VAR_9, "Error in svq1_decode_frame_header %i\n", VAR_18);
        return VAR_18;
    }

    VAR_18 = FUNC_10(VAR_9, VAR_15->width, VAR_15->height);
    if (VAR_18 < 0)
        return VAR_18;

    if ((VAR_9->skip_frame >= VAR_2 && VAR_15->nonref) ||
        (VAR_9->skip_frame >= VAR_1 &&
         VAR_16->pict_type != VAR_7) ||
        VAR_9->skip_frame >= VAR_0)
        return VAR_14;

    VAR_18 = FUNC_9(VAR_9, VAR_16, VAR_15->nonref ? 0 : VAR_5);
    if (VAR_18 < 0)
        return VAR_18;

    VAR_24 = FUNC_7((FUNC_1(VAR_15->width, 16) / 8 + 3) * sizeof(*VAR_24));
    if (!VAR_24)
        return FUNC_0(VAR_8);


    for (VAR_19 = 0; VAR_19 < 3; VAR_19++) {
        int VAR_27 = VAR_16->linesize[VAR_19];
        if (VAR_19 == 0) {
            VAR_22 = FUNC_1(VAR_15->width, 16);
            VAR_23 = FUNC_1(VAR_15->height, 16);
        } else {
            if (VAR_9->flags & VAR_4)
                break;
            VAR_22 = FUNC_1(VAR_15->width / 4, 16);
            VAR_23 = FUNC_1(VAR_15->height / 4, 16);
        }

        VAR_17 = VAR_16->data[VAR_19];

        if (VAR_16->pict_type == VAR_7) {

            for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21 += 16) {
                for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20 += 16) {
                    VAR_18 = FUNC_17(&VAR_15->gb, &VAR_17[VAR_20],
                                                     VAR_27);
                    if (VAR_18) {
                        FUNC_6(VAR_9, VAR_6,
                               "Error in svq1_decode_block %i (keyframe)\n",
                               VAR_18);
                        goto err;
                    }
                }
                VAR_17 += 16 * VAR_27;
            }
        } else {

            uint8_t *VAR_28 = VAR_15->prev->data[VAR_19];
            if (!VAR_28 ||
                VAR_15->prev->width != VAR_15->width || VAR_15->prev->height != VAR_15->height) {
                FUNC_6(VAR_9, VAR_6, "Missing reference frame.\n");
                VAR_18 = VAR_3;
                goto err;
            }

            FUNC_15(VAR_24, 0, ((VAR_22 / 8) + 3) * sizeof(svq1_pmv));

            for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21 += 16) {
                for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20 += 16) {
                    VAR_18 = FUNC_18(VAR_9, &VAR_15->hdsp,
                                                     &VAR_15->gb, &VAR_17[VAR_20],
                                                     VAR_28, VAR_27,
                                                     VAR_24, VAR_20, VAR_21, VAR_22, VAR_23);
                    if (VAR_18 != 0) {
                        FUNC_8(VAR_9,
                                "Error in svq1_decode_delta_block %i\n",
                                VAR_18);
                        goto err;
                    }
                }

                VAR_24[0].x =
                    VAR_24[0].y = 0;

                VAR_17 += 16 * VAR_27;
            }
        }
    }

    if (!VAR_15->nonref) {
        FUNC_4(VAR_15->prev);
        VAR_18 = FUNC_3(VAR_15->prev, VAR_16);
        if (VAR_18 < 0)
            goto err;
    }

    *VAR_11 = 1;
    VAR_18 = VAR_14;

err:
    FUNC_5(VAR_24);
    return VAR_18;
}
