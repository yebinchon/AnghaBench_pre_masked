
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_20__ {TYPE_1__* par_out; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int* data; int size; } ;
struct TYPE_18__ {int length_size; int idr_sps_seen; int new_idr; int idr_pps_seen; int sps_offset; int pps_offset; int extradata_parsed; } ;
struct TYPE_17__ {int extradata_size; int * extradata; } ;
typedef TYPE_2__ H264BSFContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int *,int,int const*,int,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__**) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_6, AVPacket *VAR_7)
{
    H264BSFContext *VAR_8 = VAR_6->priv_data;

    AVPacket *VAR_9;
    uint8_t VAR_10;
    int32_t VAR_11;
    uint32_t VAR_12 = 0;
    const uint8_t *VAR_13;
    const uint8_t *VAR_14;
    int VAR_15;
    int VAR_16 = 0, VAR_17;

    VAR_16 = FUNC_7(VAR_6, &VAR_9);
    if (VAR_16 < 0)
        return VAR_16;


    if (!VAR_8->extradata_parsed) {
        FUNC_5(VAR_7, VAR_9);
        FUNC_4(&VAR_9);
        return 0;
    }

    VAR_13 = VAR_9->data;
    VAR_15 = VAR_9->size;
    VAR_14 = VAR_9->data + VAR_9->size;

    do {
        VAR_16= FUNC_0(VAR_1);
        if (VAR_13 + VAR_8->length_size > VAR_14)
            goto fail;

        for (VAR_11 = 0, VAR_17 = 0; VAR_17<VAR_8->length_size; VAR_17++)
            VAR_11 = (VAR_11 << 8) | VAR_13[VAR_17];

        VAR_13 += VAR_8->length_size;
        VAR_10 = *VAR_13 & 0x1f;

        if (VAR_11 > VAR_14 - VAR_13 || VAR_11 < 0)
            goto fail;

        if (VAR_10 == VAR_5)
            VAR_8->idr_sps_seen = VAR_8->new_idr = 1;
        else if (VAR_10 == VAR_3) {
            VAR_8->idr_pps_seen = VAR_8->new_idr = 1;

            if (!VAR_8->idr_sps_seen) {
                if (VAR_8->sps_offset == -1)
                    FUNC_2(VAR_6, VAR_0, "SPS not present in the stream, nor in AVCC, stream may be unreadable\n");
                else {
                    if ((VAR_16 = FUNC_1(VAR_7,
                                         VAR_6->par_out->extradata + VAR_8->sps_offset,
                                         VAR_8->pps_offset != -1 ? VAR_8->pps_offset : VAR_6->par_out->extradata_size - VAR_8->sps_offset,
                                         VAR_13, VAR_11, 1)) < 0)
                        goto fail;
                    VAR_8->idr_sps_seen = 1;
                    goto next_nal;
                }
            }
        }




        if (!VAR_8->new_idr && VAR_10 == VAR_2 && (VAR_13[1] & 0x80))
            VAR_8->new_idr = 1;


        if (VAR_8->new_idr && VAR_10 == VAR_2 && !VAR_8->idr_sps_seen && !VAR_8->idr_pps_seen) {
            if ((VAR_16=FUNC_1(VAR_7,
                               VAR_6->par_out->extradata, VAR_6->par_out->extradata_size,
                               VAR_13, VAR_11, 1)) < 0)
                goto fail;
            VAR_8->new_idr = 0;

        } else if (VAR_8->new_idr && VAR_10 == VAR_2 && VAR_8->idr_sps_seen && !VAR_8->idr_pps_seen) {
            if (VAR_8->pps_offset == -1) {
                FUNC_2(VAR_6, VAR_0, "PPS not present in the stream, nor in AVCC, stream may be unreadable\n");
                if ((VAR_16 = FUNC_1(VAR_7, ((void*)0), 0, VAR_13, VAR_11, 0)) < 0)
                    goto fail;
            } else if ((VAR_16 = FUNC_1(VAR_7,
                                        VAR_6->par_out->extradata + VAR_8->pps_offset, VAR_6->par_out->extradata_size - VAR_8->pps_offset,
                                        VAR_13, VAR_11, 1)) < 0)
                goto fail;
        } else {
            if ((VAR_16=FUNC_1(VAR_7, ((void*)0), 0, VAR_13, VAR_11, VAR_10 == VAR_5 || VAR_10 == VAR_3)) < 0)
                goto fail;
            if (!VAR_8->new_idr && VAR_10 == VAR_4) {
                VAR_8->new_idr = 1;
                VAR_8->idr_sps_seen = 0;
                VAR_8->idr_pps_seen = 0;
            }
        }

next_nal:
        VAR_13 += VAR_11;
        VAR_12 += VAR_11 + VAR_8->length_size;
    } while (VAR_12 < VAR_15);

    VAR_16 = FUNC_3(VAR_7, VAR_9);
    if (VAR_16 < 0)
        goto fail;

fail:
    if (VAR_16 < 0)
        FUNC_6(VAR_7);
    FUNC_4(&VAR_9);

    return VAR_16;
}
