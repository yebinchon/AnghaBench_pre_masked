
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hcoeff; int last_hcoeff; int htaps; int last_htaps; int diag_mc; int last_diag_mc; } ;
struct TYPE_4__ {int spatial_decomposition_count; int last_spatial_decomposition_count; int block_max_depth; int last_block_max_depth; int mv_scale; int last_mv_scale; int qbias; int last_qbias; int qlog; int last_qlog; int spatial_decomposition_type; int last_spatial_decomposition_type; TYPE_2__* plane; int keyframe; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ Plane ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(SnowContext *VAR_0){
    int VAR_1;

    if(!VAR_0->keyframe){
        for(VAR_1=0; VAR_1<2; VAR_1++){
            Plane *VAR_2= &VAR_0->plane[VAR_1];
            VAR_2->last_diag_mc= VAR_2->diag_mc;
            VAR_2->last_htaps = VAR_2->htaps;
            FUNC_0(VAR_2->last_hcoeff, VAR_2->hcoeff, sizeof(VAR_2->hcoeff));
        }
    }

    VAR_0->last_spatial_decomposition_type = VAR_0->spatial_decomposition_type;
    VAR_0->last_qlog = VAR_0->qlog;
    VAR_0->last_qbias = VAR_0->qbias;
    VAR_0->last_mv_scale = VAR_0->mv_scale;
    VAR_0->last_block_max_depth = VAR_0->block_max_depth;
    VAR_0->last_spatial_decomposition_count = VAR_0->spatial_decomposition_count;
}
