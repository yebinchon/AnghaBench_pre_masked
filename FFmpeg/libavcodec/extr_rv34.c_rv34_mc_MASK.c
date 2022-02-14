
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
typedef int (* qpel_mc_func ) (int *,int *,int const) ;
typedef int (* h264_chroma_mc_func ) (int *,int *,int,int const,int,int) ;
typedef int ThreadFrame ;
struct TYPE_20__ {int (* emulated_edge_mc ) (int *,int *,int,int,int const,int const,int,int,int,int) ;} ;
struct TYPE_19__ {int * edge_emu_buffer; } ;
struct TYPE_12__ {int mb_x; int mb_y; int b8_stride; int linesize; int uvlinesize; int const h_edge_pos; int const v_edge_pos; TYPE_8__ vdsp; TYPE_7__ sc; int ** dest; TYPE_6__* last_picture_ptr; TYPE_4__* next_picture_ptr; TYPE_2__* avctx; TYPE_1__* current_picture_ptr; } ;
struct TYPE_21__ {int ** tmp_b_block_uv; int ** tmp_b_block_y; TYPE_10__ s; } ;
struct TYPE_18__ {TYPE_5__* f; int tf; } ;
struct TYPE_17__ {int ** data; } ;
struct TYPE_16__ {TYPE_3__* f; int tf; } ;
struct TYPE_15__ {int ** data; } ;
struct TYPE_14__ {int active_thread_type; } ;
struct TYPE_13__ {int*** motion_val; } ;
typedef TYPE_9__ RV34DecContext ;
typedef TYPE_10__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int *,int,int,int const,int const,int,int,int,int) ;
 int FUNC_2 (int *,int *,int const) ;
 int FUNC_3 (int *,int *,int const) ;
 int FUNC_4 (int *,int *,int const) ;
 int FUNC_5 (int *,int *,int const,int const,int const,int const,int,int,int,int) ;
 int FUNC_6 (int *,int *,int,int,int const,int const,int,int,int,int) ;
 int FUNC_7 (int *,int *,int,int const,int,int) ;
 int FUNC_8 (int *,int *,int,int const,int,int) ;

