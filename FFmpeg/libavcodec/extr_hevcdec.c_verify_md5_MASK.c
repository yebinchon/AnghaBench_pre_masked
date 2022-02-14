
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_20__ {int* linesize; int ** data; int format; } ;
struct TYPE_19__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_16__ {int ** md5; } ;
struct TYPE_17__ {TYPE_3__ picture_hash; } ;
struct TYPE_15__ {int (* bswap16_buf ) (int *,int const*,int) ;} ;
struct TYPE_18__ {TYPE_10__* avctx; TYPE_4__ sei; int md5_ctx; int * checksum_buf; TYPE_2__ bdsp; int checksum_buf_size; int poc; } ;
struct TYPE_14__ {int depth; } ;
struct TYPE_13__ {int coded_width; int coded_height; } ;
typedef TYPE_5__ HEVCContext ;
typedef TYPE_6__ AVPixFmtDescriptor ;
typedef TYPE_7__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (TYPE_10__*,int ,char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int const*,int) ;
 TYPE_6__* FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (TYPE_10__*,int ,int *) ;
 int FUNC_10 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_11(HEVCContext *VAR_5, AVFrame *VAR_6)
{
    const AVPixFmtDescriptor *VAR_7 = FUNC_7(VAR_6->format);
    int VAR_8;
    int VAR_9, VAR_10;

    if (!VAR_7)
        return FUNC_0(VAR_3);

    VAR_8 = VAR_7->comp[0].depth > 8;

    FUNC_3(VAR_5->avctx, VAR_1, "Verifying checksum for frame with POC %d: ",
           VAR_5->poc);
    for (VAR_9 = 0; VAR_6->data[VAR_9]; VAR_9++) {
        int VAR_11 = VAR_5->avctx->coded_width;
        int VAR_12 = VAR_5->avctx->coded_height;
        int VAR_13 = (VAR_9 == 1 || VAR_9 == 2) ? (VAR_11 >> VAR_7->log2_chroma_w) : VAR_11;
        int VAR_14 = (VAR_9 == 1 || VAR_9 == 2) ? (VAR_12 >> VAR_7->log2_chroma_h) : VAR_12;
        uint8_t VAR_15[16];

        FUNC_5(VAR_5->md5_ctx);
        for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++) {
            const uint8_t *VAR_16 = VAR_6->data[VAR_9] + VAR_10 * VAR_6->linesize[VAR_9];







            FUNC_6(VAR_5->md5_ctx, VAR_16, VAR_13 << VAR_8);
        }
        FUNC_4(VAR_5->md5_ctx, VAR_15);

        if (!FUNC_8(VAR_15, VAR_5->sei.picture_hash.md5[VAR_9], 16)) {
            FUNC_3 (VAR_5->avctx, VAR_1, "plane %d - correct ", VAR_9);
            FUNC_9(VAR_5->avctx, VAR_1, VAR_15);
            FUNC_3 (VAR_5->avctx, VAR_1, "; ");
        } else {
            FUNC_3 (VAR_5->avctx, VAR_2, "mismatching checksum of plane %d - ", VAR_9);
            FUNC_9(VAR_5->avctx, VAR_2, VAR_15);
            FUNC_3 (VAR_5->avctx, VAR_2, " != ");
            FUNC_9(VAR_5->avctx, VAR_2, VAR_5->sei.picture_hash.md5[VAR_9]);
            FUNC_3 (VAR_5->avctx, VAR_2, "\n");
            return VAR_0;
        }
    }

    FUNC_3(VAR_5->avctx, VAR_1, "\n");

    return 0;
}
