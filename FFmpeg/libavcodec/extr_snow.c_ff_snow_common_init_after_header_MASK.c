
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int x_and_coeff ;
struct TYPE_16__ {scalar_t__ format; int * linesize; } ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_14__ {int width; scalar_t__ pix_fmt; TYPE_3__* priv_data; } ;
struct TYPE_13__ {int nb_planes; int spatial_decomposition_count; TYPE_1__* plane; scalar_t__ spatial_dwt_buffer; scalar_t__ spatial_idwt_buffer; int chroma_v_shift; int chroma_h_shift; TYPE_6__* avctx; TYPE_7__* mconly_picture; int emu_edge_buffer; int scratchbuf; } ;
struct TYPE_12__ {int level; int stride; int width; int height; int stride_line; int buf_x_offset; int buf_y_offset; int x_coeff; struct TYPE_12__* parent; scalar_t__ buf; scalar_t__ ibuf; } ;
struct TYPE_11__ {int width; int height; TYPE_2__** band; } ;
typedef TYPE_2__ SubBand ;
typedef TYPE_3__ SnowContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__*,int ,int,int,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ,char*) ;
 int FUNC_7 (int,int) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_6__*,TYPE_7__*,int ) ;

int FUNC_9(AVCodecContext *VAR_7) {
    SnowContext *VAR_8 = VAR_7->priv_data;
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;

    if(!VAR_8->scratchbuf) {
        if ((VAR_12 = FUNC_8(VAR_8->avctx, VAR_8->mconly_picture,
                                 VAR_1)) < 0)
            return VAR_12;
        FUNC_3(VAR_7, VAR_8->scratchbuf, FUNC_2(VAR_8->mconly_picture->linesize[0], 2*VAR_7->width+256), 7*VAR_5, VAR_6);
        VAR_13 = FUNC_2(VAR_8->mconly_picture->linesize[0], 2*VAR_7->width+256) * (2 * VAR_5 + VAR_4 - 1);
        FUNC_4(VAR_7, VAR_8->emu_edge_buffer, VAR_13, VAR_6);
    }

    if(VAR_8->mconly_picture->format != VAR_7->pix_fmt) {
        FUNC_6(VAR_7, VAR_2, "pixel format changed\n");
        return VAR_0;
    }

    for(VAR_9=0; VAR_9 < VAR_8->nb_planes; VAR_9++){
        int VAR_14= VAR_8->avctx->width;
        int VAR_15= VAR_8->avctx->height;

        if(VAR_9){
            VAR_14 = FUNC_1(VAR_14, VAR_8->chroma_h_shift);
            VAR_15 = FUNC_1(VAR_15, VAR_8->chroma_v_shift);
        }
        VAR_8->plane[VAR_9].width = VAR_14;
        VAR_8->plane[VAR_9].height= VAR_15;

        for(VAR_10=VAR_8->spatial_decomposition_count-1; VAR_10>=0; VAR_10--){
            for(VAR_11=VAR_10 ? 1 : 0; VAR_11<4; VAR_11++){
                SubBand *VAR_16= &VAR_8->plane[VAR_9].band[VAR_10][VAR_11];

                VAR_16->buf= VAR_8->spatial_dwt_buffer;
                VAR_16->level= VAR_10;
                VAR_16->stride= VAR_8->plane[VAR_9].width << (VAR_8->spatial_decomposition_count - VAR_10);
                VAR_16->width = (VAR_14 + !(VAR_11&1))>>1;
                VAR_16->height= (VAR_15 + !(VAR_11>1))>>1;

                VAR_16->stride_line = 1 << (VAR_8->spatial_decomposition_count - VAR_10);
                VAR_16->buf_x_offset = 0;
                VAR_16->buf_y_offset = 0;

                if(VAR_11&1){
                    VAR_16->buf += (VAR_14+1)>>1;
                    VAR_16->buf_x_offset = (VAR_14+1)>>1;
                }
                if(VAR_11>1){
                    VAR_16->buf += VAR_16->stride>>1;
                    VAR_16->buf_y_offset = VAR_16->stride_line >> 1;
                }
                VAR_16->ibuf= VAR_8->spatial_idwt_buffer + (VAR_16->buf - VAR_8->spatial_dwt_buffer);

                if(VAR_10)
                    VAR_16->parent= &VAR_8->plane[VAR_9].band[VAR_10-1][VAR_11];

                FUNC_5(&VAR_16->x_coeff);
                VAR_16->x_coeff=FUNC_7(((VAR_16->width+1) * VAR_16->height+1), sizeof(x_and_coeff));
                if (!VAR_16->x_coeff)
                    goto fail;
            }
            VAR_14= (VAR_14+1)>>1;
            VAR_15= (VAR_15+1)>>1;
        }
    }

    return 0;
fail:
    return FUNC_0(VAR_3);
}