__attribute__((used)) static inline void FUNC_9(RV34DecContext *VAR_6, const int VAR_7,
                          const int VAR_8, const int VAR_9, int VAR_10,
                          const int VAR_11, const int VAR_12, int VAR_13,
                          const int VAR_14, int VAR_15,
                          qpel_mc_func (*VAR_16)[16],
                          h264_chroma_mc_func (*VAR_17))
{
    MpegEncContext *VAR_18 = &VAR_6->s;
    uint8_t *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
    int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
    int VAR_38 = VAR_18->mb_x * 2 + VAR_18->mb_y * 2 * VAR_18->b8_stride + VAR_10;
    int VAR_39 = 1;
    int VAR_40 = 0;

    if(VAR_14){
        int VAR_41, VAR_42;
        VAR_26 = (VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][0] + (3 << 24)) / 3 - (1 << 24);
        VAR_27 = (VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][1] + (3 << 24)) / 3 - (1 << 24);
        VAR_30 = (VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][0] + (3 << 24)) % 3;
        VAR_31 = (VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][1] + (3 << 24)) % 3;
        VAR_41 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][0] / 2;
        VAR_42 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][1] / 2;
        VAR_28 = (VAR_41 + (3 << 24)) / 3 - (1 << 24);
        VAR_29 = (VAR_42 + (3 << 24)) / 3 - (1 << 24);
        VAR_32 = VAR_5[(VAR_41 + (3 << 24)) % 3];
        VAR_33 = VAR_5[(VAR_42 + (3 << 24)) % 3];
    }else{
        int VAR_43, VAR_44;
        VAR_26 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][0] >> 2;
        VAR_27 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][1] >> 2;
        VAR_30 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][0] & 3;
        VAR_31 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][1] & 3;
        VAR_43 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][0] / 2;
        VAR_44 = VAR_18->current_picture_ptr->motion_val[VAR_13][VAR_38][1] / 2;
        VAR_28 = VAR_43 >> 2;
        VAR_29 = VAR_44 >> 2;
        VAR_32 = (VAR_43 & 3) << 1;
        VAR_33 = (VAR_44 & 3) << 1;

        if(VAR_32 == 6 && VAR_33 == 6)
            VAR_32 = VAR_33 = 4;
    }

    if (VAR_1 && (VAR_18->avctx->active_thread_type & VAR_0)) {

        int VAR_45 = VAR_18->mb_y + ((VAR_9 + VAR_27 + 5 + 8 * VAR_12) >> 4);
        ThreadFrame *VAR_46 = VAR_13 ? &VAR_18->next_picture_ptr->tf : &VAR_18->last_picture_ptr->tf;
        FUNC_0(VAR_46, VAR_45, 0);
    }

    VAR_25 = VAR_31*4 + VAR_30;
    VAR_22 = VAR_13 ? VAR_18->next_picture_ptr->f->data[0] : VAR_18->last_picture_ptr->f->data[0];
    VAR_23 = VAR_13 ? VAR_18->next_picture_ptr->f->data[1] : VAR_18->last_picture_ptr->f->data[1];
    VAR_24 = VAR_13 ? VAR_18->next_picture_ptr->f->data[2] : VAR_18->last_picture_ptr->f->data[2];
    VAR_34 = VAR_18->mb_x * 16 + VAR_8 + VAR_26;
    VAR_35 = VAR_18->mb_y * 16 + VAR_9 + VAR_27;
    VAR_36 = VAR_18->mb_x * 8 + (VAR_8 >> 1) + VAR_28;
    VAR_37 = VAR_18->mb_y * 8 + (VAR_9 >> 1) + VAR_29;
    VAR_22 += VAR_35 * VAR_18->linesize + VAR_34;
    VAR_23 += VAR_37 * VAR_18->uvlinesize + VAR_36;
    VAR_24 += VAR_37 * VAR_18->uvlinesize + VAR_36;
    if(VAR_18->h_edge_pos - (VAR_11 << 3) < 6 || VAR_18->v_edge_pos - (VAR_12 << 3) < 6 ||
       (unsigned)(VAR_34 - !!VAR_30*2) > VAR_18->h_edge_pos - !!VAR_30*2 - (VAR_11 <<3) - 4 ||
       (unsigned)(VAR_35 - !!VAR_31*2) > VAR_18->v_edge_pos - !!VAR_31*2 - (VAR_12<<3) - 4) {
        VAR_22 -= 2 + 2*VAR_18->linesize;
        VAR_18->vdsp.emulated_edge_mc(VAR_18->sc.edge_emu_buffer, VAR_22,
                                 VAR_18->linesize, VAR_18->linesize,
                                 (VAR_11 << 3) + 6, (VAR_12 << 3) + 6,
                                 VAR_34 - 2, VAR_35 - 2,
                                 VAR_18->h_edge_pos, VAR_18->v_edge_pos);
        VAR_22 = VAR_18->sc.edge_emu_buffer + 2 + 2*VAR_18->linesize;
        VAR_40 = 1;
    }
    if(!VAR_15){
        VAR_19 = VAR_18->dest[0] + VAR_8 + VAR_9 *VAR_18->linesize;
        VAR_20 = VAR_18->dest[1] + (VAR_8>>1) + (VAR_9>>1)*VAR_18->uvlinesize;
        VAR_21 = VAR_18->dest[2] + (VAR_8>>1) + (VAR_9>>1)*VAR_18->uvlinesize;
    }else{
        VAR_19 = VAR_6->tmp_b_block_y [VAR_13] + VAR_8 + VAR_9 *VAR_18->linesize;
        VAR_20 = VAR_6->tmp_b_block_uv[VAR_13*2] + (VAR_8>>1) + (VAR_9>>1)*VAR_18->uvlinesize;
        VAR_21 = VAR_6->tmp_b_block_uv[VAR_13*2+1] + (VAR_8>>1) + (VAR_9>>1)*VAR_18->uvlinesize;
    }

    if(VAR_7 == VAR_2){
        VAR_16[1][VAR_25](VAR_19, VAR_22, VAR_18->linesize);
        VAR_19 += 8;
        VAR_22 += 8;
    }else if(VAR_7 == VAR_3){
        VAR_16[1][VAR_25](VAR_19, VAR_22, VAR_18->linesize);
        VAR_19 += 8 * VAR_18->linesize;
        VAR_22 += 8 * VAR_18->linesize;
    }
    VAR_39 = (VAR_7 != VAR_4) && (VAR_7 != VAR_2) && (VAR_7 != VAR_3);
    VAR_16[!VAR_39][VAR_25](VAR_19, VAR_22, VAR_18->linesize);
    if (VAR_40) {
        uint8_t *VAR_47 = VAR_18->sc.edge_emu_buffer;

        VAR_18->vdsp.emulated_edge_mc(VAR_47, VAR_23,
                                 VAR_18->uvlinesize, VAR_18->uvlinesize,
                                 (VAR_11 << 2) + 1, (VAR_12 << 2) + 1,
                                 VAR_36, VAR_37,
                                 VAR_18->h_edge_pos >> 1, VAR_18->v_edge_pos >> 1);
        VAR_23 = VAR_47;
        VAR_47 += 9*VAR_18->uvlinesize;

        VAR_18->vdsp.emulated_edge_mc(VAR_47, VAR_24,
                                 VAR_18->uvlinesize, VAR_18->uvlinesize,
                                 (VAR_11 << 2) + 1, (VAR_12 << 2) + 1,
                                 VAR_36, VAR_37,
                                 VAR_18->h_edge_pos >> 1, VAR_18->v_edge_pos >> 1);
        VAR_24 = VAR_47;
    }
    VAR_17[2-VAR_11] (VAR_20, VAR_23, VAR_18->uvlinesize, VAR_12*4, VAR_32, VAR_33);
    VAR_17[2-VAR_11] (VAR_21, VAR_24, VAR_18->uvlinesize, VAR_12*4, VAR_32, VAR_33);
}
