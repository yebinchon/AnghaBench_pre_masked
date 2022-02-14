
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_12__ {int log_ctx; TYPE_2__* priv_data; TYPE_1__* codec; } ;
struct TYPE_11__ {scalar_t__ nb_units; size_t data_size; scalar_t__* data; } ;
struct TYPE_10__ {int mp4; int nal_length_size; int read_packet; } ;
struct TYPE_9__ {int codec_id; } ;
typedef int GetByteContext ;
typedef TYPE_2__ CodedBitstreamH2645Context ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef TYPE_4__ CodedBitstreamContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,size_t) ;
 int FUNC_6 (int *,size_t) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int *) ;
 int FUNC_9 (int *,scalar_t__*,size_t,int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_10(CodedBitstreamContext *VAR_5,
                                    CodedBitstreamFragment *VAR_6,
                                    int VAR_7)
{
    enum AVCodecID VAR_8 = VAR_5->codec->codec_id;
    CodedBitstreamH2645Context *VAR_9 = VAR_5->priv_data;
    GetByteContext VAR_10;
    int VAR_11;

    FUNC_0(VAR_6->data && VAR_6->nb_units == 0);
    if (VAR_6->data_size == 0)
        return 0;

    if (VAR_7 && VAR_6->data[0] && VAR_8 == VAR_1) {

        size_t VAR_12, VAR_13, VAR_14;
        int VAR_15, VAR_16, VAR_17;

        VAR_9->mp4 = 1;

        FUNC_5(&VAR_10, VAR_6->data, VAR_6->data_size);

        if (FUNC_4(&VAR_10) < 6)
            return VAR_0;

        VAR_17 = FUNC_3(&VAR_10);
        if (VAR_17 != 1) {
            FUNC_1(VAR_5->log_ctx, VAR_3, "Invalid AVCC header: "
                   "first byte %u.", VAR_17);
            return VAR_0;
        }

        FUNC_6(&VAR_10, 3);
        VAR_9->nal_length_size = (FUNC_3(&VAR_10) & 3) + 1;


        VAR_16 = FUNC_3(&VAR_10) & 0x1f;
        VAR_13 = FUNC_7(&VAR_10);
        for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
            if (FUNC_4(&VAR_10) < 2 * (VAR_16 - VAR_15))
                return VAR_0;
            VAR_12 = FUNC_2(&VAR_10);
            if (FUNC_4(&VAR_10) < VAR_12)
                return VAR_0;
            FUNC_6(&VAR_10, VAR_12);
        }
        VAR_14 = FUNC_7(&VAR_10);

        VAR_11 = FUNC_9(&VAR_9->read_packet,
                                    VAR_6->data + VAR_13, VAR_14 - VAR_13,
                                    VAR_5->log_ctx, 1, 2, VAR_1, 1, 1);
        if (VAR_11 < 0) {
            FUNC_1(VAR_5->log_ctx, VAR_3, "Failed to split AVCC SPS array.\n");
            return VAR_11;
        }
        VAR_11 = FUNC_8(VAR_5, VAR_6, &VAR_9->read_packet);
        if (VAR_11 < 0)
            return VAR_11;


        VAR_16 = FUNC_3(&VAR_10);
        VAR_13 = FUNC_7(&VAR_10);
        for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
            if (FUNC_4(&VAR_10) < 2 * (VAR_16 - VAR_15))
                return VAR_0;
            VAR_12 = FUNC_2(&VAR_10);
            if (FUNC_4(&VAR_10) < VAR_12)
                return VAR_0;
            FUNC_6(&VAR_10, VAR_12);
        }
        VAR_14 = FUNC_7(&VAR_10);

        VAR_11 = FUNC_9(&VAR_9->read_packet,
                                    VAR_6->data + VAR_13, VAR_14 - VAR_13,
                                    VAR_5->log_ctx, 1, 2, VAR_1, 1, 1);
        if (VAR_11 < 0) {
            FUNC_1(VAR_5->log_ctx, VAR_3, "Failed to split AVCC PPS array.\n");
            return VAR_11;
        }
        VAR_11 = FUNC_8(VAR_5, VAR_6, &VAR_9->read_packet);
        if (VAR_11 < 0)
            return VAR_11;

        if (FUNC_4(&VAR_10) > 0) {
            FUNC_1(VAR_5->log_ctx, VAR_4, "%u bytes left at end of AVCC "
                   "header.\n", FUNC_4(&VAR_10));
        }

    } else if (VAR_7 && VAR_6->data[0] && VAR_8 == VAR_2) {

        size_t VAR_18, VAR_19, VAR_20;
        int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

        VAR_9->mp4 = 1;

        FUNC_5(&VAR_10, VAR_6->data, VAR_6->data_size);

        if (FUNC_4(&VAR_10) < 23)
            return VAR_0;

        VAR_26 = FUNC_3(&VAR_10);
        if (VAR_26 != 1) {
            FUNC_1(VAR_5->log_ctx, VAR_3, "Invalid HVCC header: "
                   "first byte %u.", VAR_26);
            return VAR_0;
        }

        FUNC_6(&VAR_10, 20);
        VAR_9->nal_length_size = (FUNC_3(&VAR_10) & 3) + 1;

        VAR_23 = FUNC_3(&VAR_10);
        for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
            VAR_24 = FUNC_3(&VAR_10) & 0x3f;
            VAR_25 = FUNC_2(&VAR_10);

            VAR_19 = FUNC_7(&VAR_10);
            for (VAR_22 = 0; VAR_22 < VAR_25; VAR_22++) {
                if (FUNC_4(&VAR_10) < 2)
                    return VAR_0;
                VAR_18 = FUNC_2(&VAR_10);
                if (FUNC_4(&VAR_10) < VAR_18)
                    return VAR_0;
                FUNC_6(&VAR_10, VAR_18);
            }
            VAR_20 = FUNC_7(&VAR_10);

            VAR_11 = FUNC_9(&VAR_9->read_packet,
                                        VAR_6->data + VAR_19, VAR_20 - VAR_19,
                                        VAR_5->log_ctx, 1, 2, VAR_2, 1, 1);
            if (VAR_11 < 0) {
                FUNC_1(VAR_5->log_ctx, VAR_3, "Failed to split "
                       "HVCC array %d (%d NAL units of type %d).\n",
                       VAR_21, VAR_25, VAR_24);
                return VAR_11;
            }
            VAR_11 = FUNC_8(VAR_5, VAR_6, &VAR_9->read_packet);
            if (VAR_11 < 0)
                return VAR_11;
        }

    } else {


        VAR_11 = FUNC_9(&VAR_9->read_packet,
                                    VAR_6->data, VAR_6->data_size,
                                    VAR_5->log_ctx,
                                    VAR_9->mp4, VAR_9->nal_length_size,
                                    VAR_8, 1, 1);
        if (VAR_11 < 0)
            return VAR_11;

        VAR_11 = FUNC_8(VAR_5, VAR_6, &VAR_9->read_packet);
        if (VAR_11 < 0)
            return VAR_11;
    }

    return 0;
}
