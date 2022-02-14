
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_26__ {int dts; int pts; int data; } ;
typedef TYPE_3__ kvz_picture ;
struct TYPE_27__ {scalar_t__ nal_unit_type; } ;
typedef TYPE_4__ kvz_frame_info ;
struct TYPE_28__ {scalar_t__ len; int data; struct TYPE_28__* next; } ;
typedef TYPE_5__ kvz_data_chunk ;
struct TYPE_32__ {scalar_t__ pix_fmt; TYPE_6__* priv_data; } ;
struct TYPE_31__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; int pts; int linesize; scalar_t__ data; } ;
struct TYPE_30__ {scalar_t__ data; int flags; int dts; int pts; } ;
struct TYPE_29__ {TYPE_2__* api; int encoder; TYPE_1__* config; } ;
struct TYPE_25__ {int (* encoder_encode ) (int ,TYPE_3__*,TYPE_5__**,scalar_t__*,TYPE_3__**,int *,TYPE_4__*) ;int (* chunk_free ) (TYPE_5__*) ;int (* picture_free ) (TYPE_3__*) ;TYPE_3__* (* picture_alloc ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_24__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_6__ LibkvazaarContext ;
typedef TYPE_7__ AVPacket ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int*,int const**,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_4 (TYPE_9__*,int ,char*,...) ;
 int FUNC_5 (TYPE_9__*,TYPE_7__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 TYPE_3__* FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,TYPE_3__*,TYPE_5__**,scalar_t__*,TYPE_3__**,int *,TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_6,
                             AVPacket *VAR_7,
                             const AVFrame *VAR_8,
                             int *VAR_9)
{
    LibkvazaarContext *VAR_10 = VAR_6->priv_data;
    kvz_picture *VAR_11 = ((void*)0);
    kvz_picture *VAR_12 = ((void*)0);
    kvz_frame_info VAR_13;
    kvz_data_chunk *VAR_14 = ((void*)0);
    uint32_t VAR_15 = 0;
    int VAR_16 = 0;

    *VAR_9 = 0;

    if (VAR_8) {
        if (VAR_8->width != VAR_10->config->width ||
            VAR_8->height != VAR_10->config->height) {
            FUNC_4(VAR_6, VAR_1,
                   "Changing video dimensions during encoding is not supported. "
                   "(changed from %dx%d to %dx%d)\n",
                   VAR_10->config->width, VAR_10->config->height,
                   VAR_8->width, VAR_8->height);
            VAR_16 = VAR_0;
            goto done;
        }

        if (VAR_8->format != VAR_6->pix_fmt) {
            FUNC_4(VAR_6, VAR_1,
                   "Changing pixel format during encoding is not supported. "
                   "(changed from %s to %s)\n",
                   FUNC_2(VAR_6->pix_fmt),
                   FUNC_2(VAR_8->format));
            VAR_16 = VAR_0;
            goto done;
        }


        VAR_11 = VAR_10->api->picture_alloc(VAR_8->width, VAR_8->height);
        if (!VAR_11) {
            FUNC_4(VAR_6, VAR_1, "Failed to allocate picture.\n");
            VAR_16 = FUNC_0(VAR_3);
            goto done;
        }


        {
            int VAR_17[4] = {
              VAR_8->width,
              VAR_8->width / 2,
              VAR_8->width / 2,
              0
            };
            FUNC_3(VAR_11->data, VAR_17,
                          (const uint8_t **)VAR_8->data, VAR_8->linesize,
                          VAR_8->format, VAR_8->width, VAR_8->height);
        }

        VAR_11->pts = VAR_8->pts;
    }

    VAR_16 = VAR_10->api->encoder_encode(VAR_10->encoder,
                                      VAR_11,
                                      &VAR_14, &VAR_15,
                                      &VAR_12, ((void*)0),
                                      &VAR_13);
    if (!VAR_16) {
        FUNC_4(VAR_6, VAR_1, "Failed to encode frame.\n");
        VAR_16 = VAR_0;
        goto done;
    } else
        VAR_16 = 0;

    if (VAR_14) {
        kvz_data_chunk *VAR_18 = ((void*)0);
        uint64_t VAR_19 = 0;

        VAR_16 = FUNC_5(VAR_6, VAR_7, VAR_15, VAR_15);
        if (VAR_16 < 0) {
            FUNC_4(VAR_6, VAR_1, "Failed to allocate output packet.\n");
            goto done;
        }

        for (VAR_18 = VAR_14; VAR_18 != ((void*)0); VAR_18 = VAR_18->next) {
            FUNC_1(VAR_19 + VAR_18->len <= VAR_15);
            FUNC_6(VAR_7->data + VAR_19, VAR_18->data, VAR_18->len);
            VAR_19 += VAR_18->len;
        }

        VAR_7->pts = VAR_12->pts;
        VAR_7->dts = VAR_12->dts;
        VAR_7->flags = 0;


        if (VAR_13.nal_unit_type >= VAR_4 &&
            VAR_13.nal_unit_type <= VAR_5) {
            VAR_7->flags |= VAR_2;
        }

        *VAR_9 = 1;
    }

done:
    VAR_10->api->picture_free(VAR_11);
    VAR_10->api->picture_free(VAR_12);
    VAR_10->api->chunk_free(VAR_14);
    return VAR_16;
}
