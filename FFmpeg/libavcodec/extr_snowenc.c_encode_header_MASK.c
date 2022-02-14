
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int kstate ;
struct TYPE_7__ {scalar_t__ last_htaps; scalar_t__ last_diag_mc; scalar_t__ htaps; scalar_t__ diag_mc; int * hcoeff; int * last_hcoeff; } ;
struct TYPE_6__ {int keyframe; int always_reset; int last_spatial_decomposition_type; int last_qlog; int last_qbias; int last_mv_scale; int last_block_max_depth; int version; int temporal_decomposition_type; int temporal_decomposition_count; int spatial_decomposition_count; int colorspace_type; int nb_planes; int chroma_h_shift; int chroma_v_shift; int spatial_scalability; int max_ref_frames; scalar_t__ last_spatial_decomposition_count; int spatial_decomposition_type; int qlog; int mv_scale; int qbias; int block_max_depth; int * header_state; int c; TYPE_2__* plane; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ Plane ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int,int) ;

__attribute__((used)) static void FUNC_8(SnowContext *VAR_1){
    int VAR_2, VAR_3;
    uint8_t VAR_4[32];

    FUNC_5(VAR_4, VAR_0, sizeof(VAR_4));

    FUNC_6(&VAR_1->c, VAR_4, VAR_1->keyframe);
    if(VAR_1->keyframe || VAR_1->always_reset){
        FUNC_3(VAR_1);
        VAR_1->last_spatial_decomposition_type=
        VAR_1->last_qlog=
        VAR_1->last_qbias=
        VAR_1->last_mv_scale=
        VAR_1->last_block_max_depth= 0;
        for(VAR_2=0; VAR_2<2; VAR_2++){
            Plane *VAR_5= &VAR_1->plane[VAR_2];
            VAR_5->last_htaps=0;
            VAR_5->last_diag_mc=0;
            FUNC_5(VAR_5->last_hcoeff, 0, sizeof(VAR_5->last_hcoeff));
        }
    }
    if(VAR_1->keyframe){
        FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->version, 0);
        FUNC_6(&VAR_1->c, VAR_1->header_state, VAR_1->always_reset);
        FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->temporal_decomposition_type, 0);
        FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->temporal_decomposition_count, 0);
        FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->spatial_decomposition_count, 0);
        FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->colorspace_type, 0);
        if (VAR_1->nb_planes > 2) {
            FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->chroma_h_shift, 0);
            FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->chroma_v_shift, 0);
        }
        FUNC_6(&VAR_1->c, VAR_1->header_state, VAR_1->spatial_scalability);

        FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->max_ref_frames-1, 0);

        FUNC_2(VAR_1);
    }

    if(!VAR_1->keyframe){
        int VAR_6=0;
        for(VAR_2=0; VAR_2<FUNC_1(VAR_1->nb_planes, 2); VAR_2++){
            Plane *VAR_7= &VAR_1->plane[VAR_2];
            VAR_6 |= VAR_7->last_htaps != VAR_7->htaps;
            VAR_6 |= VAR_7->last_diag_mc != VAR_7->diag_mc;
            VAR_6 |= !!FUNC_4(VAR_7->last_hcoeff, VAR_7->hcoeff, sizeof(VAR_7->hcoeff));
        }
        FUNC_6(&VAR_1->c, VAR_1->header_state, VAR_6);
        if(VAR_6){
            for(VAR_2=0; VAR_2<FUNC_1(VAR_1->nb_planes, 2); VAR_2++){
                Plane *VAR_8= &VAR_1->plane[VAR_2];
                FUNC_6(&VAR_1->c, VAR_1->header_state, VAR_8->diag_mc);
                FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_8->htaps/2-1, 0);
                for(VAR_3= VAR_8->htaps/2; VAR_3; VAR_3--)
                    FUNC_7(&VAR_1->c, VAR_1->header_state, FUNC_0(VAR_8->hcoeff[VAR_3]), 0);
            }
        }
        if(VAR_1->last_spatial_decomposition_count != VAR_1->spatial_decomposition_count){
            FUNC_6(&VAR_1->c, VAR_1->header_state, 1);
            FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->spatial_decomposition_count, 0);
            FUNC_2(VAR_1);
        }else
            FUNC_6(&VAR_1->c, VAR_1->header_state, 0);
    }

    FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->spatial_decomposition_type - VAR_1->last_spatial_decomposition_type, 1);
    FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->qlog - VAR_1->last_qlog , 1);
    FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->mv_scale - VAR_1->last_mv_scale, 1);
    FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->qbias - VAR_1->last_qbias , 1);
    FUNC_7(&VAR_1->c, VAR_1->header_state, VAR_1->block_max_depth - VAR_1->last_block_max_depth, 1);

}
