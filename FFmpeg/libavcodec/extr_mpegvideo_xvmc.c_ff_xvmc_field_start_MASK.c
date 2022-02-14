
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct xvmc_pix_fmt {scalar_t__ xvmc_id; int allocated_mv_blocks; int const allocated_data_blocks; int const start_mv_blocks_num; int const next_free_data_block_num; int * p_surface; int * p_past_surface; int * p_future_surface; int flags; int picture_structure; scalar_t__ filled_mv_blocks_num; int mv_blocks; int data_blocks; } ;
struct TYPE_16__ {TYPE_5__* f; } ;
struct TYPE_14__ {TYPE_3__* f; } ;
struct TYPE_12__ {TYPE_1__* f; } ;
struct MpegEncContext {int chroma_format; int pict_type; TYPE_6__ last_picture; TYPE_4__ next_picture; scalar_t__ first_field; int picture_structure; TYPE_2__ current_picture; } ;
struct TYPE_17__ {struct MpegEncContext* priv_data; } ;
struct TYPE_15__ {scalar_t__* data; } ;
struct TYPE_13__ {scalar_t__* data; } ;
struct TYPE_11__ {scalar_t__* data; } ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_4, const uint8_t *VAR_5, uint32_t VAR_6)
{
    struct MpegEncContext *VAR_7 = VAR_4->priv_data;
    struct xvmc_pix_fmt *VAR_8, *VAR_9, *VAR_10 = (struct xvmc_pix_fmt*)VAR_7->current_picture.f->data[2];
    const int VAR_11 = 4 + (1 << VAR_7->chroma_format);

    FUNC_0(VAR_4);
    if (!VAR_10 || VAR_10->xvmc_id != VAR_1 ||
        !VAR_10->data_blocks || !VAR_10->mv_blocks ||
        (unsigned int)VAR_10->allocated_mv_blocks > VAR_2/(64*6) ||
        (unsigned int)VAR_10->allocated_data_blocks > VAR_2/64 ||
        !VAR_10->p_surface) {
        FUNC_1(VAR_4, VAR_0,
               "Render token doesn't look as expected.\n");
        return -1;
    }

    if (VAR_10->filled_mv_blocks_num) {
        FUNC_1(VAR_4, VAR_0,
               "Rendering surface contains %i unprocessed blocks.\n",
               VAR_10->filled_mv_blocks_num);
        return -1;
    }
    if (VAR_10->allocated_mv_blocks < 1 ||
        VAR_10->allocated_data_blocks < VAR_10->allocated_mv_blocks*VAR_11 ||
        VAR_10->start_mv_blocks_num >= VAR_10->allocated_mv_blocks ||
        VAR_10->next_free_data_block_num >
                        VAR_10->allocated_data_blocks -
                        VAR_11*(VAR_10->allocated_mv_blocks-VAR_10->start_mv_blocks_num)) {
        FUNC_1(VAR_4, VAR_0,
               "Rendering surface doesn't provide enough block structures to work with.\n");
        return -1;
    }

    VAR_10->picture_structure = VAR_7->picture_structure;
    VAR_10->flags = VAR_7->first_field ? 0 : VAR_3;
    VAR_10->p_future_surface = ((void*)0);
    VAR_10->p_past_surface = ((void*)0);

    switch(VAR_7->pict_type) {
        case 129:
            return 0;
        case 130:
            VAR_9 = (struct xvmc_pix_fmt*)VAR_7->next_picture.f->data[2];
            if (!VAR_9)
                return -1;
            if (VAR_9->xvmc_id != VAR_1)
                return -1;
            VAR_10->p_future_surface = VAR_9->p_surface;

        case 128:
            VAR_8 = (struct xvmc_pix_fmt*)VAR_7->last_picture.f->data[2];
            if (!VAR_8)
                VAR_8 = VAR_10;
            if (VAR_8->xvmc_id != VAR_1)
                return -1;
            VAR_10->p_past_surface = VAR_8->p_surface;
            return 0;
    }

return -1;
}
